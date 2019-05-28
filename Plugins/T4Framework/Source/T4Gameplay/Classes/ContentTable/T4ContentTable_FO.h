// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4ContentTable_FO.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UBlackboardData;
class UBehaviorTree;
class UT4PropEntityAsset;

USTRUCT()
struct FT4ContentFOTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	int32 UID;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category=Asset)
	TSoftObjectPtr<UT4PropEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category=Asset)
	TSoftObjectPtr<UBlackboardData> BlackboardDataPath;

	UPROPERTY(EditAnywhere, Category=Asset)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath;
};
