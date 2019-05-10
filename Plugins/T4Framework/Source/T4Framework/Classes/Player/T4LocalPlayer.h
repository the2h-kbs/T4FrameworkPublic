// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "T4LocalPlayer.generated.h"

/**
  * 
 */
UCLASS()
class T4FRAMEWORK_API UT4LocalPlayer : public ULocalPlayer
{
	GENERATED_UCLASS_BODY()

	// Disable compiler-generated deprecation warnings by implementing our own destructor
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	virtual ~UT4LocalPlayer();
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
};
