// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4FindPointNearEnemy.h"
#include "Classes/AI/T4GameplayNPCAIController.h"

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
	AT4GameplayNPCAIController* NPCController = Cast<AT4GameplayNPCAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	if (!NPCController->HasTargetObject())
	{
		return EBTNodeResult::Failed;
	}
	IT4GameObject* NPCGameObject = NPCController->GetTargetObject();
	if (nullptr == NPCGameObject)
	{
		return EBTNodeResult::Failed;
	}
	IT4GameObject* NewTargetObject = NPCController->FindNearestEnemyBySensoryRange();
	if (nullptr == NewTargetObject)
	{
		return EBTNodeResult::Failed;
	}
	const FVector OriginPosition = NewTargetObject->GetRootLocation();
	const FT4GameObjectProperty& TargetObjectProperty = NewTargetObject->GetPropertyConst();
	FVector MoveTargetPosition = FVector::ZeroVector;
	if (!NPCController->TryGoToAttackDistance(
		OriginPosition, 
		TargetObjectProperty.CapsuleRadius,
		MoveTargetPosition
	))
	{
		return EBTNodeResult::Failed;
	}
	NPCController->GetAIMemory().NextMoveTargetLocation = MoveTargetPosition; // #50
	return EBTNodeResult::Succeeded;
}
