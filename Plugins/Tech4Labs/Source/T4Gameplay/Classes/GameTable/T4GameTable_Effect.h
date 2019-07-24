// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayDataTypes.h"
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
	UPROPERTY(EditAnywhere, Category= Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Common)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;

public:
	FT4GameEffectTableRow()
	{
	}
};
