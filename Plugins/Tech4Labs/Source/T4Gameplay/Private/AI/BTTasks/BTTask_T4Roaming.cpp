// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4Roaming.h"
#include "Classes/AI/T4GameplayNPCAIController.h"

#include "T4GameplayInternal.h"

/**
  * #50
 */
UBTTask_T4Roaming::UBTTask_T4Roaming(
	const FObjectInitializer& ObjectInitializer
)	: Super(ObjectInitializer)
{
}

EBTNodeResult::Type UBTTask_T4Roaming::ExecuteTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory
)
{
	AT4GameplayNPCAIController* NPCController = Cast<AT4GameplayNPCAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	if (NPCController->IsAttacking())
	{
		return EBTNodeResult::Failed; // 공격중이라, 더이상 진행이 안되도록 처리!
	}
	return EBTNodeResult::Failed;
}
