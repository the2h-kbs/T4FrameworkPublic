// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionMoveStructs.h"
#include "T4ActionVFXStructs.h"
#include "T4ActionCompositeStructs.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Root
// ET4ActionType::Branch // #54

// #24
USTRUCT()
struct T4ENGINE_API FT4ActionHeaderInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	int32 ParentHeaderKey;

	UPROPERTY(VisibleAnywhere)
	ET4ActionType ActionType;

	UPROPERTY(VisibleAnywhere)
	int32 ActionArrayIndex;

public:
	FT4ActionHeaderInfo()
		: ParentHeaderKey(INDEX_NONE)
		, ActionType(ET4ActionType::None)
		, ActionArrayIndex(INDEX_NONE)
	{
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4ActionCompositeData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TMap<uint32, FT4ActionHeaderInfo> HeaderInfoMap;

	// #T4_ADD_ACTION_TAG_CONTI

	UPROPERTY(EditAnywhere)
	TArray<FT4RotationAction> RotationActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4AnimationAction> AnimationActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4ParticleAction> ParticleActions;

public:
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
		int32 InParentHeaderKey
	)
	{
		return static_cast<T*>(AddChildInternal(
			T::StaticActionType(),
			InParentHeaderKey
		));
	}

private:
	uint32 GetNewHeaderKey() const;

	FT4ObjectAction* AddChildInternal(
		ET4ActionType InNewActionType,
		int32 InParentHeaderKey
	); // #24
};

USTRUCT()
struct T4ENGINE_API FT4RootAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ActionCompositeData CompositeData;

public:
	FT4RootAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Root; }

	FORCEINLINE void Reset()
	{
		CompositeData.Reset();
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4BranchAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ActionCompositeData CompositeData;

public:
	FT4BranchAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Branch; }

	FORCEINLINE void Reset()
	{
		CompositeData.Reset();
	}
};
