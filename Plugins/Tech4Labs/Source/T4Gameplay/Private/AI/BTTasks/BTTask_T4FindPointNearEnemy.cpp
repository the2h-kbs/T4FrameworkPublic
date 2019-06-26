// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4FindPointNearEnemy.h"
#include "Classes/AI/T4GameplayNPCAIController.h"

#include "T4Framework/Public/T4Framework.h"

#include "BehaviorTree/BlackboardComponent.h"

#include "T4GameplayInternal.h"

static const FName FindPointNearEnemyKey(TEXT("T4FindPointNearEnemy"));

/**
  *
 */
UBTTask_T4FindPointNearEnemy::UBTTask_T4FindPointNearEnemy(
	const FObjectInitializer& ObjectInitializer
)	: Super(ObjectInitializer)
{
}

EBTNodeResult::Type UBTTask_T4FindPointNearEnemy::ExecuteTask(
	UBehaviorTreeComponent& OwnerComp, 
	uint8* NodeMemory
)
{
	AT4GameplayNPCAIController* NPCController = Cast<AT4GameplayNPCAIController>(OwnerComp.GetAIOwner());
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

	const ET4LayerType LayerType = NPCController->GetLayerType();
	IT4GameFramework* ServerFramework = T4FrameworkGet(LayerType);
	check(nullptr != ServerFramework);

	FVector OriginPosition = NPCGameObject->GetRootLocation();
	IT4GameObject* NewTargetObject = NPCController->FindBestNearestEnemy(5000.0f);
	if (nullptr != NewTargetObject)
	{
		OriginPosition = NewTargetObject->GetRootLocation();
	}

	IT4GameWorld* GameWorld = ServerFramework->GetGameWorld();
	check(nullptr != GameWorld);

	FVector TargetPosition = FVector::ZeroVector;
	if (!GameWorld->GetRandomLocationInNavigableRadius(OriginPosition, 1000.0f, TargetPosition))
	{
		return EBTNodeResult::Failed;
	}
	if (nullptr != OwnerComp.GetBlackboardComponent())
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(FindPointNearEnemyKey, TargetPosition);
	}
	return EBTNodeResult::Succeeded;
}
