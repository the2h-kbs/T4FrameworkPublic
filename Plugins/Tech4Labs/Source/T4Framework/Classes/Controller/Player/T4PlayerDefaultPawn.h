// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "T4PlayerDefaultPawn.generated.h"

/**
  *
 */
class UPlayerInput;
UCLASS()
class T4FRAMEWORK_API AT4PlayerDefaultPawn : public ADefaultPawn
{
	GENERATED_UCLASS_BODY()

public:
	void Tick(float InDeltaTime) override;

	void SetupPlayerInputComponent(UInputComponent* InInputComponent) override;
};
