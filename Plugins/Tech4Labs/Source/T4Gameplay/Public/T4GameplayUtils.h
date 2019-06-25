// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"

/**
  *
 */
namespace T4GameplayUtil
{
	T4GAMEPLAY_API bool DoPlayerSpawn(ET4LayerType InLayerType, const FName& InPlayerDataID); // #43
	T4GAMEPLAY_API bool DoNPCSpawn(ET4LayerType InLayerType, const FName& InNPCDataID); // #43
	T4GAMEPLAY_API bool DoEquipOrUnEquipWeapon(
		ET4LayerType InLayerType,
		const FName& InWeaponDataID,
		bool bInMainWeapon
	); // #48
}
