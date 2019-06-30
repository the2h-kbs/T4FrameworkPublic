// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayLockOnTask.h"

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
FT4LockOnActionTask::FT4LockOnActionTask(ET4LayerType InLayerType)
	: FT4ActionTask(InLayerType)
{
}

FT4LockOnActionTask::~FT4LockOnActionTask()
{
}

void FT4LockOnActionTask::Reset()
{
}

void FT4LockOnActionTask::Process(float InDeltaTime)
{
}

bool FT4LockOnActionTask::Start(
	const float InSyncHeadYawAngle, 
	FString& OutErrorMsg
)
{
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		OutErrorMsg = FString::Printf(TEXT("PacketHandler is Not set."));
		return false;
	}
	AT4GameplayPlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasGameObject())
	{
		OutErrorMsg = FString::Printf(TEXT("PlayerObject is Not set."));
		return false;
	}
	if (PlayerController->HasPlayingAction(T4ActionLockOnPKey))
	{
		OutErrorMsg = FString::Printf(TEXT("Already LockOn played."));
		return false;
	}
	FT4PacketLockOnCS NewPacketCS; // #27
	NewPacketCS.SenderID = PlayerController->GetGameObjectID();
	NewPacketCS.HeadYawAngle = InSyncHeadYawAngle;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
	bStarted = true;
	return true;
}

bool FT4LockOnActionTask::End(
	const float InSyncHeadYawAngle, 
	FString& OutErrorMsg
)
{
	bStarted = false;
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		OutErrorMsg = FString::Printf(TEXT("PacketHandler is Not set."));
		return false;
	}
	AT4GameplayPlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasGameObject())
	{
		OutErrorMsg = FString::Printf(TEXT("PlayerObject is Not set."));
		return false;
	}
	if (!PlayerController->HasPlayingAction(T4ActionLockOnPKey))
	{
		OutErrorMsg = FString::Printf(TEXT("Already LockOn played."));
		return false;
	}
	FT4PacketLockOffCS NewPacketCS; // #27
	NewPacketCS.SenderID = PlayerController->GetGameObjectID();
	NewPacketCS.HeadYawAngle = InSyncHeadYawAngle; // #38
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
	return true;
}