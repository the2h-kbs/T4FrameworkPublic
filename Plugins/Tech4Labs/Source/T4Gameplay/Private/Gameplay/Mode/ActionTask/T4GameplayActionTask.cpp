// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayActionTask.h"

#include "Gameplay/T4GameplayInstance.h"
#include "GameDB/T4GameDB.h"

#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * #48
 */
FT4ActionTask::FT4ActionTask(ET4LayerType InLayerType)
	: LayerType(InLayerType)
	, bPressed(false)
	, bStarted(false)
	, bMovementLcoked(false)
{
}

FT4ActionTask::~FT4ActionTask()
{
}

void FT4ActionTask::OnReset()
{
	Reset();
	bPressed = false;
	bMovementLcoked = false;
}

void FT4ActionTask::OnProcess(float InDeltaTime)
{
	Process(InDeltaTime);
}

bool FT4ActionTask::OnPressed(FString& OutErrorMsg)
{
	bool bResult = Pressed(OutErrorMsg);
	return bResult;
}

void FT4ActionTask::OnReleased()
{
	Released();
}

bool FT4ActionTask::OnStart(const float InParam, FString& OutErrorMsg)
{
	bool bResult = Start(InParam, OutErrorMsg);
	return bResult;
}

bool FT4ActionTask::OnEnd(const float InParam, FString& OutErrorMsg)
{
	bool bResult = End(InParam, OutErrorMsg);
	return bResult;
}

IT4GameFramework* FT4ActionTask::GetGameFramework() const
{
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	return GameFramework;
}

IT4GameObject* FT4ActionTask::GetPlayerObject() const
{
	AT4GameplayPlayerController* PlayerController = GetPlayerController();
	if (nullptr == PlayerController || PlayerController->HasGameObject())
	{
		return nullptr;
	}
	return PlayerController->GetGameObject();
}

AT4GameplayPlayerController* FT4ActionTask::GetPlayerController() const
{
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	IT4PlayerController* PlayerController = GameWorld->GetPCInterface();
	check(nullptr != PlayerController);
	return Cast<AT4GameplayPlayerController>(PlayerController->GetAController());
}

IT4PacketHandlerCS* FT4ActionTask::GetPacketHandlerCS() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	FT4GameplayInstance* GameplayInstance = FT4GameplayInstance::CastGameplayInstance(
		GameFramework->GetGameplayHandler()
	);
	if (nullptr == GameplayInstance)
	{
		return nullptr;
	}
	return GameplayInstance->GetPacketHandlerCS();
}
