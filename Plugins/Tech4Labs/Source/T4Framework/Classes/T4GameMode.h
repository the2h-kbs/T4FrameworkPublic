// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "T4GameMode.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */

UCLASS()
class T4FRAMEWORK_API AT4GameMode : public AGameModeBase
{
	GENERATED_UCLASS_BODY()
	
public:
	void StartPlay() override;
};
