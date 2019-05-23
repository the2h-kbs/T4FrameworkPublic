// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameDB.h"
#include "Classes/ContentTable/T4ContentTable_Master.h"

#include "T4Core/Public/T4CoreMinimal.h"

#include "T4GameplayInternal.h"

/**
  * 
 */

#if WITH_EDITOR
template <class T, class U>
inline bool CopyDataFromRawInternal(
	FT4GameDataInfo& InTableInfo,
	const TCHAR* InContextString
)
{
	if (!InTableInfo.DataTable.IsValid())
	{
		return false;
	}
	for (FT4GameData* GameData : InTableInfo.GameDatas)
	{
		const T* TableRow = InTableInfo.DataTable->FindRow<T>(
			GameData->RawName,
			InContextString
		);
		if (nullptr != TableRow)
		{
			U* ConvertData = static_cast<U*>(GameData);
			check(nullptr != ConvertData);
			ConvertData->RawData = *TableRow;
		}
	}
	return true;
}
#endif

template <class T, class U>
inline bool LoadTableInternal(
	const TCHAR* InTableName,
	const TCHAR* InTablePath,
	FT4GameDataInfo& OutTableInfo
)
{
	FSoftObjectPath TablePath = FString(InTablePath);
	UObject* TableObject = TablePath.TryLoad();
	if (nullptr == TableObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("LoadTableInternal : Failed to load content '%s' table. (%s)"),
			InTableName,
			InTablePath
		);
		return false;
	}
	UDataTable* DataTable = Cast<UDataTable>(TableObject);
	if (nullptr == DataTable)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("LoadTableInternal : Failed to convert '%s' UDataTable. (%s)"),
			InTableName,
			InTablePath
		);
		return false;
	}
	TArray<T*> AllRowDatas;
	DataTable->GetAllRows<T>(InTableName, AllRowDatas);
	for (const T* TableData : AllRowDatas)
	{
		U* NewGameData = new U(TableData->Name);
		NewGameData->RawData = *TableData;
		OutTableInfo.GameDatas.Add(NewGameData);
		OutTableInfo.UIDMap.Add(TableData->UID, NewGameData);
		OutTableInfo.NameMap.Add(TableData->Name, NewGameData);
		OutTableInfo.GuidMap.Add(TableData->Guid, NewGameData);
	}
#if WITH_EDITOR
	OutTableInfo.DataTable = DataTable;
	OutTableInfo.DataTable->AddToRoot();
#endif
	return true;
}

void FT4GameDataInfo::Reset()
{
	UIDMap.Empty();
	NameMap.Empty();
	GuidMap.Empty();
	for (FT4GameData* GameData : GameDatas)
	{
		check(nullptr != GameData);
		delete GameData;
	}
	GameDatas.Empty();
#if WITH_EDITOR
	if (DataTable.IsValid())
	{
		DataTable->RemoveFromRoot();
		DataTable.Reset();
	}
#endif
}

template <class T> 
const T* FT4GameDataInfo::GetDataByUID(const int32& InUID)
{
	if (!UIDMap.Contains(InUID))
	{
		return nullptr;
	}
	return static_cast<T*>(UIDMap[InUID]);
}

template <class T> 
const T* FT4GameDataInfo::GetDataByName(const FName& InName)
{
	if (!NameMap.Contains(InName))
	{
		return nullptr;
	}
	return static_cast<T*>(NameMap[InName]);
}

template <class T> 
const T* FT4GameDataInfo::GetDataByGuid(const FGuid& InGuid)
{
	if (!GuidMap.Contains(InGuid))
	{
		return nullptr;
	}
	return static_cast<T*>(GuidMap[InGuid]);
}

FT4GameDB::FT4GameDB()
	: bInitialized(false)
	, InitCount(0)
{
}

FT4GameDB::~FT4GameDB()
{
}

