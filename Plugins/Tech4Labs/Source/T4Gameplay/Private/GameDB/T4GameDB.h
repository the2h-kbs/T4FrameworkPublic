// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/T4GameplayDataTypes.h" // #48
#include "Classes/GameTable/T4GameTable_World.h" // #27
#include "Classes/GameTable/T4GameTable_Player.h" // #27
#include "Classes/GameTable/T4GameTable_NPC.h" // #31
#include "Classes/GameTable/T4GameTable_FO.h" // #27
#include "Classes/GameTable/T4GameTable_ItemWeapon.h" // #27, #48
#include "Classes/GameTable/T4GameTable_ItemCostume.h" // #27, #48
#include "Classes/GameTable/T4GameTable_Skill.h" // #25
#include "Classes/GameTable/T4GameTable_Effect.h" // #25

/**
  * 
 */
struct FT4GameDataBase
{
	FT4GameDataBase(const FName& InRawName)
		: RawName(InRawName)
	{
	}
	virtual ~FT4GameDataBase()
	{
	}
	virtual ET4GameDataType GetType() = 0; // #48

	FName RawName;
};

struct FT4GameWorldData : public FT4GameDataBase
{
	FT4GameWorldData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::World; } // #48

	FT4GameWorldTableRow RawData; // #27
};

struct FT4GamePlayerData : public FT4GameDataBase
{
	FT4GamePlayerData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::Player; } // #48

	FT4GamePlayerTableRow RawData; // #27
};

struct FT4GameNPCData : public FT4GameDataBase
{
	FT4GameNPCData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::NPC; } // #48

	FT4GameNPCTableRow RawData; // #31
};

struct FT4GameFOData : public FT4GameDataBase
{
	FT4GameFOData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::FO; } // #48

	FT4GameFOTableRow RawData; // #27
};

struct FT4GameItemWeaponData : public FT4GameDataBase
{
	FT4GameItemWeaponData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::Item_Weapon; } // #48

	FT4GameItemWeaponTableRow RawData; // #27, #48
};

struct FT4GameItemCostumeData : public FT4GameDataBase
{
	FT4GameItemCostumeData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::Item_Costume; } // #48

	FT4GameItemCostumeTableRow RawData; // #27, #48
};

struct FT4GameSkillData : public FT4GameDataBase
{
	FT4GameSkillData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::Skill; } // #48

	FT4GameSkillTableRow RawData; // #27
};

struct FT4GameEffectData : public FT4GameDataBase
{
	FT4GameEffectData(const FName& InRawName)
		: FT4GameDataBase(InRawName)
	{
	}
	ET4GameDataType GetType() override { return ET4GameDataType::Effect; } // #48

	FT4GameEffectTableRow RawData; // #27
};

struct FT4GameDatas
{
	void Reset();

	template <class T> 
	const T* GetRowByName(const FName& InName);

	template <class T> 
	const T* GetRowByGuid(const FGuid& InGuid);

	TMap<FName, FT4GameDataBase*> NameMap;
	TMap<FGuid, FT4GameDataBase*> GuidMap;
	TArray<FT4GameDataBase*> GameDatas;
	TWeakObjectPtr<UDataTable> DataTable;
};

class UDataTable;
class FT4GameDB
{
public:
	FT4GameDB();
	~FT4GameDB();

	bool Initialize(const FSoftObjectPath& InGameMasterTablePath);
	void Finalize();

	bool IsInitialized() const { return bInitialized; }

	void Reload();

	template <class T>
	const T* GetGameData(const FT4GameDataID& InDataID); // #48

	template <class T>
	const T* GetGameData(const FGuid& InDataGuid); // #48

	bool HasGameData(const FT4GameDataID& InDataID) const; // #48

private:
	void Reset();

	void OnGameTableChanged();

	template <class T, class U>
	bool LoadTableInternal(
		const TCHAR* InTableName,
		const TCHAR* InTablePath,
		ET4GameDataType InGameTableType, // #48
		FT4GameDatas& OutTableInfo
	);

private:
	bool bInitialized;
	int32 InitCount;

	TSet<FT4GameDataID> GameDataIDs; // #48
	TMap<FGuid, FT4GameDataID> GameDataGuids; // #48

	FT4GameDatas GameWorldDatas;
	FT4GameDatas GamePlayerDatas;
	FT4GameDatas GameNPCDatas; // #31
	FT4GameDatas GameFODatas;
	FT4GameDatas GameItemWeaponDatas;
	FT4GameDatas GameItemCostumeDatas;
	FT4GameDatas GameSkillDatas;
	FT4GameDatas GameEffectDatas;
};

FT4GameDB& GetGameDB();