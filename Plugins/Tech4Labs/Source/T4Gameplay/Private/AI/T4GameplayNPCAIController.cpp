// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/T4GameplayNPCAIController.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "T4GameplayInternal.h"

static const FName HomePositionKey(TEXT("HomePosition"));

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
AT4GameplayNPCAIController::AT4GameplayNPCAIController(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
	, bAIDataLoaded(false)
{
}

void AT4GameplayNPCAIController::Reset() // #50
{
	// WARN : AsyncLoad 가 걸렸을 수 있음으로 종료 시 명시적으로 Reset 을 호출해야 한다.
	BlackboardAssetLoader.Reset();
	BehaviorTreeAssetLoader.Reset();
}

void AT4GameplayNPCAIController::TickActor(
	float InDeltaTime,
	enum ELevelTick InTickType,
	FActorTickFunction& InThisTickFunction
)
{
	Super::TickActor(InDeltaTime, InTickType, InThisTickFunction);

	if (!CheckAsyncLoading())
	{
		return;
	}

	// advance
}

bool AT4GameplayNPCAIController::CheckAsyncLoading()
{
	if (bAIDataLoaded)
	{
		return true;
	}
	if (!TargetObjectID.IsValid())
	{
		return false;
	}
	if (!BlackboardAssetLoader.IsBinded())
	{
		if (!BlackboardAssetLoader.IsLoadCompleted())
		{
			return false;
		}
		BlackboardDataAsset = BlackboardAssetLoader.GetBlackboardData();
		BlackboardAssetLoader.SetBinded();
	}
	if (!BehaviorTreeAssetLoader.IsBinded())
	{
		if (!BehaviorTreeAssetLoader.IsLoadCompleted())
		{
			return false;
		}
		BehaviorTreeAsset = BehaviorTreeAssetLoader.GetBehaviorTree();
		BehaviorTreeAssetLoader.SetBinded();
	}
	check(nullptr != BlackboardDataAsset);
	check(nullptr != BehaviorTreeAsset);
	if (!UseBlackboard(BlackboardDataAsset, Blackboard))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("AT4GameplayNPCAIController : failed to bind blackboard!")
		);
		return true;
	}
	{
		IT4GameObject* TargetObject = GetTargetObject();
		check(nullptr != TargetObject);
		Blackboard->SetValueAsVector(HomePositionKey, TargetObject->GetRootLocation());
	}
	if (!RunBehaviorTree(BehaviorTreeAsset))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("AT4GameplayNPCAIController : failed to run behavior tree!")
		);
	}
	else
	{
#if WITH_EDITOR
		if (T4CoreLayer::IsLevelEditor(LayerType))
		{
			// #34 : 게임 모드일 경우만 InitializeComponent 가 되며 Blackboard 가 세팅되어 별도 처리함
			GetBrainComponent()->InitializeComponent();
		}
#endif
	}

	bAIDataLoaded = true;
	return true;
}

bool AT4GameplayNPCAIController::SetTableData(
	const FT4GameDataID& InNPCGameDataID,
	const FSoftObjectPath& InBehaviorTreePath,
	const FSoftObjectPath& InBlackboardDataPath
)
{
	// #31
	const TCHAR* DebugTableName = *(NPCGameDataID.ToString());
	BlackboardAssetLoader.Load(InBlackboardDataPath, false, DebugTableName);
	BehaviorTreeAssetLoader.Load(InBehaviorTreePath, false, DebugTableName);
	NPCGameDataID = InNPCGameDataID;
	bAIDataLoaded = false;
	return true;
}

IT4GameObject* AT4GameplayNPCAIController::FindBestNearestEnemy(float InMaxDistance)
{
	// #34
	IT4GameObject* TargetObject = GetTargetObject();
	if (nullptr == TargetObject)
	{
		return nullptr;
	}
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);

	TArray<IT4GameObject*> TargetObjects;
	bool bResult = GameWorld->QueryNearestObjects(
		TargetObject->GetRootLocation(),
		InMaxDistance,
		ET4ControllerType::Player,
		TargetObjects
	);
	if (!bResult)
	{
		return nullptr;
	}

	check(0 < TargetObjects.Num());
	return TargetObjects[0];
}