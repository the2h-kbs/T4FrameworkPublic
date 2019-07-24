// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameTable_ItemBase.h" // #48
#include "T4GameTable_ItemCostume.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4CostumeEntityAsset;

USTRUCT()
struct FT4GameItemCostumeTableRow : public FT4GameItemTableRow
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category= Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category= Common)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4CostumeEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	FName ExchangePartName;

public:
	FT4GameItemCostumeTableRow()
	{
	}
};
