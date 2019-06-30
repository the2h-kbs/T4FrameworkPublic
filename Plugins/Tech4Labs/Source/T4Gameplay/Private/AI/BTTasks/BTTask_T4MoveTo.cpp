// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4MoveTo.h"
#include "Classes/AI/T4GameplayCharacterAIController.h"

#include "GameFramework/Actor.h"
#include "AISystem.h"
#include "Navigation/PathFollowingComponent.h"
#include "VisualLogger/VisualLogger.h"
#include "AIController.h"
#include "Tasks/AITask_MoveTo.h"

#include "T4GameplayInternal.h"

/**
 * #50 refer BTTask_MoveTo
 */
UBTTask_T4MoveTo::UBTTask_T4MoveTo(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NodeName = "T4Move To";
	bUseGameplayTasks = GET_AI_CONFIG_VAR(bEnableBTAITasks);
	bNotifyTick = !bUseGameplayTasks;
	bNotifyTaskFinished = true;

	AcceptableRadius = GET_AI_CONFIG_VAR(AcceptanceRadius);
	bReachTestIncludesGoalRadius = bReachTestIncludesAgentRadius = bStopOnOverlap = GET_AI_CONFIG_VAR(bFinishMoveOnGoalOverlap);
	bAllowStrafe = GET_AI_CONFIG_VAR(bAllowStrafing);
	bAllowPartialPath = GET_AI_CONFIG_VAR(bAcceptPartialPaths);
	bTrackMovingGoal = true;
	bProjectGoalLocation = true;
	bUsePathfinding = true;

	bStopOnOverlapNeedsUpdate = true;
}

EBTNodeResult::Type UBTTask_T4MoveTo::ExecuteTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory
)
{
	EBTNodeResult::Type NodeResult = EBTNodeResult::InProgress;

	FT4BTMoveToTaskMemory* MyMemory = reinterpret_cast<FT4BTMoveToTaskMemory*>(InNodeMemory);
	MyMemory->PreviousGoalLocation = FAISystem::InvalidLocation;
	MyMemory->MoveRequestID = FAIRequestID::InvalidRequest;

	AT4GameplayCharacterAIController* NPCController = Cast<AT4GameplayCharacterAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	MyMemory->bWaitingForPath = bUseGameplayTasks ? false : NPCController->ShouldPostponePathUpdates();
	if (!MyMemory->bWaitingForPath)
	{
		NodeResult = PerformMoveTask(InOwnerComp, InNodeMemory);
	}
	else
	{
		UE_VLOG(NPCController, LogBehaviorTree, Log, TEXT("Pathfinding requests are freezed, waiting..."));
	}

	return NodeResult;
}

