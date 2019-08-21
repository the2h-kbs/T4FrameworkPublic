// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/GameTable/T4GameTableDataTypes.h" // #48
#include "T4Framework/Public/T4FrameworkGameplay.h" // #68
#include "Classes/Engine/DataTable.h"

#include "T4GameTable_Effect.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4ContiAsset;

USTRUCT()
struct FT4GameEffectTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #T4_ADD_EFFECT_CONTENT_TAG

	UPROPERTY(EditAnywhere, Category= Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Common)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameEffectType EffectType; // #68

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float AreaRange;

	UPROPERTY(EditAnywhere, Category=ServerOnly)
	FT4GameEffectDataID DamageEffectDataID; // #68

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;

public:
	FT4GameEffectTableRow()
		: EffectType(ET4GameEffectType::Direct)
		, HitDelayTimeSec(0.0f)
		, AreaRange(0.0f)
	{
	}
};
