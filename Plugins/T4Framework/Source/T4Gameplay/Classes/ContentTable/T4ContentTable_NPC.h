// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4ContentTable_NPC.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UBehaviorTree;
class UBlackboardData;
class UT4ActorEntityAsset;

USTRUCT()
struct FT4ContentNPCTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	int32 UID;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = Attribute)
	TSoftObjectPtr<UT4ActorEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category=Attribute)
	TSoftObjectPtr<UBlackboardData> BlackboardDataPath;

	UPROPERTY(EditAnywhere, Category=Attribute)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath;
};
