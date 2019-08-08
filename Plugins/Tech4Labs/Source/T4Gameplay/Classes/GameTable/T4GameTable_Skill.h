// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/GameTable/T4GameTableDataTypes.h" // #48
#include "T4Engine/Public/T4EngineTypes.h" // #63
#include "Classes/Engine/DataTable.h"

#include "T4GameTable_Skill.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4ContiAsset;

// #T4_ADD_SKILL_CONTENT_TAG 

USTRUCT()
struct FT4GameSkillTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category= Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category= Common)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4AttackType AttackType; // #63

	UPROPERTY(EditAnywhere, Category = Common)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere, Category = Common)
	float DurationSec;

	UPROPERTY(EditAnywhere, Category = Common)
	float ProjectileSpeed; // #63

	UPROPERTY(EditAnywhere, Category = Common)
	bool bMoveable;

	UPROPERTY(EditAnywhere, Category=ServerOnly)
	FT4GameEffectDataID ResultEffectDataID;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;

public:
	FT4GameSkillTableRow()
		: AttackType(ET4AttackType::Melee) // #63
	{
	}
};
