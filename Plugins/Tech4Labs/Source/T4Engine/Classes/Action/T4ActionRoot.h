// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionMove.h"
#include "T4ActionVFX.h"
#include "T4ActionCommon.h"
#include "T4ActionRoot.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Root

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

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere)
	FName FolderName; // #56
#endif

public:
	FT4ActionHeaderInfo()
		: ParentHeaderKey(INDEX_NONE)
		, ActionType(ET4ActionType::None)
		, ActionArrayIndex(INDEX_NONE)
#if WITH_EDITORONLY_DATA
		, FolderName(NAME_None) // #56
#endif
	{
	}
};

// #56
USTRUCT()
struct T4ENGINE_API FT4ActionFolderInfo
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere)
	FName ParentFolderName; // #56 : lower win

	UPROPERTY(VisibleAnywhere)
	uint32 SortOrder; // #56 : lower win
#endif

public:
	FT4ActionFolderInfo()
#if WITH_EDITOR
		: ParentFolderName(NAME_None)
		, SortOrder(INDEX_NONE)
#endif
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

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere)
	TMap<FName, FT4ActionFolderInfo> FolderInfoMap; // #56 : value = sortorder
#endif

	// #T4_ADD_ACTION_TAG_CONTI

	UPROPERTY(EditAnywhere)
	TArray<FT4BranchAction> BranchActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4SpecialMoveAction> SpecialMoveActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4AnimationAction> AnimationActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4ParticleAction> ParticleActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4DecalAction> DecalActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4TimeScaleAction> TimeScaleActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4CameraWorkAction> CameraWorkActions; // #54

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

	FT4BaseAction* AddChildInternal(
		ET4ActionType InNewActionType,
		int32 InParentHeaderKey
	); // #24
};

USTRUCT()
struct T4ENGINE_API FT4RootAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ActionCompositeData CompositeData;

public:
	FT4RootAction()
		: FT4BaseAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Root; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Root"));
	}

	FORCEINLINE void Reset()
	{
		CompositeData.Reset();
	}
};