bool FT4GameDB::Initialize(const TCHAR* InContentMasterPath)
{
	InitCount++;

	if (bInitialized)
	{
		return true;
	}

	FSoftObjectPath MasterTablePath;
	MasterTablePath.SetPath(FString(InContentMasterPath));
	UObject* MasterTableObject = MasterTablePath.TryLoad();
	if (nullptr == MasterTableObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("FT4GameDB : Failed to load Content MasterTable. (%s)"),
			InContentMasterPath
		);
		return false;
	}
	UDataTable* MasterDataTable = Cast<UDataTable>(MasterTableObject);
	if (nullptr == MasterDataTable)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("FT4GameDB : Failed to convert UDataTable. (%s)"),
			InContentMasterPath
		);
		return false;
	}
	TArray<FT4ContentMasterTableRow*> AllRowDatas;
	MasterDataTable->GetAllRows<FT4ContentMasterTableRow>(TEXT("ContentMasterTables"), AllRowDatas);
	if (0 == AllRowDatas.Num())
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("FT4GameDB : Failed to empty UDataTable. (%s)"),
			InContentMasterPath
		);
		return false;
	}

	for (const FT4ContentMasterTableRow* KeyTableRow : AllRowDatas)
	{
		ET4ContentTableType ContentTableType = KeyTableRow->Type;
		FString TableName = KeyTableRow->Name.ToString();
		FString ContentTablePath = KeyTableRow->Table.ToString();
		switch (ContentTableType)
		{
			case ET4ContentTableType::World: // #27
				{
					if (!LoadTableInternal<FT4ContentWorldTableRow, FT4GameWorldData>(
						*TableName,
						*ContentTablePath,
						GameWorldData
					))
					{
						continue;
					}
#if WITH_EDITOR
					if (GameWorldData.DataTable.IsValid())
					{
						GameWorldData.DataTable->OnDataTableChanged().AddRaw(
							this,
							&FT4GameDB::OnWorldTableChanged
						);
					}
#endif
				}
				break;

			case ET4ContentTableType::Player: // #27
				{
					if (!LoadTableInternal<FT4ContentPlayerTableRow, FT4GamePlayerData>(
						*TableName,
						*ContentTablePath,
						GamePlayerData
					))
					{
						continue;
					}
#if WITH_EDITOR
					if (GamePlayerData.DataTable.IsValid())
					{
						GamePlayerData.DataTable->OnDataTableChanged().AddRaw(
							this,
							&FT4GameDB::OnPlayerTableChanged
						);
					}
#endif
				}
				break;

			case ET4ContentTableType::NPC: // #31
				{
					if (!LoadTableInternal<FT4ContentNPCTableRow, FT4GameNPCData>(
						*TableName,
						*ContentTablePath,
						GameNPCData
					))
					{
						continue;
					}
#if WITH_EDITOR
					if (GameNPCData.DataTable.IsValid())
					{
						GameNPCData.DataTable->OnDataTableChanged().AddRaw(
							this,
							&FT4GameDB::OnNPCTableChanged
						);
					}
#endif
				}
				break;

			case ET4ContentTableType::FO: // #27
				{
					if (!LoadTableInternal<FT4ContentFOTableRow, FT4GameFOData>(
						*TableName,
						*ContentTablePath,
						GameFOData
					))
					{
						continue;
					}
#if WITH_EDITOR
					if (GameFOData.DataTable.IsValid())
					{
						GameFOData.DataTable->OnDataTableChanged().AddRaw(
							this,
							&FT4GameDB::OnFOTableChanged
						);
					}
#endif
				}
				break;

			case ET4ContentTableType::Item: // #27
				{
					if (!LoadTableInternal<FT4ContentItemTableRow, FT4GameItemData>(
						*TableName,
						*ContentTablePath,
						GameItemData
					))
					{
						continue;
					}
#if WITH_EDITOR
					if (GameItemData.DataTable.IsValid())
					{
						GameItemData.DataTable->OnDataTableChanged().AddRaw(
							this,
							&FT4GameDB::OnItemTableChanged
						);
					}
#endif
				}
				break;

			case ET4ContentTableType::Skill: // #25
				{
					if (!LoadTableInternal<FT4ContentSkillTableRow, FT4GameSkillData>(
						*TableName,
						*ContentTablePath,
						GameSkillData
					))
					{
						continue;
					}
#if WITH_EDITOR
					if (GameSkillData.DataTable.IsValid())
					{
						GameSkillData.DataTable->OnDataTableChanged().AddRaw(
							this,
							&FT4GameDB::OnSkillTableChanged
						);
					}
#endif
				}
				break;

			case ET4ContentTableType::Effect: // #25
				{
					if (!LoadTableInternal<FT4ContentEffectTableRow, FT4GameEffectData>(
						*TableName,
						*ContentTablePath,
						GameEffectData
					))
					{
						continue;
					}
#if WITH_EDITOR
					if (GameEffectData.DataTable.IsValid())
					{
						GameEffectData.DataTable->OnDataTableChanged().AddRaw(
							this,
							&FT4GameDB::OnEffectTableChanged
						);
					}
#endif
				}
				break;

			default:
				{
					UE_LOG(
						LogT4Gameplay,
						Error,
						TEXT("FT4GameDB : Unknown content '%s' table. (%s)"),
						*TableName,
						*ContentTablePath
					);
				}
				break;
		}
	}

	bInitialized = true;
	return true;
}

