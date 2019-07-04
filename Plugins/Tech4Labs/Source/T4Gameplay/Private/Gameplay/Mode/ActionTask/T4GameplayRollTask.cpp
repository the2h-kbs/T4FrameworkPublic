// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayRollTask.h"

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
FT4RollActionTask::FT4RollActionTask(FT4GameplayModeBase* InGameplayMode)
	: FT4ActionTask(InGameplayMode)
	, RollHoldTimeLeft(0.0f) // #46
{
}

FT4RollActionTask::~FT4RollActionTask()
{
}

void FT4RollActionTask::Reset()
{
	RollHoldTimeLeft = 0.0f; // #46
}

void FT4RollActionTask::Process(float InDeltaTime)
{
	if (!bPressed)
	{
		return;
	}
	RollHoldTimeLeft -= InDeltaTime;
	if (RollHoldTimeLeft < 0.0f)
	{
		DoRoll();
	}
}

bool FT4RollActionTask::Pressed(FString& OutErrorMsg)
{
	IT4PlayerController* PlayerController = GetPlayerController();
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
		bPressed = false; // 더블 클릭은 점프임으로 취소해주자. hack
		return false;
	}
	const UT4EngineSettings* EngineSettings = GetDefault<UT4EngineSettings>();
	check(nullptr != EngineSettings);
	RollHoldTimeLeft = EngineSettings->RollHoldTimeSec;
	bPressed = true;
	return true;
}

void FT4RollActionTask::DoRoll() // #46
{
	if (!bPressed)
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr != PacketHandlerCS)
	{
		IT4PlayerController* PlayerController = GetPlayerController();
		check(nullptr != PlayerController);
		if (PlayerController->HasGameObject())
		{
			IT4GameObject* TargetObject = PlayerController->GetGameObject();
			check(nullptr != TargetObject);
			FVector RollDirection = TargetObject->GetMovementVelocity();
			if (RollDirection.IsNearlyZero())
			{
				// #46 : 이동중이지 않다면 캐릭터 Front 방향으로 구르기 시도!
				RollDirection = TargetObject->GetFrontVector();
			}
			else
			{
				RollDirection.Normalize();
			}
			FT4PacketRollCS NewPacketCS; // #27
			NewPacketCS.SenderID = PlayerController->GetGameObjectID();
			NewPacketCS.RollDirection = RollDirection;
			PacketHandlerCS->DoSendPacket(&NewPacketCS);
		}
	}
	OnReset();
}