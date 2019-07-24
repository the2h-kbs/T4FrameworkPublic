// Copyright 2019 SoonBo Noh. All Rights Reserved.

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

protected:
	/** ticks this task
	 * this function should be considered as const (don't modify state of object) if node is not instanced! */
	void TickTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory,
		float InDeltaSeconds
	) override;
};
