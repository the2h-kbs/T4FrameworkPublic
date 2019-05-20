// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameInstance.h"
#include "T4GameMode.h"

#include "T4Framework/Public/T4Framework.h"
#include "T4Core/Public/T4CoreMinimal.h"

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
	if (T4Layer::CheckServer(WorldContext))
	{
		CreateFrameworkType = ET4FrameworkType::Server;
	}
	GameFramework = CreateT4Framework(CreateFrameworkType, WorldContext);
	ET4LayerType LayerType = T4Layer::Get(WorldContext);
	check(LayerType < ET4LayerType::Max);
	check(LayerType == GameFramework->GetLayerType());
}

void UT4GameInstance::Shutdown()
{
	if (nullptr != GameFramework)
	{
		DestroyT4Framework(GameFramework);
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