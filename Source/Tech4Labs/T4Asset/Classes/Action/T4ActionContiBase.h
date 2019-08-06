// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4ActionContiBase.generated.h"

/**
  *
 */
USTRUCT()
struct T4ASSET_API FT4ContiActionBase : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeCommonActionDetails
	// #24 : Composite 일 경우 사용됨!
	UPROPERTY(VisibleAnywhere)
	int32 HeaderKey;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere)
	FName DisplayName;
#endif

public:
	FT4ContiActionBase()
		: FT4BaseAction()
		, HeaderKey(INDEX_NONE) // #24
#if WITH_EDITORONLY_DATA
		, DisplayName(NAME_None)
#endif
	{
	}

	FT4ContiActionBase(ET4ActionType InObjectAction)
		: FT4BaseAction(InObjectAction)
		, HeaderKey(INDEX_NONE) // #24
#if WITH_EDITORONLY_DATA
		, DisplayName(NAME_None)
#endif
	{
	}

	virtual ~FT4ContiActionBase() {}

	ET4BaseActionType GetBaseActionType() const override { return ET4BaseActionType::Conti; } // #52

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("ActionConti:None"));
	}

	virtual FString ToDisplayText()
	{
		return FString(TEXT("Untitled")); // #54
	}
};