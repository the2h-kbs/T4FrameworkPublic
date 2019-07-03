// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayActionTask.h"

#include "Gameplay/Mode/T4GameplayModeBase.h" // #49

#include "Gameplay/T4GameplayInstance.h"
#include "GameDB/T4GameDB.h"

#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * #48
 */
FT4ActionTask::FT4ActionTask(FT4GameplayModeBase* InGameplayMode)
	: GameplayMode(InGameplayMode)
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

ET4GameplayModeType FT4ActionTask::GetModeType() const
{
	check(nullptr != GameplayMode);
	return GameplayMode->GetModeType();
}

IT4GameFramework* FT4ActionTask::GetGameFramework() const
{
	check(nullptr != GameplayMode);
	return GameplayMode->GetGameFramework();
}

IT4GameObject* FT4ActionTask::GetPlayerObject() const
{
	check(nullptr != GameplayMode);
	return GameplayMode->GetPlayerObject();
}

IT4PlayerController* FT4ActionTask::GetPlayerController() const
{
	check(nullptr != GameplayMode);
	return GameplayMode->GetPlayerController();
}

IT4PacketHandlerCS* FT4ActionTask::GetPacketHandlerCS() const
{
	check(nullptr != GameplayMode);
	return GameplayMode->GetPacketHandlerCS();
}