// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4ContentNPCTable.generated.h"

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	int32 UID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FGuid Guid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attribute)
	TSoftObjectPtr<UT4ActorEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	TSoftObjectPtr<UBlackboardData> BlackboardDataPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath;
};
