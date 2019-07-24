// Copyright 2019 SoonBo Noh. All Rights Reserved.

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

	UPROPERTY(EditAnywhere, Category=ClientOnly)
	TSoftObjectPtr<UT4WeaponEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	FName EquipBoneOrSocketName;

	UPROPERTY(EditAnywhere, Category= All)
	FT4GameSkillSetDataID SkillSetNameID; // #50

	UPROPERTY(EditAnywhere, Category= All)
	float AttackRange; // #50

public:
	FT4GameItemWeaponTableRow()
	{
	}
};
