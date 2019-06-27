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

public:
	void TickComponent(
		float DeltaTime, 
		enum ELevelTick TickType, 
		FActorComponentTickFunction* ThisTickFunction
	) override;

public:
	void SetTargetObjectID(const FT4ObjectID& InObjectID) { TargetObjectID = InObjectID; }
	void ClearTargetObjectID() { TargetObjectID.SetNone(); }

protected:
	void BeginPlay() override;

	/** follow current path segment */
	void FollowPathSegment(float DeltaTime) override;

	/** check state of path following, update move segment if needed */
	void UpdatePathSegment() override;

protected:
	IT4GameObject* GetTargetObject() const;

private:
	ET4LayerType LayerType;
	FT4ObjectID TargetObjectID;
};
