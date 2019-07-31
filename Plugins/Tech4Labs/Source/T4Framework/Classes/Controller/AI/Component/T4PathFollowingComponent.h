// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineObjectID.h"
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

	DECLARE_DELEGATE_TwoParams(FT4OnCallbackMoveTo, const FVector&, bool); // #42, #50
	DECLARE_DELEGATE(FT4OnCallbackMoveStop); // #52

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
	FT4OnCallbackMoveTo& GetOnCallbackMoveTo() { return OnCallbackMoveTo; } // #42, #50
	FT4OnCallbackMoveStop& GetOnCallbackMoveStop() { return OnCallbackMoveStop; } // #52

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

	FT4OnCallbackMoveTo OnCallbackMoveTo;
	FT4OnCallbackMoveStop OnCallbackMoveStop; // #52
};
