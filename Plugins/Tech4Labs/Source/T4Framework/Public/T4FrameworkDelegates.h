// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "T4Engine/Public/T4EngineTypes.h"

/**
  * #42
 */
class IT4GameFramework;
class T4FRAMEWORK_API FT4FrameworkDelegates
{
public:
	DECLARE_DELEGATE_OneParam(FOnRegisterDefaultGameplay, IT4GameFramework*); // #42
	static FOnRegisterDefaultGameplay OnRegisterDefaultGameplay;

#if WITH_EDITOR
	DECLARE_DELEGATE_OneParam(FOnCreatePlayerController, IT4GameFramework*); // #42
	static FOnCreatePlayerController OnCreatePlayerController;
#endif

	DECLARE_DELEGATE_FourParams(FOnCallbackMoveTo, ET4LayerType, const FT4ObjectID&, const FVector&, bool); // #42, #50
	static FOnCallbackMoveTo OnCallbackMoveTo;

private:
	FT4FrameworkDelegates() {}
};
