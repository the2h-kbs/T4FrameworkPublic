// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4FindPointNearEnemy.h"
#include "Classes/AI/T4GameplayCharacterAIController.h"

#include "T4GameplayInternal.h"

/**
  *
 */
UBTTask_T4FindPointNearEnemy::UBTTask_T4FindPointNearEnemy(
	const FObjectInitializer& ObjectInitializer
)	: Super(ObjectInitializer)
{
}

EBTNodeResult::Type UBTTask_T4FindPointNearEnemy::ExecuteTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory
)
{
	AT4GameplayCharacterAIController* NPCController = Cast<AT4GameplayCharacterAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	if (!NPCController->HasGameObject())
	{
		return EBTNodeResult::Failed;
	}
	if (!NPCController->IsCurrentAggressive())
	{
		return EBTNodeResult::Failed;
	}
	IT4GameObject* NPCGameObject = NPCController->GetGameObject();
	if (nullptr == NPCGameObject)
	{
		return EBTNodeResult::Failed;
	}
	IT4GameObject* NewTargetObject = NPCController->FindNearestEnemyBySensoryRange();
	if (nullptr == NewTargetObject)
	{
		return EBTNodeResult::Failed;
	}
	const FT4GameObjectProperty& TargetObjectProperty = NewTargetObject->GetPropertyConst();
	FVector MoveTargetPosition = FVector::ZeroVector;
	if (!NPCController->TryGoToAttackDistance(
		NPCGameObject->GetRootLocation(),
		NewTargetObject->GetRootLocation(),
		TargetObjectProperty.CapsuleRadius,
		MoveTargetPosition
	))
	{
		return EBTNodeResult::Failed;
	}
	FT4NPCAIMemory& AIMemory = NPCController->GetAIMemory();
	AIMemory.MoveSpeedType = ET4MoveSpeedType::Run;
	AIMemory.NextMoveTargetLocation = MoveTargetPosition; // #50
	return EBTNodeResult::Succeeded;
}
