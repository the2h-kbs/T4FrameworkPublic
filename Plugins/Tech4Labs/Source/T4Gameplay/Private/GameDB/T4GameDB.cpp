// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameDB.h"
#include "Classes/GameTable/T4GameTable_Master.h"

#include "T4Core/Public/T4CoreMinimal.h"

#include "T4GameplayInternal.h"

/**
  * 
 */

#if WITH_EDITOR
template <class T, class U>
inline bool CopyDataFromRawInternal(
	FT4GameDatas& InTableInfo,
	const TCHAR* InContextString
)
{
	if (!InTableInfo.DataTable.IsValid())
	{
		return false;
	}
	for (FT4GameDataBase* GameData : InTableInfo.GameDatas)
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

void FT4GameDatas::Reset()
{
	NameMap.Empty();
	GuidMap.Empty();
	for (FT4GameDataBase* GameData : GameDatas)
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
const T* FT4GameDatas::GetRowByName(const FName& InName)
{
	if (!NameMap.Contains(InName))
	{
		return nullptr;
	}
	return static_cast<T*>(NameMap[InName]);
}

template <class T> 
const T* FT4GameDatas::GetRowByGuid(const FGuid& InGuid)
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

bool FT4GameDB::Initialize(const FSoftObjectPath& InGameMasterTablePath)
{
	InitCount++;

	if (bInitialized)
	{
		return true;
	}

	FSoftObjectPath MasterTablePath = InGameMasterTablePath;
	UObject* MasterTableObject = MasterTablePath.TryLoad();
	if (nullptr == MasterTableObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("FT4GameDB : Failed to load Game MasterTable. (%s)"),
			*(InGameMasterTablePath.ToString())
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
			*(InGameMasterTablePath.ToString())
		);
		return false;
	}
	TArray<FT4GameMasterTableRow*> AllRowDatas;
	MasterDataTable->GetAllRows<FT4GameMasterTableRow>(TEXT("GameMasterTables"), AllRowDatas);
	if (0 == AllRowDatas.Num())
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("FT4GameDB : Failed to empty UDataTable. (%s)"),
			*(InGameMasterTablePath.ToString())
		);
		return false;
	}

	for (const FT4GameMasterTableRow* KeyTableRow : AllRowDatas)
	{
		ET4GameDataType GameTableType = KeyTableRow->Type;
		FString TableName = KeyTableRow->Name.ToString();
		FString GameTablePath = KeyTableRow->Table.ToString();
		switch (GameTableType)
		{
			case ET4GameDataType::World: // #27
				{
					if (!LoadTableInternal<FT4GameWorldTableRow, FT4GameWorldData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GameWorldDatas
					))
					{
						continue;
					}
				}
				break;

			case ET4GameDataType::Player: // #27
				{
					if (!LoadTableInternal<FT4GamePlayerTableRow, FT4GamePlayerData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GamePlayerDatas
					))
					{
						continue;
					}
				}
				break;

			case ET4GameDataType::NPC: // #31
				{
					if (!LoadTableInternal<FT4GameNPCTableRow, FT4GameNPCData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GameNPCDatas
					))
					{
						continue;
					}
				}
				break;

			case ET4GameDataType::FO: // #27
				{
					if (!LoadTableInternal<FT4GameFOTableRow, FT4GameFOData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GameFODatas
					))
					{
						continue;
					}
				}
				break;

			case ET4GameDataType::Item_Weapon: // #27, #48
				{
					if (!LoadTableInternal<FT4GameItemWeaponTableRow, FT4GameItemWeaponData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GameItemWeaponDatas
					))
					{
						continue;
					}
				}
				break;

			case ET4GameDataType::Item_Costume: // #27, #48
				{
					if (!LoadTableInternal<FT4GameItemCostumeTableRow, FT4GameItemCostumeData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GameItemCostumeDatas
					))
					{
						continue;
					}
				}
				break;

			case ET4GameDataType::Skill: // #25
				{
					if (!LoadTableInternal<FT4GameSkillTableRow, FT4GameSkillData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GameSkillDatas
					))
					{
						continue;
					}
				}
				break;

			case ET4GameDataType::Effect: // #25
				{
					if (!LoadTableInternal<FT4GameEffectTableRow, FT4GameEffectData>(
						*TableName,
						*GameTablePath,
						GameTableType,
						GameEffectDatas
					))
					{
						continue;
					}
				}
				break;

			default:
				{
					UE_LOG(
						LogT4Gameplay,
						Error,
						TEXT("FT4GameDB : Unknown game '%s' table. (%s)"),
						*TableName,
						*GameTablePath
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
	GameDataIDs.Empty(); // #48
	GameDataGuids.Empty(); // #48

	GameWorldDatas.Reset();
	GamePlayerDatas.Reset();
	GameNPCDatas.Reset(); // #31
	GameFODatas.Reset();
	GameItemWeaponDatas.Reset();
	GameItemCostumeDatas.Reset();
	GameSkillDatas.Reset();
	GameEffectDatas.Reset();
}

void FT4GameDB::OnGameTableChanged()
{
#if WITH_EDITOR
	// TODO : 현재 런타임에 추가된 것은 대응이 안됨!
	CopyDataFromRawInternal<FT4GameWorldTableRow, FT4GameWorldData>(
		GameWorldDatas,
		TEXT("WorldTable")
	);

	CopyDataFromRawInternal<FT4GamePlayerTableRow, FT4GamePlayerData>(
		GamePlayerDatas,
		TEXT("PlayerTable")
	);

	CopyDataFromRawInternal<FT4GameNPCTableRow, FT4GameNPCData>(
		GameNPCDatas,
		TEXT("NPCTable")
	);

	CopyDataFromRawInternal<FT4GameFOTableRow, FT4GameFOData>(
		GameFODatas,
		TEXT("FOTable")
	);

	CopyDataFromRawInternal<FT4GameItemWeaponTableRow, FT4GameItemWeaponData>(
		GameItemWeaponDatas, 
		TEXT("ItemWeaponTable")
	);

	CopyDataFromRawInternal<FT4GameItemCostumeTableRow, FT4GameItemCostumeData>(
		GameItemCostumeDatas,
		TEXT("ItemCostumeTable")
	);

	CopyDataFromRawInternal<FT4GameSkillTableRow, FT4GameSkillData>(
		GameSkillDatas,
		TEXT("SkillTable")
	);

	CopyDataFromRawInternal<FT4GameEffectTableRow, FT4GameEffectData>(
		GameEffectDatas,
		TEXT("EffectTable")
	);
#endif
}

template <class T>
const T* FT4GameDB::GetGameData(const FT4GameDataID& InDataID) // #48
{
	switch (InDataID.Type)
	{
		case ET4GameDataType::World:
			return GameWorldDatas.GetRowByName<T>(InDataID.RowName);
		case ET4GameDataType::Player:
			return GamePlayerDatas.GetRowByName<T>(InDataID.RowName);
		case ET4GameDataType::NPC:
			return GameNPCDatas.GetRowByName<T>(InDataID.RowName);
		case ET4GameDataType::FO:
			return GameFODatas.GetRowByName<T>(InDataID.RowName);
		case ET4GameDataType::Item_Weapon: // #48
			return GameItemWeaponDatas.GetRowByName<T>(InDataID.RowName);
		case ET4GameDataType::Item_Costume: // #48
			return GameItemCostumeDatas.GetRowByName<T>(InDataID.RowName);
		case ET4GameDataType::Skill:
			return GameSkillDatas.GetRowByName<T>(InDataID.RowName);
		case ET4GameDataType::Effect:
			return GameEffectDatas.GetRowByName<T>(InDataID.RowName);
		default:
			{
				UE_LOG(
					LogT4Gameplay,
					Error,
					TEXT("FT4GameDB : Unknown GameData '%s'."),
					InDataID.ToTypeString()
				);
			}
			break;
	}
	return nullptr;
}

template <class T>
const T* FT4GameDB::GetGameData(const FGuid& InDataGuid) // #48
{
	if (!GameDataGuids.Contants(InDataGuid))
	{
		return nullptr;
	}
	const FT4GameDataID& GameDataID = GameDataGuids[InDataGuid];
	return GetGameData<T>(GameDataID);
}

bool FT4GameDB::HasGameData(const FT4GameDataID& InDataID) const // #48
{
	return GameDataIDs.Contains(InDataID);
}

template <class T, class U>
bool FT4GameDB::LoadTableInternal(
	const TCHAR* InTableName,
	const TCHAR* InTablePath,
	ET4GameDataType InGameTableType, // #48
	FT4GameDatas& OutTableInfo
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
		// #48
		const FT4GameDataID NewGameDataID(InGameTableType, TableData->Name);
		/*
		if (GameDataIDs.Contants(NewGameDataID))
		{
			UE_LOG(
				LogT4Gameplay,
				Error,
				TEXT("LoadTableInternal : Failed to Add GameData. '%s' already exists. skipped."),
				*(NewGameDataID.ToString())
			);
			continue;
		}
		if (GameDataGuids.Contants(TableData->Guid))
		{
			UE_LOG(
				LogT4Gameplay,
				Error,
				TEXT("LoadTableInternal : Failed to Add GameData. GameData '%s' Guid '%s' already exists. skipped."),
				*(NewGameDataID.ToString()),
				*(TableData->Guid.ToString())
			);
			continue;
		}
		*/
		// ~#48

		U* NewGameData = new U(TableData->Name);
		NewGameData->RawData = *TableData;
		OutTableInfo.GameDatas.Add(NewGameData);
		OutTableInfo.NameMap.Add(TableData->Name, NewGameData);
		OutTableInfo.GuidMap.Add(TableData->Guid, NewGameData);

		GameDataIDs.Add(NewGameDataID); // #48
		GameDataGuids.Add(TableData->Guid, NewGameDataID); // #48
	}

#if WITH_EDITOR
	OutTableInfo.DataTable = DataTable;
	OutTableInfo.DataTable->AddToRoot();
	DataTable->OnDataTableChanged().AddRaw(this, &FT4GameDB::OnGameTableChanged);
#endif
	return true;
}

static FT4GameDB GT4GameDB;
FT4GameDB& GetGameDB()
{
	return GT4GameDB;
}
