// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayMain.h"

#include "Classes/Player/T4GameplayPlayerController.h"
#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "Network/Protocol/T4PacketSC_Move.h"

#include "T4Framework/Public/T4Framework.h"

#if WITH_EDITOR
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#endif

#include "T4GameplayInternal.h"

/**
  *
 */
bool FT4GameplayMain::Initialize()
{
	// #42
	FT4FrameworkDelegates::OnRegisterDefaultGameplay.BindRaw(
		this, 
		&FT4GameplayMain::HandleOnRegisterDefaultGameplay
	);

#if WITH_EDITOR
	FT4FrameworkDelegates::OnCreatePlayerController.BindRaw(
		this,
		&FT4GameplayMain::HandleOnCreatePlayerController
	);
#endif
	// ~#42

	return true;
}

void FT4GameplayMain::Finalize()
{
}

void FT4GameplayMain::HandleOnRegisterDefaultGameplay(IT4GameFramework* InGameFramework)
{
	// #42
	FT4GameplayInstance* NewGameplayMain = new FT4GameplayInstance;
	check(nullptr != NewGameplayMain);
	InGameFramework->RegisterGameplayHandler(NewGameplayMain); // #42 : GameFramework 소멸 시 인스턴스가 소멸된다!!
}

#if WITH_EDITOR
void FT4GameplayMain::HandleOnCreatePlayerController(IT4GameFramework* InGameFramework)
{
	// #42
	check(nullptr != InGameFramework);
	UWorld* World = InGameFramework->GetWorld();
	check(nullptr != World);

	// #30 : Editor/Preview 의 경우 GameMode(PIE)가 없음으로 PC Spawn 을 별도로 처리해준다.
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.ObjectFlags |= RF_Transient;	// We never want to save player controllers into a map
	SpawnInfo.bDeferConstruction = true;
	AT4PlayerController* NewEditorPC = World->SpawnActor<AT4GameplayPlayerController>(
		AT4GameplayPlayerController::StaticClass(),
		FVector::ZeroVector,
		FRotator::ZeroRotator,
		SpawnInfo
	);
	if (nullptr == NewEditorPC)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("FT4GameplayMain : Failed to spawn AT4GameplayPlayerController. LayerType '%u'"),
			uint32(InGameFramework->GetLayerType())
		);
		return;
	}

	InGameFramework->SetEditorPlayerController(NewEditorPC);

	const FTransform SpawnTransform(FRotator::ZeroRotator, FVector::ZeroVector);
	UGameplayStatics::FinishSpawningActor(NewEditorPC, SpawnTransform);
}
#endif

static FT4GameplayMain GT4GameplayMain;
FT4GameplayMain& GetGameplayMain()
{
	return GT4GameplayMain;
}