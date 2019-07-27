// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "GameFramework/GameModeBase.h"
#include "T4FrameworkGameMode.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */

UCLASS()
class T4FRAMEWORK_API AT4FrameworkGameMode : public AGameModeBase
{
	GENERATED_UCLASS_BODY()
	
public:
	void StartPlay() override;
};
