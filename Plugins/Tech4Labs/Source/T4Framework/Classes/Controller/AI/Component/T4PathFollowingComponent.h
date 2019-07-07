// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "T4PathFollowingComponent.generated.h"

/**
  *
 */
class IT4GameObject;
UCLASS()
class T4FRAMEWORK_API UT4PathFollowingComponent : public UPathFollowingComponent
{
	GENERATED_UCLASS_BODY()

	DECLARE_DELEGATE_TwoParams(FOnCallbackMoveTo, const FVector&, bool); // #42, #50
	DECLARE_DELEGATE(FOnCallbackMoveStop); // #52

public:
	void TickComponent(
		float DeltaTime, 
		enum ELevelTick TickType, 
		FActorComponentTickFunction* ThisTickFunction
	) override;

	void OnPathFinished(const FPathFollowingResult& Result) override; // #52
	void OnSegmentFinished() override; // #52
	void OnPathUpdated() override; // #52

public:
	FOnCallbackMoveTo& GetOnCallbackMoveTo() { return OnCallbackMoveTo; } // #42, #50
	FOnCallbackMoveStop& GetOnCallbackMoveStop() { return OnCallbackMoveStop; } // #52

	void SetGameObjectID(const FT4ObjectID& InObjectID) { TargetObjectID = InObjectID; }
	void ClearGameObjectID() { TargetObjectID.SetNone(); }

protected:
	void BeginPlay() override;

	/** follow current path segment */
	void FollowPathSegment(float DeltaTime) override;

	/** check state of path following, update move segment if needed */
	void UpdatePathSegment() override;

protected:
	IT4GameObject* GetGameObject() const;

private:
	ET4LayerType LayerType;
	FT4ObjectID TargetObjectID;

	FOnCallbackMoveTo OnCallbackMoveTo;
	FOnCallbackMoveStop OnCallbackMoveStop; // #52
};
