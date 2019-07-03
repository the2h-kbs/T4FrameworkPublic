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
	NodeName = "T4WaitTime";
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

void UBTTask_T4Wait::TickTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory,
	float InDeltaSeconds
)
{
	Super::TickTask(InOwnerComp, InNodeMemory, InDeltaSeconds);
	AT4GameplayCharacterAIController* NPCController = Cast<AT4GameplayCharacterAIController>(InOwnerComp.GetAIOwner());
	if (nullptr != NPCController)
	{
		// 어그로가 끌리면 Wait 를 강제로 종료한다.
		if (NPCController->IsCurrentAggressive())
		{
			FinishLatentTask(InOwnerComp, EBTNodeResult::Succeeded);
		}
	}
}