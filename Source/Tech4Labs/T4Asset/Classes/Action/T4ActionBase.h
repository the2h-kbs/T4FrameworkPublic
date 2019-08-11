// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/Action/T4ActionTypes.h"
#include "T4ActionBase.generated.h"

/**
  *
 */

class IT4GameWorld;
class IT4GameObject;

USTRUCT()
struct T4ASSET_API FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeCommonActionDetails

	UPROPERTY(VisibleAnywhere)
	ET4ActionType ActionType;

	UPROPERTY(EditAnywhere)
	ET4LifecyclePolicy LifecyclePolicy;

	UPROPERTY(EditAnywhere)
	float DelayTimeSec;

	UPROPERTY(EditAnywhere)
	float DurationSec; // #20 : TotalTimeSec = DelayTimeSec + DurationSec;

	UPROPERTY(VisibleAnywhere)
	uint32 SortOrder; // #56 : lower win

public:
	FT4BaseAction()
		: ActionType(ET4ActionType::None)
		, LifecyclePolicy(ET4LifecyclePolicy::Default)
		, DelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, SortOrder(TNumericLimits<uint32>::Max()) // #56 : lower win
	{
	}

	FT4BaseAction(ET4ActionType InObjectAction)
		: ActionType(InObjectAction)
		, LifecyclePolicy(ET4LifecyclePolicy::Default)
		, DelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, SortOrder(TNumericLimits<uint32>::Max()) // #56 : lower win
	{
	}

	virtual ~FT4BaseAction() {}

	virtual ET4BaseActionType GetBaseActionType() const // #62
	{
		return ET4BaseActionType::None;
	}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("BaseAction"));
	}

	virtual FString ToDisplayText()
	{
		return FString(TEXT("Untitled")); // #54
	}
};
