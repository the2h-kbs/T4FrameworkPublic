// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameMode.h"

#include "T4Framework/Classes/Player/T4PlayerController.h"
#include "T4Framework/Classes/Player/T4PlayerDefaultPawn.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4Core/Public/T4CoreMinimal.h"

#include "Kismet/GameplayStatics.h"

#include "Tech4Demo.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */
AT4GameMode::AT4GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PlayerControllerClass = AT4PlayerController::StaticClass();
	DefaultPawnClass = AT4PlayerDefaultPawn::StaticClass();
}

void AT4GameMode::StartPlay()
{
	Super::StartPlay();

#if !WITH_EDITOR
	ET4LayerType LayerType = T4Layer::Get(GetWorld());
	check(ET4LayerType::Max != LayerType);

	// only game used. edit call to UT4GameInstance::StartPlayInEditorGameInstance.
	IT4GameFramework* Framework = GetT4Framework(LayerType);
	check(nullptr != Framework);
	Framework->OnStartPlay();
#endif
}
