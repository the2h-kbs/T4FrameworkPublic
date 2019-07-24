// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/GameTable/T4GameTableDataTypes.h" // #48

#include "Classes/Engine/DataTable.h"

#include "T4GameTable_FO.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UBehaviorTree;
class UT4PropEntityAsset;

USTRUCT()
struct FT4GameFOTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category= Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category= Common)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4PropEntityAsset> EntityAsset;

public:
	FT4GameFOTableRow()
	{
	}
};
