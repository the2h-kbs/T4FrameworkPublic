// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayTeleportTask.h"

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
FT4TeleportActionTask::FT4TeleportActionTask(FT4GameplayModeBase* InGameplayMode)
	: FT4ActionTask(InGameplayMode)
{
}

FT4TeleportActionTask::~FT4TeleportActionTask()
{
}

void FT4TeleportActionTask::Reset()
{
}

void FT4TeleportActionTask::Process(float InDeltaTime)
{
}

bool FT4TeleportActionTask::Pressed(FString& OutErrorMsg)
{
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		OutErrorMsg = FString::Printf(TEXT("PacketHandler is Not set."));
		return false;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasGameObject())
	{
		OutErrorMsg = FString::Printf(TEXT("PlayerObject is Not set."));
		return false;
	}
	FVector PickingLocation;
	if (!GetGameFramework()->GetMousePickingLocation(PickingLocation))
	{
		OutErrorMsg = FString::Printf(TEXT("Invalid Picking Location."));
		return false;
	}
	FT4PacketCmdTeleportCS NewPacketCS; // #27
	NewPacketCS.SenderID = PlayerController->GetGameObjectID();
	NewPacketCS.TargetLocation = PickingLocation;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
	return true;
}
