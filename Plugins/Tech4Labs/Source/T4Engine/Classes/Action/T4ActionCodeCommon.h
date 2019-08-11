// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionCodeBase.h"
#include "T4ActionCodeCommon.generated.h"

/**
  *
 */
// #T4_ADD_ACTION_TAG

// ET4ActionType::Conti
// ET4ActionType::Stop

USTRUCT()
struct T4ENGINE_API FT4ContiAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4ContiAsset> ContiAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4ContiAction()
		: FT4CodeActionBase(StaticActionType())
		, LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Conti; }

	FString ToString() const override
	{
		return FString(TEXT("ContiAction"));
	}
};

// #63
USTRUCT()
struct T4ENGINE_API FT4PauseAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bPause;

public:
	FT4PauseAction()
		: FT4CodeActionBase(StaticActionType())
		, bPause(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Pause; }

	FString ToString() const override
	{
		return FString(TEXT("PauseAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4StopAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bSameKeyNameRemoveAll; // #20 : primary 가 아닌 Action 도 모두 삭제!

public:
	FT4StopAction()
		: FT4CodeActionBase(StaticActionType())
		, bSameKeyNameRemoveAll(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Stop; }

	FString ToString() const override
	{
		return FString(TEXT("StopAction"));
	}
};
