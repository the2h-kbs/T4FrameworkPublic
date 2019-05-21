// Copyright 2019 Tech4 Labs. All Rights Reserved.

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

	DECLARE_DELEGATE_ThreeParams(FOnCallbackMoveTo, ET4LayerType, const FT4ObjectID&, const FVector&); // #42
	static FOnCallbackMoveTo OnCallbackMoveTo;

private:
	FT4FrameworkDelegates() {}
};
