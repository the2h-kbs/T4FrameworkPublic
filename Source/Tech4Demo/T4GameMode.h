// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "GameFramework/GameModeBase.h"
#include "T4GameMode.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */

UCLASS()
class TECH4DEMO_API AT4GameMode : public AGameModeBase
{
	GENERATED_UCLASS_BODY()
	
public:
	void StartPlay() override;
};
