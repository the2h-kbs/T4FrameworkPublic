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
struct FT4GameDBRow
{
	FT4GameDBRow(const FName& InRawName)
		: RawName(InRawName)
	{
	}
	virtual ~FT4GameDBRow()
	{
	}
	FName RawName;
};

struct FT4GameDBWorldRow : public FT4GameDBRow
{
	FT4GameDBWorldRow(const FName& InRawName)
		: FT4GameDBRow(InRawName)
	{
	}
	FT4ContentWorldTableRow RawData; // #27
};

struct FT4GameDBPlayerRow : public FT4GameDBRow
{
	FT4GameDBPlayerRow(const FName& InRawName)
		: FT4GameDBRow(InRawName)
	{
	}
	FT4ContentPlayerTableRow RawData; // #27
};

struct FT4GameDBNPCRow : public FT4GameDBRow
{
	FT4GameDBNPCRow(const FName& InRawName)
		: FT4GameDBRow(InRawName)
	{
	}
	FT4ContentNPCTableRow RawData; // #31
};

struct FT4GameDBFORow : public FT4GameDBRow
{
	FT4GameDBFORow(const FName& InRawName)
		: FT4GameDBRow(InRawName)
	{
	}
	FT4ContentFOTableRow RawData; // #27
};

struct FT4GameDBItemRow : public FT4GameDBRow
{
	FT4GameDBItemRow(const FName& InRawName)
		: FT4GameDBRow(InRawName)
	{
	}
	FT4ContentItemTableRow RawData; // #27
};

struct FT4GameDBSkillRow : public FT4GameDBRow
{
	FT4GameDBSkillRow(const FName& InRawName)
		: FT4GameDBRow(InRawName)
	{
	}
	FT4ContentSkillTableRow RawData; // #27
};

struct FT4GameDBEffectRow : public FT4GameDBRow
{
	FT4GameDBEffectRow(const FName& InRawName)
		: FT4GameDBRow(InRawName)
	{
	}
	FT4ContentEffectTableRow RawData; // #27
};

struct FT4GameDBRowInfo
{
	void Reset();

	template <class T> 
	const T* GetRowByUID(const int32& InUID);

	template <class T> 
	const T* GetRowByName(const FName& InName);

	template <class T> 
	const T* GetRowByGuid(const FGuid& InGuid);

	TMap<int32, FT4GameDBRow*> UIDMap;
	TMap<FName, FT4GameDBRow*> NameMap;
	TMap<FGuid, FT4GameDBRow*> GuidMap;
	TArray<FT4GameDBRow*> GameDatas;
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

	const FT4GameDBWorldRow* GetWorldRowByUID(const int32& InUID);
	const FT4GameDBWorldRow* GetWorldRowByName(const FName& InName);
	const FT4GameDBWorldRow* GetWorldRowByGuid(const FGuid& InGuid);

	const FT4GameDBPlayerRow* GetPlayerRowByUID(const int32& InUID);
	const FT4GameDBPlayerRow* GetPlayerRowByName(const FName& InName);
	const FT4GameDBPlayerRow* GetPlayerRowByGuid(const FGuid& InGuid);

	const FT4GameDBNPCRow* GetNPCRowByUID(const int32& InUID);
	const FT4GameDBNPCRow* GetNPCRowByName(const FName& InName);
	const FT4GameDBNPCRow* GetNPCRowByGuid(const FGuid& InGuid);

	const FT4GameDBFORow* GetFORowByUID(const int32& InUID);
	const FT4GameDBFORow* GetFORowByName(const FName& InName);
	const FT4GameDBFORow* GetFORowByGuid(const FGuid& InGuid);

	const FT4GameDBItemRow* GetItemRowByUID(const int32& InUID);
	const FT4GameDBItemRow* GetItemRowByName(const FName& InName);
	const FT4GameDBItemRow* GetItemRowByGuid(const FGuid& InGuid);

	const FT4GameDBSkillRow* GetSkillRowByUID(const int32& InUID);
	const FT4GameDBSkillRow* GetSkillRowByName(const FName& InName);
	const FT4GameDBSkillRow* GetSkillRowByGuid(const FGuid& InGuid);

	const FT4GameDBEffectRow* GetEffectRowByUID(const int32& InUID);
	const FT4GameDBEffectRow* GetEffectRowByName(const FName& InName);
	const FT4GameDBEffectRow* GetEffectRowByGuid(const FGuid& InGuid);

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

	FT4GameDBRowInfo GameWorldData;
	FT4GameDBRowInfo GamePlayerData;
	FT4GameDBRowInfo GameNPCData; // #31
	FT4GameDBRowInfo GameFOData;
	FT4GameDBRowInfo GameItemData;
	FT4GameDBRowInfo GameSkillData;
	FT4GameDBRowInfo GameEffectData;
};

FT4GameDB& GetGameDB();