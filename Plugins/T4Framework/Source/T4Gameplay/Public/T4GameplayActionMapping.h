// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"

/**
  * #39
 */
namespace T4GameplayActionMapping
{
	T4GAMEPLAY_API void Reset(ET4LayerType InLayerType);

	T4GAMEPLAY_API const FName GetPrimaryAttackTableNameID(ET4LayerType InLayerType);
	T4GAMEPLAY_API const FName GetPlayerSpawnTableNameID(ET4LayerType InLayerType);
	T4GAMEPLAY_API const FName GetNPCSpawnTableNameID(ET4LayerType InLayerType);
	T4GAMEPLAY_API const FName GetEquipItemTableNameID(ET4LayerType InLayerType);

	T4GAMEPLAY_API void SetPrimaryAttackTableNameID(ET4LayerType InLayerType, const FName& InSkillNameID);
	T4GAMEPLAY_API void SetPlayerSpawnTableNameID(ET4LayerType InLayerType, const FName& InCharacterNameID);
	T4GAMEPLAY_API void SetNPCSpawnTableNameID(ET4LayerType InLayerType, const FName& InNPCNameID);
	T4GAMEPLAY_API void SetEquipItemTableNameID(ET4LayerType InLayerType, const FName& InItemNameID);
}
