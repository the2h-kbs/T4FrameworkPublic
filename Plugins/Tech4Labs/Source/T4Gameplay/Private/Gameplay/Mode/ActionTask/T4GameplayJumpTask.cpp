// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayJumpTask.h"

#include "Public/T4GameplayActionKeys.h"

#include "Gameplay/T4GameplayInstance.h"
#include "GameDB/T4GameDB.h"

#include "Network/Protocol/T4PacketCSMinimal.h"

#include "T4Engine/Classes/Action/T4ActionMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Engine/Public/T4EngineSettings.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * #48
 */
FT4JumpActionTask::FT4JumpActionTask(ET4LayerType InLayerType)
	: FT4ActionTask(InLayerType)
	, bDoublePressed(false)
	, JumpHoldTimeLeft(0.0f)
{
}

FT4JumpActionTask::~FT4JumpActionTask()
{
}

void FT4JumpActionTask::Reset()
{
	bDoublePressed = false;
	JumpHoldTimeLeft = 0.0f; // #46
}

void FT4JumpActionTask::Process(float InDeltaTime)
{
	// #46
	if (!bPressed)
	{
		return;
	}
	if (bDoublePressed)
	{
		DoJump();
	}
	else
	{
		JumpHoldTimeLeft -= InDeltaTime;
		if (JumpHoldTimeLeft < 0.0f)
		{
			bPressed = false;
		}
	}
}

bool FT4JumpActionTask::Pressed(FString& OutErrorMsg)
{
	AT4GameplayPlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (PlayerController->HasPlayingAction(T4ActionRollPKey))
	{
		OutErrorMsg = FString::Printf(TEXT("Already Polling."));
		return false;
	}
	if (PlayerController->HasPlayingAction(T4ActionJumpPKey))
	{
		OutErrorMsg = FString::Printf(TEXT("Already Jumping."));
		return false;
	}
	if (bPressed)
	{
		bDoublePressed = true;
		return true;
	}
	const UT4EngineSettings* EngineSettings = GetDefault<UT4EngineSettings>();
	check(nullptr != EngineSettings);
	JumpHoldTimeLeft = EngineSettings->JumpHoldTimeSec;
	bPressed = true;
	return true;
}

void FT4JumpActionTask::DoJump() // #46
{
	if (!bDoublePressed)
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr != PacketHandlerCS)
	{
		AT4GameplayPlayerController* PlayerController = GetPlayerController();
		check(nullptr != PlayerController);
		if (PlayerController->HasGameObject())
		{
			FRotator ControlRotation = PlayerController->GetViewControlRotation();
			FVector JumpDirection = ControlRotation.RotateVector(FVector::ForwardVector);
			FT4PacketJumpCS NewPacketCS; // #27
			NewPacketCS.SenderID = PlayerController->GetGameObjectID();
			NewPacketCS.JumpDirection = JumpDirection;
			PacketHandlerCS->OnSendPacket(&NewPacketCS);
		}
	}
	OnReset();
}