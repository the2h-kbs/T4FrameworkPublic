// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayDataTypes.h"
#include "Classes/Engine/DataTable.h"
#include "T4GameTable_SkillSet.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4ContiAsset;

USTRUCT()
struct FT4GameSkillSetTableRow : public FTableRowBase
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

public:
	FT4GameSkillSetTableRow()
	{
	}
};
