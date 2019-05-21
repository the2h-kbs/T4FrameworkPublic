// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Classes/ContentTable/T4ContentTable_World.h" // #27
#include "Classes/ContentTable/T4ContentTable_Player.h" // #27
#include "Classes/ContentTable/T4ContentTable_NPC.h" // #31
#include "Classes/ContentTable/T4ContentTable_FO.h" // #27
#include "Classes/ContentTable/T4ContentTable_Item.h" // #27
#include "Classes/ContentTable/T4ContentTable_Skill.h" // #25
#include "Classes/ContentTable/T4ContentTable_Effect.h" // #25

/**
  * 
 */
struct FT4GameData
{
	FT4GameData(const FName& InRawName)
		: RawName(InRawName)
	{
	}
	virtual ~FT4GameData()
	{
	}
	FName RawName;
};

struct FT4GameWorldData : public FT4GameData
{
	FT4GameWorldData(const FName& InRawName)
		: FT4GameData(InRawName)
	{
	}
	FT4ContentWorldTableRow RawData; // #27
};

struct FT4GamePlayerData : public FT4GameData
{
	FT4GamePlayerData(const FName& InRawName)
		: FT4GameData(InRawName)
	{
	}
	FT4ContentPlayerTableRow RawData; // #27
};

struct FT4GameNPCData : public FT4GameData
{
	FT4GameNPCData(const FName& InRawName)
		: FT4GameData(InRawName)
	{
	}
	FT4ContentNPCTableRow RawData; // #31
};

struct FT4GameFOData : public FT4GameData
{
	FT4GameFOData(const FName& InRawName)
		: FT4GameData(InRawName)
	{
	}
	FT4ContentFOTableRow RawData; // #27
};

struct FT4GameItemData : public FT4GameData
{
	FT4GameItemData(const FName& InRawName)
		: FT4GameData(InRawName)
	{
	}
	FT4ContentItemTableRow RawData; // #27
};

struct FT4GameSkillData : public FT4GameData
{
	FT4GameSkillData(const FName& InRawName)
		: FT4GameData(InRawName)
	{
	}
	FT4ContentSkillTableRow RawData; // #27
};

struct FT4GameEffectData : public FT4GameData
{
	FT4GameEffectData(const FName& InRawName)
		: FT4GameData(InRawName)
	{
	}
	FT4ContentEffectTableRow RawData; // #27
};

struct FT4GameDataInfo
{
	void Reset();

	template <class T> 
	const T* GetDataByUID(const int32& InUID);

	template <class T> 
	const T* GetDataByName(const FName& InName);

	template <class T> 
	const T* GetDataByGuid(const FGuid& InGuid);

	TMap<int32, FT4GameData*> UIDMap;
	TMap<FName, FT4GameData*> NameMap;
	TMap<FGuid, FT4GameData*> GuidMap;
	TArray<FT4GameData*> GameDatas;
	TWeakObjectPtr<UDataTable> DataTable;
};

class UDataTable;
class FT4GameDB
{
public:
	FT4GameDB();
	~FT4GameDB();

	bool Initialize(const TCHAR* InContentMasterPath);
	void Finalize();

	bool IsInitialized() const { return bInitialized; }

	void Reload();

	const FT4GameWorldData* GetWorldDataByUID(const int32& InUID);
	const FT4GameWorldData* GetWorldDataByName(const FName& InName);
	const FT4GameWorldData* GetWorldDataByGuid(const FGuid& InGuid);

	const FT4GamePlayerData* GetPlayerDataByUID(const int32& InUID);
	const FT4GamePlayerData* GetPlayerDataByName(const FName& InName);
	const FT4GamePlayerData* GetPlayerDataByGuid(const FGuid& InGuid);

	const FT4GameNPCData* GetNPCDataByUID(const int32& InUID);
	const FT4GameNPCData* GetNPCDataByName(const FName& InName);
	const FT4GameNPCData* GetNPCDataByGuid(const FGuid& InGuid);

	const FT4GameFOData* GetFODataByUID(const int32& InUID);
	const FT4GameFOData* GetFODataByName(const FName& InName);
	const FT4GameFOData* GetFODataByGuid(const FGuid& InGuid);

	const FT4GameItemData* GetItemDataByUID(const int32& InUID);
	const FT4GameItemData* GetItemDataByName(const FName& InName);
	const FT4GameItemData* GetItemDataByGuid(const FGuid& InGuid);

	const FT4GameSkillData* GetSkillDataByUID(const int32& InUID);
	const FT4GameSkillData* GetSkillDataByName(const FName& InName);
	const FT4GameSkillData* GetSkillDataByGuid(const FGuid& InGuid);

	const FT4GameEffectData* GetEffectDataByUID(const int32& InUID);
	const FT4GameEffectData* GetEffectDataByName(const FName& InName);
	const FT4GameEffectData* GetEffectDataByGuid(const FGuid& InGuid);

private:
	void Reset();

	void OnWorldTableChanged();
	void OnPlayerTableChanged();
	void OnNPCTableChanged(); // #31
	void OnFOTableChanged();
	void OnItemTableChanged();
	void OnSkillTableChanged();
	void OnEffectTableChanged();

private:
	bool bInitialized;
	int32 InitCount;

	FT4GameDataInfo GameWorldData;
	FT4GameDataInfo GamePlayerData;
	FT4GameDataInfo GameNPCData; // #31
	FT4GameDataInfo GameFOData;
	FT4GameDataInfo GameItemData;
	FT4GameDataInfo GameSkillData;
	FT4GameDataInfo GameEffectData;
};

FT4GameDB& GetGameDB();