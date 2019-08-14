// Copyright 2019 SoonBo Noh. All Rights Reserved.

#include "Tech4DemoGameMode.h"

#include "T4Framework/Public/T4Framework.h"
#include "T4Framework/Classes/Controller/Player/T4PlayerController.h" // #42
#include "T4Framework/Classes/Controller/Player/T4PlayerDefaultPawn.h" // #42

#include "Kismet/GameplayStatics.h"

#include "Tech4Demo.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */
ATech4DemoGameMode::ATech4DemoGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PlayerControllerClass = AT4PlayerController::StaticClass(); // #42
	DefaultPawnClass = AT4PlayerDefaultPawn::StaticClass(); // #42
}
