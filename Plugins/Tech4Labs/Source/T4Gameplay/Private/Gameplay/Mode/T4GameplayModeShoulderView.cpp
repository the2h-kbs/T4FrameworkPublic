// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayModeShoulderView.h"
#include "Public/T4GameplayActionKeys.h"

#include "Network/Protocol/T4PacketCSMinimal.h"

#include "T4Engine/Classes/Action/T4ActionMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "Public/T4Gameplay.h"

#include "T4GameplayInternal.h"

static const float SVLockOnClearTimeSec = 0.1f;

/**
  * #40
 */
FT4GameplayModeShoulderView::FT4GameplayModeShoulderView(ET4LayerType InLayerType)
	: FT4GameplayModeBase(InLayerType)
	, bLockOnStart(false)// #40
	, LockOnClearTimeLeft(0.0f) // #40
{
}

FT4GameplayModeShoulderView::~FT4GameplayModeShoulderView()
{
}

void FT4GameplayModeShoulderView::Enter()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SwitchCameraType(ET4CameraType::ShoulderView);
}

void FT4GameplayModeShoulderView::Leave()
{
	DoCameraRotateReleased();
}

void FT4GameplayModeShoulderView::Process(float InDeltaTime)
{
	ProcessMovement(InDeltaTime);
	ProcessLockOn(InDeltaTime);
}

void FT4GameplayModeShoulderView::ProcessMovement(float InDeltaTime)
{
	if (MovementInputVector.IsZero())
	{
		return;
	}
	// #33 : XY 축 이동이 있어 조작감 향상을 위해 모아서 한 프레임에 패킷으로 전송한다.
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (PlayerController->HasGameObject())
	{
		IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
		if (nullptr != PacketHandlerCS)
		{
			const FRotator SyncRotation = PlayerController->GetCameraRotation();

			if (!bLockOnStart)
			{
				FString ErrorMsg;
				CallLockOnStart(SyncRotation.Yaw, ErrorMsg);
				bLockOnStart = true;
			}
			LockOnClearTimeLeft = SVLockOnClearTimeSec + InDeltaTime;

			MovementInputVector.Normalize();

			{
				// #33 : Player 는 조작감 향상을 위해 선이동을 한다.
				IT4GameObject* PlayerObject = PlayerController->GetGameObject();
				check(nullptr != PlayerObject);

				FT4MoveAsyncToAction NewAction;
				NewAction.MoveDirection = MovementInputVector;
				NewAction.HeadYawAngle = SyncRotation.Yaw; // #40, #44 : ShoulderView 에서 이동은 항상 락온 상황
				PlayerObject->OnExecute(&NewAction);

				FT4PacketMoveCS NewPacketCS; // #27
				NewPacketCS.SenderID = PlayerController->GetGameObjectID();
				NewPacketCS.MoveDirection = MovementInputVector;
				NewPacketCS.HeadYawAngle = SyncRotation.Yaw; // #40 : ShoulderView 에서 이동은 항상 락온 상황
				PacketHandlerCS->OnSendPacket(&NewPacketCS);
			}
		}
	}
	MovementInputVector = FVector::ZeroVector;
}

void FT4GameplayModeShoulderView::ProcessLockOn(float InDeltaTime)
{
	if (!bLockOnStart)
	{
		return;
	}
	LockOnClearTimeLeft -= InDeltaTime;
	if (0.0f >= LockOnClearTimeLeft)
	{
		// #40 : 락온 해제는 캐릭터 현재 방향으로 동기화 해준다.
		FRotator SyncRotation = FRotator::ZeroRotator;
		IT4PlayerController* PlayerController = GetPlayerController();
		check(nullptr != PlayerController);
		if (PlayerController->HasGameObject())
		{
			SyncRotation = PlayerController->GetGameObject()->GetRotation();
		}
		FString ErrorMsg;
		CallLockOnEnd(SyncRotation.Yaw, ErrorMsg);
		bLockOnStart = false;
	}
}