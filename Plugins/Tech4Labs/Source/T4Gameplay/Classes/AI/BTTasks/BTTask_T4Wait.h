// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BTTask_T4Wait.generated.h"

/**
 * #50 refer BTTask_WaitBlackboardTime
 */
class UBehaviorTree;
UCLASS(hidecategories=Wait)
class UBTTask_T4Wait : public UBTTask_Wait
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory
	) override;
};
