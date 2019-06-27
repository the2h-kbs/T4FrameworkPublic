// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/T4FrameworkNet.h" // #25, #42
#include "Public/T4FrameworkAssetLoader.h" // #42

#include "T4Engine/Public/T4Engine.h"

#include "AIController.h"
#include "T4AIController.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */

enum ET4AIDataLoadState // #50
{
	AIDataLoad_Ready,
	AIDataLoad_Loading,
	AIDataLoad_Loaded,
	AIDataLoad_NoData,
};

class UT4PathFollowingComponent;

UCLASS()
class T4FRAMEWORK_API AT4AIController : public AAIController, public IT4AIController
{
	GENERATED_UCLASS_BODY()

public:
	void PostInitializeComponents();

	virtual void TickActor(
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

public:
	// IT4GameController
	ET4LayerType GetLayerType() const override { return LayerType; }
	virtual ET4ControllerType GetType() const override { return ET4ControllerType::None; }

	bool SetTargetObject(const FT4ObjectID& InNewTargetID) override;
	void ClearTargetObject(bool bInSetDefaultPawn) override;

	bool HasTargetObject() const override  { return TargetObjectID.IsValid(); }
	const FT4ObjectID& GetTargetObjectID() const override { return TargetObjectID; }
	IT4GameObject* GetTargetObject() const override;
	IT4ActionControl* GetTargetObjectActionRoot() const override;

	bool HasPlayingAction(const FT4ActionKey& InActionKey) const override; // #20

	IT4AIController* CastAIController() override { return static_cast<IT4AIController*>(this); }
	IT4PlayerController* CastPlayerController() override { return nullptr; }

	void SetMainWeaponDataIDName(const FName& InMainWeaponDataIDName) override {} // #48
	FName GetMainWeaponDataIDName() const override { return NAME_None; } // #48

public:
	void SetNetID(const FT4NetID& InNetID) { NetID = InNetID;}
	const FT4NetID& GetNetID() const { return NetID; }

protected:
	virtual void Reset() {} // #50
	virtual void AIStart() {} // #50

protected:
	ET4LayerType LayerType;

	FT4NetID NetID; // #15
	FT4ObjectID TargetObjectID;

	UPROPERTY(transient)
	UT4PathFollowingComponent* OverridePathFollowingComponent; // #34
};
