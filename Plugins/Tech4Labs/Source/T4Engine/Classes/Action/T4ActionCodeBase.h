// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Classes/Action/T4ActionBase.h"
#include "Public/Action/T4ActionKey.h"
#include "Public/T4EngineTypes.h"
#include "T4ActionCodeBase.generated.h"

/**
  *
 */
USTRUCT()
struct T4ENGINE_API FT4CodeActionBase : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FT4ActionKey ActionKey;

public:
	FT4CodeActionBase()
		: FT4BaseAction()
	{
	}

	FT4CodeActionBase(ET4ActionType InObjectAction)
		: FT4BaseAction(InObjectAction)
	{
	}

	virtual ~FT4CodeActionBase() {}

	ET4BaseActionType GetBaseActionType() const override { return ET4BaseActionType::Code; } // #52

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("CodeBaseAction"));
	}

	virtual FString ToDisplayText()
	{
		return FString(TEXT("Untitled")); // #54
	}
};
