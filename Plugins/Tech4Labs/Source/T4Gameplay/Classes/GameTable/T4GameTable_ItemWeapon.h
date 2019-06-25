// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameTable_ItemBase.h" // #48
#include "T4GameTable_ItemWeapon.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4WeaponEntityAsset;

USTRUCT()
struct FT4GameItemWeaponTableRow : public FT4GameItemTableRow
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category= Common)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4GameSkillDataID ComboPrimaryAttackNameID;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4GameSkillDataID ComboSecondaryAttackNameID;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4GameSkillDataID ComboTertiaryAttackNameID;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4GameSkillDataID FinishAttackNameID;

	UPROPERTY(EditAnywhere, Category=ClientOnly)
	TSoftObjectPtr<UT4WeaponEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	FName EquipBoneOrSocketName;
};
