// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameMode.h"

#include "T4Framework/Classes/Player/T4PlayerController.h"
#include "T4Framework/Classes/Player/T4PlayerDefaultPawn.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4Core/Public/T4CoreMinimal.h"

#include "Kismet/GameplayStatics.h"

#include "Tech4Demo.h"

#define USES_GAME_MODE_LOG 1

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */
AT4GameMode::AT4GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, LayerType(ET4LayerType::Max)
{
	PlayerControllerClass = AT4PlayerController::StaticClass();
	DefaultPawnClass = AT4PlayerDefaultPawn::StaticClass();
}

void AT4GameMode::InitGame(
	const FString& MapName, 
	const FString& Options, 
	FString& ErrorMessage
)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	check(ET4LayerType::Max == LayerType);
	LayerType = T4Layer::Get(GetWorld());
	check(ET4LayerType::Max != LayerType);

#if USES_GAME_MODE_LOG
	UE_LOG(
		LogT4Demo,
		Display,
		TEXT("[SL:%u] AT4GameMode : InitGame"),
		uint32(LayerType)
	);
#endif
}

void AT4GameMode::StartPlay()
{
	Super::StartPlay();

#if !WITH_EDITOR
	// only game used. edit call to UT4GameInstance::StartPlayInEditorGameInstance.
	IT4GameFramework* Framework = GetT4Framework(LayerType);
	check(nullptr != Framework);
	Framework->OnStartPlay(false);
#endif
}

void AT4GameMode::StartToLeaveMap()
{
	Super::StartToLeaveMap();
}

void AT4GameMode::PreLogin(
	const FString& Options,
	const FString& Address,
	const FUniqueNetIdRepl& UniqueId,
	FString& ErrorMessage
)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

#if USES_GAME_MODE_LOG
	UE_LOG(
		LogT4Demo,
		Display,
		TEXT("[SL:%u] AT4GameMode : PreLogin, Option '%s'"),
		uint32(LayerType),
		*Options
	);
#endif
}

APlayerController* AT4GameMode::Login(
	UPlayer* NewPlayer,
	ENetRole InRemoteRole,
	const FString& Portal,
	const FString& Options,
	const FUniqueNetIdRepl& UniqueId,
	FString& ErrorMessage
)
{
	APlayerController* NewPlayerController = Super::Login(
		NewPlayer, 
		InRemoteRole, 
		Portal, 
		Options, 
		UniqueId, 
		ErrorMessage
	);

#if USES_GAME_MODE_LOG
	UE_LOG(
		LogT4Demo,
		Display,
		TEXT("[SL:%u] AT4GameMode : Login, Option '%s'"),
		uint32(LayerType),
		*Options
	);
#endif
	return NewPlayerController;
}

void AT4GameMode::Logout(AController* Exiting)
{
#if USES_GAME_MODE_LOG
	bool bLocalController = (ROLE_SimulatedProxy == Exiting->GetRemoteRole()) ? true : false;
#endif
	Super::Logout(Exiting);
#if USES_GAME_MODE_LOG
	UE_LOG(
		LogT4Demo,
		Display,
		TEXT("[SL:%u] AT4GameMode : Logout, bLocalPlayer '%s'"),
		uint32(LayerType),
		bLocalController ? TEXT("true") : TEXT("false")
	);
#endif
}

void AT4GameMode::Reset()
{
	Super::Reset();
}
