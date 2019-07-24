// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "UObject/ObjectMacros.h"
#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "AITypes.h"

#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_T4MoveTo.generated.h"

/**
 * #50 refer BTTask_MoveTo
 */

class UAITask_MoveTo;

struct FT4BTMoveToTaskMemory
{
	/** Move request ID */
	FAIRequestID MoveRequestID;

	FVector PreviousGoalLocation;

	TWeakObjectPtr<UAITask_MoveTo> Task;

	uint8 bWaitingForPath : 1;
	uint8 bObserverCanFinishTask : 1;
};

/**
 * Move To task node.
 * Moves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system.
 */
UCLASS(config=Game)
class UBTTask_T4MoveTo : public UBTTaskNode
{
	GENERATED_UCLASS_BODY()

	/** fixed distance added to threshold between AI and goal location in destination reach test */
	UPROPERTY(config, Category = Node, EditAnywhere, meta=(ClampMin = "0.0", UIMin="0.0"))
	float AcceptableRadius;

	/** "None" will result in default filter being used */
	UPROPERTY(Category = Node, EditAnywhere)
	TSubclassOf<UNavigationQueryFilter> FilterClass;

	UPROPERTY(Category = Node, EditAnywhere)
	uint32 bAllowStrafe : 1;

	/** if set, use incomplete path when goal can't be reached */
	UPROPERTY(Category = Node, EditAnywhere, AdvancedDisplay)
	uint32 bAllowPartialPath : 1;

	/** if set, path to goal actor will update itself when actor moves */
	UPROPERTY(Category = Node, EditAnywhere, AdvancedDisplay)
	uint32 bTrackMovingGoal : 1;

	/** if set, goal location will be projected on navigation data (navmesh) before using */
	UPROPERTY(Category = Node, EditAnywhere, AdvancedDisplay)
	uint32 bProjectGoalLocation : 1;

	/** if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test  */
	UPROPERTY(Category = Node, EditAnywhere)
	uint32 bReachTestIncludesAgentRadius : 1;
	
	/** if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test  */
	UPROPERTY(Category = Node, EditAnywhere)
	uint32 bReachTestIncludesGoalRadius : 1;

	/** DEPRECATED, please use combination of bReachTestIncludes*Radius instead */
	UPROPERTY(Category = Node, VisibleInstanceOnly)
	uint32 bStopOnOverlap : 1;

	UPROPERTY()
	uint32 bStopOnOverlapNeedsUpdate : 1;

	/** if set, move will use pathfinding. Not exposed on purpose, please use BTTask_MoveDirectlyToward */
	uint32 bUsePathfinding : 1;

	/** set automatically if move should use GameplayTasks */
	uint32 bUseGameplayTasks : 1;

public:
	virtual EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory
	) override;
	virtual EBTNodeResult::Type AbortTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory
	) override;
	virtual void OnTaskFinished(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory, 
		EBTNodeResult::Type TaskResult
	) override;
	virtual void TickTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory,
		float DeltaSeconds
	) override;
	virtual uint16 GetInstanceMemorySize() const override;
	virtual void PostLoad() override;

	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;
	virtual void OnMessage(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory,
		FName Message, 
		int32 RequestID, 
		bool bSuccess
	) override;

#if WITH_EDITOR
	virtual FName GetNodeIconName() const override;
	virtual void OnNodeCreated() override;
#endif // WITH_EDITOR

protected:

	EBTNodeResult::Type PerformMoveTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory
	);
	
	/** prepares move task for activation */
	virtual UAITask_MoveTo* PrepareMoveTask(
		UBehaviorTreeComponent& OwnerComp, 
		UAITask_MoveTo* ExistingTask, 
		FAIMoveRequest& MoveRequest
	);
};
