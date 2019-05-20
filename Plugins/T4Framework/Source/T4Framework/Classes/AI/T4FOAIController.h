// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/Protocol/T4PacketTypes.h" // #25

#include "T4Engine/Public/T4Engine.h"

#include "AIController.h"
#include "T4FOAIController.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */

class UBehaviorTree;
class UBlackboardData;
class UT4PathFollowingComponent;
class FT4BlackboardDataLoader;
class FT4BehaviorTreeDataLoader;

UCLASS()
class T4FRAMEWORK_API AT4FOAIController : public AAIController, public IT4AIController
{
	GENERATED_UCLASS_BODY()

public:
	void PostInitializeComponents();

	void TickActor(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

	/** If true, actor is ticked even if TickType==LEVELTICK_ViewportsOnly	 */
	bool ShouldTickIfViewportsOnly() const override; // #17

	void EndPlay(const EEndPlayReason::Type InEndPlayReason) override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override; // #34

protected:
	void BeginPlay() override;

	// Begin AController interface
	void GameHasEnded(class AActor* EndGameFocus = NULL, bool bIsWinner = false) override;
	void OnPossess(class APawn* InPawn) override;
	void OnUnPossess() override;
	void BeginInactiveState() override;
	// End AController interface

	// Begin AAIController interface
	/** Update direction AI is looking based on FocalPoint */
	void UpdateControlRotation(float DeltaTime, bool bUpdatePawn = true) override;
	// End AAIController interface

public:
	// IT4Controller
	ET4LayerType GetLayerType() const override { return LayerType; }
	ET4ControllerType GetType() const override { return ET4ControllerType::NPCAI; }

	bool SetTargetObject(const FT4ObjectID& InNewTargetID) override;
	void ClearTargetObject(bool bInSetDefaultPawn) override;

	bool HasTargetObject() const override  { return TargetObjectID.IsValid(); }
	const FT4ObjectID& GetTargetObjectID() const override { return TargetObjectID; }
	IT4GameObject* GetTargetObject() const override;
	IT4ActionRoot* GetTargetObjectActionRoot() const override;

	bool HasPlayingAction(const FT4ActionKey& InActionKey) const override; // #20

	IT4AIController* CastAIController() override { return static_cast<IT4AIController*>(this); }
	IT4PlayerController* CastPlayerController() override { return nullptr; }

public:
	bool SetTableData(const FName& InFOTableName); // #31

	void SetNetID(const FT4NetID& InNetID) { NetID = InNetID;}
	const FT4NetID& GetNetID() const { return NetID; }

	IT4GameObject* FindBestNearestEnemy(float InMaxDistance); // #34

protected:
	bool CheckAIDataLoading();

private:
	ET4LayerType LayerType;

	FT4NetID NetID; // #15
	FT4ObjectID TargetObjectID;

	FName FOTableName;
	bool bAIDataLoaded;

	FT4BlackboardDataLoader* BlackboardDataLoader;
	FT4BehaviorTreeDataLoader* BehaviorTreeDataLoader;

private:
	UPROPERTY(transient)
	UBlackboardData* BlackboardDataAsset;

	/* Cached BT component */
	UPROPERTY(transient)
	UBehaviorTree* BehaviorTreeAsset;

	UPROPERTY(transient)
	UT4PathFollowingComponent* T4PathFollowingComponent; // #34
};
