// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Camera/PlayerCameraManager.h"
#include "T4PlayerCameraManager.generated.h"

/**
  * https://docs.unrealengine.com/en-US/Gameplay/Framework/Camera
 */
UCLASS()
class T4FRAMEWORK_API AT4PlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	void UpdateCamera(float InDeltaTime) override;
};