EBTNodeResult::Type UBTTask_T4MoveTo::PerformMoveTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory
)
{
	FT4BTMoveToTaskMemory* MyMemory = reinterpret_cast<FT4BTMoveToTaskMemory*>(InNodeMemory);
	AT4GameplayCharacterAIController* NPCController = Cast<AT4GameplayCharacterAIController>(InOwnerComp.GetAIOwner());

	EBTNodeResult::Type NodeResult = EBTNodeResult::Failed;
	if (nullptr != NPCController)
	{
		FT4NPCAIMemory& AIMemory = NPCController->GetAIMemory(); // #50

		FAIMoveRequest MoveReq;
		MoveReq.SetNavigationFilter(*FilterClass ? FilterClass : NPCController->GetDefaultNavigationFilterClass());
		MoveReq.SetAllowPartialPath(bAllowPartialPath);
		MoveReq.SetAcceptanceRadius(AcceptableRadius);
		MoveReq.SetCanStrafe(bAllowStrafe);
		MoveReq.SetReachTestIncludesAgentRadius(bReachTestIncludesAgentRadius);
		MoveReq.SetReachTestIncludesGoalRadius(bReachTestIncludesGoalRadius);
		MoveReq.SetProjectGoalLocation(bProjectGoalLocation);
		MoveReq.SetUsePathfinding(bUsePathfinding);

#if 1
		// TODO Move to TargetObject

		const FVector TargetLocation = AIMemory.NextMoveTargetLocation;
		MoveReq.SetGoalLocation(TargetLocation);

		MyMemory->PreviousGoalLocation = TargetLocation;
#else
		if (BlackboardKey.SelectedKeyType == UBlackboardKeyType_Object::StaticClass())
		{
			UObject* KeyValue = MyBlackboard->GetValue<UBlackboardKeyType_Object>(BlackboardKey.GetSelectedKeyID());
			AActor* TargetActor = Cast<AActor>(KeyValue);
			if (TargetActor)
			{
				if (bTrackMovingGoal)
				{
					MoveReq.SetGoalActor(TargetActor);
				}
				else
				{
					MoveReq.SetGoalLocation(TargetActor->GetActorLocation());
				}
			}
			else
			{
				UE_VLOG(MyController, LogBehaviorTree, Warning, TEXT("UBTTask_T4MoveTo::ExecuteTask tried to go to actor while BB %s entry was empty"), *BlackboardKey.SelectedKeyName.ToString());
			}
		}
		else if (BlackboardKey.SelectedKeyType == UBlackboardKeyType_Vector::StaticClass())
		{
			const FVector TargetLocation = AIMemory.NextMoveTargetLocation;
			MoveReq.SetGoalLocation(TargetLocation);

			MyMemory->PreviousGoalLocation = TargetLocation;
		}
#endif

		if (MoveReq.IsValid())
		{
			if (GET_AI_CONFIG_VAR(bEnableBTAITasks))
			{
				UAITask_MoveTo* MoveTask = MyMemory->Task.Get();
				const bool bReuseExistingTask = (MoveTask != nullptr);

				MoveTask = PrepareMoveTask(InOwnerComp, MoveTask, MoveReq);
				if (MoveTask)
				{
					MyMemory->bObserverCanFinishTask = false;

					if (bReuseExistingTask)
					{
						if (MoveTask->IsActive())
						{
							UE_VLOG(NPCController, LogBehaviorTree, Verbose, TEXT("\'%s\' reusing AITask %s"), *GetNodeName(), *MoveTask->GetName());
							MoveTask->ConditionalPerformMove();
						}
						else
						{
							UE_VLOG(NPCController, LogBehaviorTree, Verbose, TEXT("\'%s\' reusing AITask %s, but task is not active - handing over move performing to task mechanics"), *GetNodeName(), *MoveTask->GetName());
						}
					}
					else
					{
						MyMemory->Task = MoveTask;
						UE_VLOG(NPCController, LogBehaviorTree, Verbose, TEXT("\'%s\' task implementing move with task %s"), *GetNodeName(), *MoveTask->GetName());
						MoveTask->ReadyForActivation();
					}

					MyMemory->bObserverCanFinishTask = true;
					NodeResult = (MoveTask->GetState() != EGameplayTaskState::Finished) ? EBTNodeResult::InProgress :
						MoveTask->WasMoveSuccessful() ? EBTNodeResult::Succeeded :
						EBTNodeResult::Failed;
				}
			}
			else
			{
				FPathFollowingRequestResult RequestResult = NPCController->MoveTo(MoveReq);
				if (RequestResult.Code == EPathFollowingRequestResult::RequestSuccessful)
				{
					MyMemory->MoveRequestID = RequestResult.MoveId;
					WaitForMessage(InOwnerComp, UBrainComponent::AIMessage_MoveFinished, RequestResult.MoveId);
					WaitForMessage(InOwnerComp, UBrainComponent::AIMessage_RepathFailed);

					NodeResult = EBTNodeResult::InProgress;
				}
				else if (RequestResult.Code == EPathFollowingRequestResult::AlreadyAtGoal)
				{
					NodeResult = EBTNodeResult::Succeeded;
				}
			}
		}
	}

	return NodeResult;
}

UAITask_MoveTo* UBTTask_T4MoveTo::PrepareMoveTask(
	UBehaviorTreeComponent& OwnerComp, 
	UAITask_MoveTo* ExistingTask,
	FAIMoveRequest& MoveRequest
)
{
	UAITask_MoveTo* MoveTask = ExistingTask ? ExistingTask : NewBTAITask<UAITask_MoveTo>(OwnerComp);
	if (MoveTask)
	{
		MoveTask->SetUp(MoveTask->GetAIController(), MoveRequest);
	}

	return MoveTask;
}

