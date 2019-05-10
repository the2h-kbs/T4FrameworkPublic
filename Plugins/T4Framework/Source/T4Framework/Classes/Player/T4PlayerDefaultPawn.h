// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "T4PlayerDefaultPawn.generated.h"

/**
  *
 */
UCLASS()
class T4FRAMEWORK_API AT4PlayerDefaultPawn : public ADefaultPawn
{
	GENERATED_UCLASS_BODY()

public:
	void Tick(float InDeltaSeconds) override;

	// Begin Pawn overrides
	void SetupPlayerInputComponent(UInputComponent* InInputComponent) override;
};
