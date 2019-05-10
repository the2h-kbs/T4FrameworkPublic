// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Action_Move.h"
#include "T4Action_Primitive.h"
#include "T4Action_Root.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Root

// #24
USTRUCT()
struct T4ENGINE_API FT4ActionHierarchyInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	int32 ParentHierarchyIndex;

	UPROPERTY(VisibleAnywhere)
	ET4ActionType ActionType;

	UPROPERTY(VisibleAnywhere)
	int32 ActionArrayIndex;

public:
	FT4ActionHierarchyInfo()
		: ParentHierarchyIndex(INDEX_NONE)
		, ActionType(ET4ActionType::None)
		, ActionArrayIndex(INDEX_NONE)
	{
	}
};

USTRUCT()
struct T4ENGINE_API FT4RootAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TMap<uint32, FT4ActionHierarchyInfo> HierarchyMap;

	UPROPERTY(EditAnywhere)
	TArray<FT4RotationAction> RotationActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4AnimationAction> AnimationActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4ParticleAction> ParticleActions;

public:
	FT4RootAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Root; }

	void Reset();

	// #24 : only Root
	template <class T>
	T* AddChild()
	{
		return static_cast<T*>(AddChildInternal(
			T::StaticActionType(),
			INDEX_NONE // Root
		));
	}

	template <class T>
	T* AddChild(
		int32 InParentHierarchyIndex
	)
	{
		return static_cast<T*>(AddChildInternal(
			T::StaticActionType(),
			InParentHierarchyIndex
		));
	}

private:
	uint32 GetNewHierarchyIndex() const;

	FT4ObjectAction* AddChildInternal(
		ET4ActionType InNewActionType,
		int32 InParentHierarchyIndex
	); // #24
};
