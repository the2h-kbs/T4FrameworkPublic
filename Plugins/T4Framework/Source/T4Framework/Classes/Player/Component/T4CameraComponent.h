// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "T4CameraComponent.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Camera/index.html
 */
UCLASS()
class T4FRAMEWORK_API UT4CameraComponent : public UCameraComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime, 
		enum ELevelTick TickType, 
		FActorComponentTickFunction* ThisTickFunction
	) override;

protected:
	void BeginPlay() override;
};
