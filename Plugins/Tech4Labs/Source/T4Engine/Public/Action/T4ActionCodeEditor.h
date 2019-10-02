// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionCodeBase.h"
#include "T4ActionCodeEditor.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CODE

// ET4ActionType::Editor

USTRUCT()
struct T4ENGINE_API FT4EditorAction : public FT4CodeBaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4EditorAction EditorActionType;

	UPROPERTY(EditAnywhere)
	FName LayerTagName; // #81 : LayerSet, LayerSetClear

	UPROPERTY(EditAnywhere)
	ET4LayerTagType LayerTagType; // #81 : LayerSet, LayerSetClear

public:
	FT4EditorAction()
		: FT4CodeBaseAction(StaticActionType())
		, EditorActionType(ET4EditorAction::None)
		, LayerTagName(NAME_None) // #81 : LayerSet, LayerSetClear
		, LayerTagType(ET4LayerTagType::All) // #81 : LayerSet, LayerSetClear
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Editor; }

	bool Validate(FString& OutMsg) override
	{
		if (ET4EditorAction::None == EditorActionType)
		{
			OutMsg = TEXT("Not set EditorActionType");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("EditorAction"));
	}
};
