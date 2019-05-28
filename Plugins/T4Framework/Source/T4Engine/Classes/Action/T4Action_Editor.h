// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4Action_Editor.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG
USTRUCT()
struct T4ENGINE_API FT4EditorDirtyAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4EditorDirtyType DirtyType;

public:
	FT4EditorDirtyAction()
		: FT4ObjectAction(StaticActionType())
		, DirtyType(ET4EditorDirtyType::None)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::EditorDirty; }

	bool Validate(FString& OutMsg) override
	{
		if (ET4EditorDirtyType::None == DirtyType)
		{
			OutMsg = TEXT("Not set DirtyType");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("OAction:EditorDirty"));
	}
};
