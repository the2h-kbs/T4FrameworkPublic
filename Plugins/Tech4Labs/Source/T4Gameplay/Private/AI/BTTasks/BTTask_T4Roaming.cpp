// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4Roaming.h"
#include "Classes/AI/T4GameplayCharacterAIController.h"

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
	AT4GameplayCharacterAIController* NPCController = Cast<AT4GameplayCharacterAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	FVector MoveTargetPosition = FVector::ZeroVector;
	if (!NPCController->TryGoToRoaming(MoveTargetPosition))
	{
		return EBTNodeResult::Failed;
	}
	FT4NPCAIMemory& AIMemory = NPCController->GetAIMemory();
	AIMemory.MoveSpeedType = ET4MoveSpeedType::Walk;
	AIMemory.NextMoveTargetLocation = MoveTargetPosition; // #50
	return EBTNodeResult::Succeeded;
}
