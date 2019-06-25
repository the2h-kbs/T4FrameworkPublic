// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameMode.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Framework/Public/T4Framework.h"
#include "T4Gameplay/Classes/Player/T4GameplayPlayerController.h" // #42
#include "T4Gameplay/Classes/Player/T4GameplayDefaultPawn.h" // #42

#include "Kismet/GameplayStatics.h"

#include "Tech4Demo.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */
AT4GameMode::AT4GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PlayerControllerClass = AT4GameplayPlayerController::StaticClass(); // #42
	DefaultPawnClass = AT4GameplayDefaultPawn::StaticClass(); // #42
}

void AT4GameMode::StartPlay()
{
	Super::StartPlay();

#if !WITH_EDITOR
	ET4LayerType LayerType = T4CoreLayer::Get(GetWorld());
	check(ET4LayerType::Max != LayerType);

	// only game used. edit call to UT4GameInstance::StartPlayInEditorGameInstance.
	IT4GameFramework* Framework = T4FrameworkGet(LayerType);
	check(nullptr != Framework);
	Framework->OnStartPlay();
#endif
}