void FT4GameDB::Finalize()
{
	if (!bInitialized)
	{
		return;
	}
	InitCount--;
	if (0 < InitCount)
	{
		return;
	}
	Reset();
	bInitialized = false;
}

void FT4GameDB::Reload()
{
	// TODO
}

void FT4GameDB::Reset()
{
	GameWorldData.Reset();
	GamePlayerData.Reset();
	GameNPCData.Reset(); // #31
	GameFOData.Reset();
	GameItemData.Reset();
	GameSkillData.Reset();
	GameEffectData.Reset();
}

void FT4GameDB::OnWorldTableChanged()
{
#if WITH_EDITOR
	CopyDataFromRawInternal<FT4ContentWorldTableRow, FT4GameWorldData>(
		GameWorldData,
		TEXT("WorldTable")
	);
#endif
}

void FT4GameDB::OnPlayerTableChanged()
{
#if WITH_EDITOR
	CopyDataFromRawInternal<FT4ContentPlayerTableRow, FT4GamePlayerData>(
		GamePlayerData,
		TEXT("PlayerTable")
	);
#endif
}

void FT4GameDB::OnNPCTableChanged()
{
#if WITH_EDITOR
	CopyDataFromRawInternal<FT4ContentNPCTableRow, FT4GameNPCData>(
		GameNPCData,
		TEXT("NPCTable")
		);
#endif
}

void FT4GameDB::OnFOTableChanged()
{
#if WITH_EDITOR
	CopyDataFromRawInternal<FT4ContentFOTableRow, FT4GameFOData>(
		GameFOData,
		TEXT("FOTable")
	);
#endif
}

void FT4GameDB::OnItemTableChanged()
{
#if WITH_EDITOR
	CopyDataFromRawInternal<FT4ContentItemTableRow, FT4GameItemData>(
		GameItemData, 
		TEXT("ItemTable")
	);
#endif
}

void FT4GameDB::OnSkillTableChanged()
{
#if WITH_EDITOR
	CopyDataFromRawInternal<FT4ContentSkillTableRow, FT4GameSkillData>(
		GameSkillData,
		TEXT("SkillTable")
	);
#endif
}

void FT4GameDB::OnEffectTableChanged()
{
#if WITH_EDITOR
	CopyDataFromRawInternal<FT4ContentEffectTableRow, FT4GameEffectData>(
		GameEffectData,
		TEXT("EffectTable")
	);
#endif
}

#define DEFINE_GETTER_GAME_DATA(x)														\
const FT4Game##x##Data* FT4GameDB::Get##x##DataByUID(const int32& InUID)				\
{																						\
	return Game##x##Data.GetDataByUID<FT4Game##x##Data>(InUID);							\
}																						\
const FT4Game##x##Data* FT4GameDB::Get##x##DataByName(const FName& InName)				\
{																						\
	return Game##x##Data.GetDataByName<FT4Game##x##Data>(InName);						\
}																						\
const FT4Game##x##Data* FT4GameDB::Get##x##DataByGuid(const FGuid& InGuid)				\
{																						\
	return Game##x##Data.GetDataByGuid<FT4Game##x##Data>(InGuid);						\
}

DEFINE_GETTER_GAME_DATA(World)
DEFINE_GETTER_GAME_DATA(Player)
DEFINE_GETTER_GAME_DATA(NPC)
DEFINE_GETTER_GAME_DATA(FO)
DEFINE_GETTER_GAME_DATA(Item)
DEFINE_GETTER_GAME_DATA(Skill)
DEFINE_GETTER_GAME_DATA(Effect)

static FT4GameDB GT4GameDB;
FT4GameDB& GetGameDB()
{
	return GT4GameDB;
}
