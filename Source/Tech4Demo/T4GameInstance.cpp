// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameInstance.h"
#include "T4GameMode.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Framework/Public/T4Framework.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameFlow/index.html
 */
UT4GameInstance::UT4GameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, GameFramework(nullptr)
{
}

void UT4GameInstance::Init()
{
	Super::Init();
	// #15
	ET4FrameworkType CreateFrameworkType = ET4FrameworkType::Client;
	if (T4CoreLayer::CheckServer(WorldContext))
	{
		CreateFrameworkType = ET4FrameworkType::Server;
	}
	GameFramework = T4FrameworkCreate(CreateFrameworkType, WorldContext);
	check(nullptr != GameFramework);
}

void UT4GameInstance::Shutdown()
{
	if (nullptr != GameFramework)
	{
		T4FrameworkDestroy(GameFramework);
		GameFramework = nullptr;
	}
	Super::Shutdown();
}

#if WITH_EDITOR
FGameInstancePIEResult UT4GameInstance::StartPlayInEditorGameInstance(
	ULocalPlayer* LocalPlayer,
	const FGameInstancePIEParameters& Params
)
{
	// only editor used. game call to AT4GameMode::StartPlay()
	FGameInstancePIEResult PIEResult = Super::StartPlayInEditorGameInstance(LocalPlayer, Params);
	if (PIEResult.IsSuccess())
	{
		check(nullptr != GameFramework);
		GameFramework->OnStartPlay();
	}
	return PIEResult;
}
#endif