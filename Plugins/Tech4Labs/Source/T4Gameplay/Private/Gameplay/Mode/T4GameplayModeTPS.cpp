// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayModeTPS.h"
#include "Public/T4GameplayActionKeys.h"

#include "Network/Protocol/T4PacketCSMinimal.h"

#include "T4Engine/Classes/Action/T4ActionMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "Public/T4Gameplay.h"

#include "T4GameplayInternal.h"

inline float GetHeadYawAngle2D(const FVector& InDirection)
{
	return FMath::Atan2(InDirection.Y, InDirection.X) * (180.f / PI); // #40
}

/**
  * #40
 */
FT4GameplayModeTPS::FT4GameplayModeTPS(ET4LayerType InLayerType)
	: FT4GameplayModeBase(InLayerType)
{
}

FT4GameplayModeTPS::~FT4GameplayModeTPS()
{
}

void FT4GameplayModeTPS::Enter()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SwitchCameraType(ET4CameraType::TPS);
}

void FT4GameplayModeTPS::Leave()
{
	DoCameraRotateReleased();
	DoLockOnReleased();
}

void FT4GameplayModeTPS::Process(float InDeltaTime)
{
	ProcessMovement(InDeltaTime);
	ProcessTurn(InDeltaTime);
}

void FT4GameplayModeTPS::ProcessMovement(float InDeltaTime)
{
	if (MovementInputVector.IsZero())
	{
		return;
	}
	// #33 : XY 축 이동이 있어 조작감 향상을 위해 모아서 한 프레임에 패킷으로 전송한다.
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (PlayerController->HasTargetObject())
	{
		IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
		if (nullptr != PacketHandlerCS)
		{
			MovementInputVector.Normalize();
			{
				// #33 : Player 는 조작감 향상을 위해 선이동을 한다.
				IT4GameObject* PlayerObject = PlayerController->GetTargetObject();
				check(nullptr != PlayerObject);

				float ApplyHeadYawAngle = 0.0f;
				if (bLockOnUsed)
				{
					// #40 : 락온 일 경우는 카메라 방향
					ApplyHeadYawAngle = PlayerController->GetCameraRotation().Yaw;
				}
				else
				{
					// #40 : 락온이 아니면 캐릭터 방향으로...
					ApplyHeadYawAngle = GetHeadYawAngle2D(MovementInputVector);
				}

				FT4MoveAsyncToAction NewAction;
				NewAction.MoveDirection = MovementInputVector;
				NewAction.HeadYawAngle = ApplyHeadYawAngle; // #44
				PlayerObject->OnExecute(&NewAction);

				FT4PacketMoveCS NewPacketCS; // #27
				NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
				NewPacketCS.MoveDirection = MovementInputVector;
				NewPacketCS.HeadYawAngle = ApplyHeadYawAngle;
				PacketHandlerCS->OnSendPacket(&NewPacketCS);
			}
		}
	}
	MovementInputVector = FVector::ZeroVector;
}

void FT4GameplayModeTPS::ProcessTurn(float InDeltaTime)
{
	if (!bLockOnUsed || !IsCameraRotationEnabled())
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	// #40 : TODO : dirty check
	if (PlayerController->HasTargetObject())
	{
		IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
		if (nullptr != PacketHandlerCS)
		{
			FT4PacketTurnCS NewPacketCS; // #40
			NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
			NewPacketCS.TargetYawAngle = PlayerController->GetCameraRotation().Yaw;
			PacketHandlerCS->OnSendPacket(&NewPacketCS);
		}
	}
}

bool FT4GameplayModeTPS::DoLockOnPressed()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	// #40 : 락온은 카메라 방향이 기준이기 때문에 카메라 방향으로 위치를 맞춰준다.
	const FRotator SyncRotation = PlayerController->GetCameraRotation();
	FString ErrorMsg;
	bool bResult = CallLockOnStart(SyncRotation.Yaw, ErrorMsg);
	if (bResult)
	{
		bLockOnUsed = true;
	}
	return bResult;
}

bool FT4GameplayModeTPS::DoLockOnReleased()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	// #40 : 락온 해제는 캐릭터 현재 방향으로 동기화 해준다.
	FRotator SyncRotation = FRotator::ZeroRotator;
	if (PlayerController->HasTargetObject())
	{
		SyncRotation = PlayerController->GetTargetObject()->GetRotation();
	}
	FString ErrorMsg;
	bool bResult = CallLockOnEnd(SyncRotation.Yaw, ErrorMsg);
	bLockOnUsed = false;
	return bResult;
}
