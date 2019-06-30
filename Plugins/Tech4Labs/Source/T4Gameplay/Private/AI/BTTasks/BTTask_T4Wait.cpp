// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4Wait.h"
#include "Classes/AI/T4GameplayCharacterAIController.h"

#include "T4GameplayInternal.h"

/**
 * #50 refer BTTask_WaitBlackboardTime
 */
UBTTask_T4Wait::UBTTask_T4Wait(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NodeName = "Wait NPC Property Time";
}

EBTNodeResult::Type UBTTask_T4Wait::ExecuteTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory
)
{
	// Update wait time based on current NPCAIMemory value
	AT4GameplayCharacterAIController* NPCController = Cast<AT4GameplayCharacterAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	FT4NPCAIMemory& AIMemory = NPCController->GetAIMemory();
	AIMemory.MoveSpeedType = ET4MoveSpeedType::Stand;
	WaitTime = AIMemory.IdleWaitTime;
	return Super::ExecuteTask(InOwnerComp, InNodeMemory);
}