EBTNodeResult::Type UBTTask_T4MoveTo::AbortTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory
)
{
	FT4BTMoveToTaskMemory* MyMemory = reinterpret_cast<FT4BTMoveToTaskMemory*>(InNodeMemory);
	if (!MyMemory->bWaitingForPath)
	{
		if (MyMemory->MoveRequestID.IsValid())
		{
			AAIController* MyController = InOwnerComp.GetAIOwner();
			if (MyController && MyController->GetPathFollowingComponent())
			{
				MyController->GetPathFollowingComponent()->AbortMove(*this, FPathFollowingResultFlags::OwnerFinished, MyMemory->MoveRequestID);
			}
		}
		else
		{
			MyMemory->bObserverCanFinishTask = false;
			UAITask_MoveTo* MoveTask = MyMemory->Task.Get();
			if (MoveTask)
			{
				MoveTask->ExternalCancel();
			}
			else
			{
				UE_VLOG(&InOwnerComp, LogBehaviorTree, Error, TEXT("Can't abort path following! bWaitingForPath:false, MoveRequestID:invalid, MoveTask:none!"));
			}
		}
	}

	return Super::AbortTask(InOwnerComp, InNodeMemory);
}

void UBTTask_T4MoveTo::OnTaskFinished(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory, 
	EBTNodeResult::Type TaskResult
)
{
	FT4BTMoveToTaskMemory* MyMemory = reinterpret_cast<FT4BTMoveToTaskMemory*>(InNodeMemory);
	MyMemory->Task.Reset();

	Super::OnTaskFinished(InOwnerComp, InNodeMemory, TaskResult);
}

void UBTTask_T4MoveTo::TickTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory,
	float DeltaSeconds
)
{
	FT4BTMoveToTaskMemory* MyMemory = (FT4BTMoveToTaskMemory*)InNodeMemory;
	if (MyMemory->bWaitingForPath && !InOwnerComp.IsPaused())
	{
		AAIController* MyController = InOwnerComp.GetAIOwner();
		if (MyController && !MyController->ShouldPostponePathUpdates())
		{
			UE_VLOG(MyController, LogBehaviorTree, Log, TEXT("Pathfinding requests are unlocked!"));
			MyMemory->bWaitingForPath = false;

			const EBTNodeResult::Type NodeResult = PerformMoveTask(InOwnerComp, InNodeMemory);
			if (NodeResult != EBTNodeResult::InProgress)
			{
				FinishLatentTask(InOwnerComp, NodeResult);
			}
		}
	}
}

void UBTTask_T4MoveTo::OnMessage(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory,
	FName Message, 
	int32 SenderID, 
	bool bSuccess
)
{
	// AIMessage_RepathFailed means task has failed
	bSuccess &= (Message != UBrainComponent::AIMessage_RepathFailed);
	Super::OnMessage(InOwnerComp, InNodeMemory, Message, SenderID, bSuccess);
}

void UBTTask_T4MoveTo::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
	// AI move task finished
	UAITask_MoveTo* MoveTask = Cast<UAITask_MoveTo>(&Task);
	if (MoveTask && MoveTask->GetAIController() && MoveTask->GetState() != EGameplayTaskState::Paused)
	{
		UBehaviorTreeComponent* BehaviorComp = GetBTComponentForTask(Task);
		if (BehaviorComp)
		{
			uint8* RawMemory = BehaviorComp->GetNodeMemory(this, BehaviorComp->FindInstanceContainingNode(this));
			FT4BTMoveToTaskMemory* MyMemory = reinterpret_cast<FT4BTMoveToTaskMemory*>(RawMemory);

			if (MyMemory->bObserverCanFinishTask && (MoveTask == MyMemory->Task))
			{
				const bool bSuccess = MoveTask->WasMoveSuccessful();
				FinishLatentTask(*BehaviorComp, bSuccess ? EBTNodeResult::Succeeded : EBTNodeResult::Failed);
			}
		}
	}
}

uint16 UBTTask_T4MoveTo::GetInstanceMemorySize() const
{
	return sizeof(FT4BTMoveToTaskMemory);
}

void UBTTask_T4MoveTo::PostLoad()
{
	Super::PostLoad();
	
	if (bStopOnOverlapNeedsUpdate)
	{
		bStopOnOverlapNeedsUpdate = false;
		bReachTestIncludesAgentRadius = bStopOnOverlap;
		bReachTestIncludesGoalRadius = false;
	}
}

#if WITH_EDITOR

FName UBTTask_T4MoveTo::GetNodeIconName() const
{
	return FName("BTEditor.Graph.BTNode.Task.MoveTo.Icon");
}

void UBTTask_T4MoveTo::OnNodeCreated()
{
	bStopOnOverlapNeedsUpdate = false;
}

#endif	// WITH_EDITOR
