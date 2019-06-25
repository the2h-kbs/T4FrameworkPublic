// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/Action/T4EngineActionTypes.h"
#include "Public/Action/T4EngineActionParameters.h"
#include "Public/T4EngineTypes.h"
#include "T4Action_Base.generated.h"

/**
  *
 */
class IT4GameWorld;
class IT4GameObject;

USTRUCT()
struct T4ENGINE_API FT4WorldAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4ActionType ActionType;

public:
	FT4WorldAction()
		: ActionType(ET4ActionType::None)
	{
	}

	FT4WorldAction(ET4ActionType InWorldAction)
		: ActionType(InWorldAction)
	{
	}

	virtual ~FT4WorldAction() {}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("WAction:None"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeCommonActionDetails

	UPROPERTY(VisibleAnywhere)
	ET4ActionType ActionType;

	UPROPERTY(EditAnywhere)
	FT4ActionKey ActionKey;

	UPROPERTY(EditAnywhere)
	ET4LifecyclePolicy LifecyclePolicy;

	UPROPERTY(EditAnywhere)
	float DelayTimeSec;

	UPROPERTY(EditAnywhere)
	float DurationSec; // #20 : TotalTimeSec = DelayTimeSec + DurationSec;

	// #24 : Composite 일 경우 사용됨!
	UPROPERTY(VisibleAnywhere)
	int32 HierarchyIndex;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere)
	FName DisplayName;
#endif

public:
	FT4ObjectAction()
		: ActionType(ET4ActionType::None)
		, LifecyclePolicy(ET4LifecyclePolicy::Default)
		, DelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, HierarchyIndex(INDEX_NONE) // #24
#if WITH_EDITORONLY_DATA
		, DisplayName(NAME_None)
#endif
	{
	}

	FT4ObjectAction(ET4ActionType InObjectAction)
		: ActionType(InObjectAction)
		, LifecyclePolicy(ET4LifecyclePolicy::Default)
		, DelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, HierarchyIndex(INDEX_NONE) // #24
#if WITH_EDITORONLY_DATA
		, DisplayName(NAME_None)
#endif
	{
	}

	virtual ~FT4ObjectAction() {}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("OAction:None"));
	}
};