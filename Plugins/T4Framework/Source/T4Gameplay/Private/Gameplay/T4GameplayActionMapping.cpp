// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "Public/T4GameplayActionMapping.h"

#include "T4GameplayInternal.h"

/**
  * #39
 */
struct FT4AcionMapping
{
	FT4AcionMapping()
	{
		Reset();
	}

	void Reset()
	{
		PrimarySkillNameID = TEXT("NormalAttack");
		CharacterNameID = TEXT("DefaultCharacter");
		NPCNameID = TEXT("DefaultNPC");
		EquipItemNameID = TEXT("DefaultSword");
	}

	FName PrimarySkillNameID;
	FName CharacterNameID;
	FName NPCNameID;
	FName EquipItemNameID;
};

static FT4AcionMapping GActionMappingFallback;
static TMap<ET4LayerType, FT4AcionMapping> GT4ActionMapping;

namespace T4GameplayActionMapping
{
	void Reset(ET4LayerType InLayerType)
	{
		if (GT4ActionMapping.Contains(InLayerType))
		{
			GT4ActionMapping[InLayerType].Reset();
		}
	}

	const FName GetPrimaryAttackTableNameID(ET4LayerType InLayerType)
	{
		if (!GT4ActionMapping.Contains(InLayerType))
		{
			return GActionMappingFallback.PrimarySkillNameID;
		}
		return GT4ActionMapping[InLayerType].PrimarySkillNameID;
	}

	const FName GetPlayerSpawnTableNameID(ET4LayerType InLayerType)
	{
		if (!GT4ActionMapping.Contains(InLayerType))
		{
			return GActionMappingFallback.CharacterNameID;
		}
		return GT4ActionMapping[InLayerType].CharacterNameID;
	}

	const FName GetNPCSpawnTableNameID(ET4LayerType InLayerType)
	{
		if (!GT4ActionMapping.Contains(InLayerType))
		{
			return GActionMappingFallback.NPCNameID;
		}
		return GT4ActionMapping[InLayerType].NPCNameID;
	}

	const FName GetEquipItemTableNameID(ET4LayerType InLayerType)
	{
		if (!GT4ActionMapping.Contains(InLayerType))
		{
			return GActionMappingFallback.EquipItemNameID;
		}
		return GT4ActionMapping[InLayerType].EquipItemNameID;
	}

	static void CheckAndCreateNewActionMapping(ET4LayerType InLayerType)
	{
		if (!GT4ActionMapping.Contains(InLayerType))
		{
			FT4AcionMapping NewActionMapping;
			GT4ActionMapping.Add(InLayerType, NewActionMapping);
		}
	}

	void SetPrimaryAttackTableNameID(ET4LayerType InLayerType, const FName& InSkillNameID)
	{
		CheckAndCreateNewActionMapping(InLayerType);
		FT4AcionMapping& ActionMapping = GT4ActionMapping[InLayerType];
		ActionMapping.PrimarySkillNameID = InSkillNameID;
	}

	void SetPlayerSpawnTableNameID(ET4LayerType InLayerType, const FName& InCharacterNameID)
	{
		CheckAndCreateNewActionMapping(InLayerType);
		FT4AcionMapping& ActionMapping = GT4ActionMapping[InLayerType];
		ActionMapping.CharacterNameID = InCharacterNameID;
	}

	void SetNPCSpawnTableNameID(ET4LayerType InLayerType, const FName& InNPCNameID)
	{
		CheckAndCreateNewActionMapping(InLayerType);
		FT4AcionMapping& ActionMapping = GT4ActionMapping[InLayerType];
		ActionMapping.NPCNameID = InNPCNameID;
	}

	void SetEquipItemTableNameID(ET4LayerType InLayerType, const FName& InItemNameID)
	{
		CheckAndCreateNewActionMapping(InLayerType);
		FT4AcionMapping& ActionMapping = GT4ActionMapping[InLayerType];
		ActionMapping.EquipItemNameID = InItemNameID;
	}
}