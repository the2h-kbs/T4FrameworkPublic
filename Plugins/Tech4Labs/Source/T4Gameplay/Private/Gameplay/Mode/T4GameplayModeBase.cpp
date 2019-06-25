// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayModeBase.h"

#include "ActionTask/T4GameplayComboAttackTask.h" // #48
#include "ActionTask/T4GameplayCameraRotateTask.h" // #48
#include "ActionTask/T4GameplayJumpTask.h" // #48
#include "ActionTask/T4GameplayRollTask.h" // #48
#include "ActionTask/T4GameplayTeleportTask.h" // #48
#include "ActionTask/T4GameplayLockOnTask.h" // #48

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
  * #40
 */
FT4GameplayModeBase::FT4GameplayModeBase(ET4LayerType InLayerType)
	: LayerType(InLayerType)
	, bLockOnUsed(false)
	, MovementInputVector(FVector::ZeroVector)
{
	for (uint32 i = 0; i < ET4ActionTaskType::ActionTask_Nums; ++i)
	{
		ActionTasks[i] = nullptr; // #48
	}
}

FT4GameplayModeBase::~FT4GameplayModeBase()
{
	OnLeave();
}

void FT4GameplayModeBase::OnEnter()
{
	MovementInputVector = FVector::ZeroVector;

	// #48
	check(nullptr == ActionTasks[ActionTask_Attack]); 
	ActionTasks[ActionTask_Attack] = new FT4ComboAttackActionTask(LayerType);

	check(nullptr == ActionTasks[ActionTask_CameraRotate]);
	ActionTasks[ActionTask_CameraRotate] = new FT4CameraRotateActionTask(LayerType);

	check(nullptr == ActionTasks[ActionTask_Jump]);
	ActionTasks[ActionTask_Jump] = new FT4JumpActionTask(LayerType);

	check(nullptr == ActionTasks[ActionTask_Roll]);
	ActionTasks[ActionTask_Roll] = new FT4RollActionTask(LayerType);

	check(nullptr == ActionTasks[ActionTask_Teleport]);
	ActionTasks[ActionTask_Teleport] = new FT4TeleportActionTask(LayerType);

	check(nullptr == ActionTasks[ActionTask_LockOn]);
	ActionTasks[ActionTask_LockOn] = new FT4LockOnActionTask(LayerType);
	// ~#48

	Enter();
}

void FT4GameplayModeBase::OnLeave()
{
	Leave();

	// #48
	for (uint32 i = 0; i < ET4ActionTaskType::ActionTask_Nums; ++i)
	{
		if (nullptr != ActionTasks[i]) // #48
		{
			delete ActionTasks[i];
			ActionTasks[i] = nullptr;
		}
	}
	// ~#48

	bLockOnUsed = false;
	MovementInputVector = FVector::ZeroVector;
}

void FT4GameplayModeBase::OnProcess(float InDeltaTime)
{
	// #48
	for (uint32 i = 0; i < ET4ActionTaskType::ActionTask_Nums; ++i)
	{
		if (nullptr != ActionTasks[i]) // #48
		{
			ActionTasks[i]->OnProcess(InDeltaTime);
		}
	}
	// ~#48

	Process(InDeltaTime);
}

bool FT4GameplayModeBase::DoMoveForward(float InAxisValue)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (IsMovementLocked())
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose,
			TEXT("FT4GameplayModeBase : don't move, Movement Locked!")
		);
		return false;
	}
	FRotator ControlRotation = PlayerController->GetViewControlRotation();
	FVector MoveDirection = ControlRotation.RotateVector(FVector::ForwardVector) * InAxisValue;
	if (!PlayerController->HasTargetObject())
	{
		PlayerController->SetFreeCameraMoveDirection(MoveDirection); // free camera
		return true;
	}
	MovementInputVector += MoveDirection; // #33 : XY 축 이동이 있어 조작감 향상을 위해 모아서 한 프레임에 패킷으로 전송한다.
	return true;
}

bool FT4GameplayModeBase::DoMoveRight(float InAxisValue)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (IsMovementLocked())
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose,
			TEXT("FT4GameplayModeBase : don't move, Movement Locked!")
		);
		return false;
	}
	FRotator ControlRotation = PlayerController->GetViewControlRotation();
	FVector MoveDirection = ControlRotation.RotateVector(FVector::RightVector) * InAxisValue;
	if (!PlayerController->HasTargetObject())
	{
		PlayerController->SetFreeCameraMoveDirection(MoveDirection); // free camera
		return true;
	}
	MovementInputVector += MoveDirection; // #33 : XY 축 이동이 있어 조작감 향상을 위해 모아서 한 프레임에 패킷으로 전송한다.
	return true;
}

bool FT4GameplayModeBase::DoLockOnPressed() 
{ 
	bLockOnUsed = true; 
	return true; 
}

bool FT4GameplayModeBase::DoLockOnReleased() 
{ 
	bLockOnUsed = false; 
	return true; 
}

bool FT4GameplayModeBase::DoJumpPressed()
{
	if (IsMovementLocked())
	{
		return false;
	}
	if (nullptr == ActionTasks[ActionTask_Jump])
	{
		return false;
	}
	FString ErrorMsg;
	bool bResult = ActionTasks[ActionTask_Jump]->OnPressed(ErrorMsg);
	if (!bResult)
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose,
			TEXT("FT4GameplayModeBase : Jump Failed! %s"),
			*ErrorMsg
		);
	}
	return bResult;
}

bool FT4GameplayModeBase::DoRollPressed()
{
	if (IsMovementLocked())
	{
		return false;
	}
	if (nullptr == ActionTasks[ActionTask_Roll])
	{
		return false;
	}
	FString ErrorMsg;
	bool bResult = ActionTasks[ActionTask_Roll]->OnPressed(ErrorMsg);
	if (!bResult)
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose,
			TEXT("FT4GameplayModeBase : Roll Failed! %s"),
			*ErrorMsg
		);
	}
	return bResult;
}

bool FT4GameplayModeBase::DoTeleportPressed()
{
	if (nullptr == ActionTasks[ActionTask_Teleport])
	{
		return false;
	}
	FString ErrorMsg;
	bool bResult = ActionTasks[ActionTask_Teleport]->OnPressed(ErrorMsg);
	if (!bResult)
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose,
			TEXT("FT4GameplayModeBase : Teleport Failed! %s"),
			*ErrorMsg
		);
	}
	return bResult;
}

bool FT4GameplayModeBase::DoAttackPressed()
{
	if (nullptr == ActionTasks[ActionTask_Attack]) // #48
	{
		return false;
	}
	FString ErrorMsg;
	bool bResult = ActionTasks[ActionTask_Attack]->OnPressed(ErrorMsg);
	if (!bResult) // #45
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose,
			TEXT("FT4GameplayModeBase : Attack Failed! %s"),
			*ErrorMsg
		);
	}
	return bResult;
}

bool FT4GameplayModeBase::DoChangePlayer()
{
	IT4GameObject* MouseOverObject = GetGameFramework()->GetMouseOverGameObject();
	if (nullptr == MouseOverObject)
	{
		return false;
	}
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	if (GameWorld->IsPlayerObject(MouseOverObject))
	{
		return false;
	}
	FT4ChangePlayerAction NewAction;
	NewAction.ObjectID = MouseOverObject->GetObjectID();
	GameWorld->OnExecute(&NewAction);
	return true;
}

bool FT4GameplayModeBase::DoLeaveObject()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return false;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return false;
	}
	FT4PacketCmdPCLeaveCS NewPacketCS; // #27
	NewPacketCS.LeaveObjectID = PlayerController->GetTargetObjectID();
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
	return true;
}

bool FT4GameplayModeBase::DoCameraRotatePressed()
{
	if (nullptr == ActionTasks[ActionTask_CameraRotate])
	{
		return false;
	}
	FString ErrorMsg;
	bool bResult = ActionTasks[ActionTask_CameraRotate]->OnPressed(ErrorMsg);
	return bResult;
}

bool FT4GameplayModeBase::DoCameraRotateReleased()
{
	if (nullptr == ActionTasks[ActionTask_CameraRotate])
	{
		return false;
	}
	ActionTasks[ActionTask_CameraRotate]->OnReleased();
	return true;
}

bool FT4GameplayModeBase::DoCameraZoom(float InAxisValue)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SetCameraZoom(InAxisValue);
	return true;
}

bool FT4GameplayModeBase::DoCameraPitch(float InAxisValue)
{
#if !PLATFORM_ANDROID
	if (!IsCameraRotationEnabled())
	{
		return false;
	}
#endif
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	InAxisValue = -InAxisValue;
	PlayerController->SetCameraPitch(InAxisValue);
	return true;
}

bool FT4GameplayModeBase::DoCameraYaw(float InAxisValue)
{
#if !PLATFORM_ANDROID
	if (!IsCameraRotationEnabled())
	{
		return false;
	}
#endif
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SetCameraYaw(InAxisValue);
	return true;
}

bool FT4GameplayModeBase::CallLockOnStart(
	const float InSyncHeadYawAngle,
	FString& OutErrorMsg
)
{
	bool bResult = false;
	if (nullptr != ActionTasks[ActionTask_LockOn]) // #48
	{
		bResult = ActionTasks[ActionTask_LockOn]->OnStart(InSyncHeadYawAngle, OutErrorMsg);
	}
	return bResult;
}

bool FT4GameplayModeBase::CallLockOnEnd(
	const float InSyncHeadYawAngle,
	FString& OutErrorMsg
)
{
	bool bResult = false;
	if (nullptr != ActionTasks[ActionTask_LockOn]) // #48
	{
		bResult = ActionTasks[ActionTask_LockOn]->OnEnd(InSyncHeadYawAngle, OutErrorMsg);
	}
	return true;
}

bool FT4GameplayModeBase::IsCameraRotationEnabled() const // #48
{
	if (nullptr == ActionTasks[ActionTask_CameraRotate])
	{
		return false;
	}
	return ActionTasks[ActionTask_CameraRotate]->IsPressed();
}

bool FT4GameplayModeBase::IsMovementLocked() const // #48
{
	if (nullptr == ActionTasks[ActionTask_Attack])
	{
		return false;
	}
	return ActionTasks[ActionTask_Attack]->IsMovementLocked();
}

IT4GameFramework* FT4GameplayModeBase::GetGameFramework() const
{
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	return GameFramework;
}

IT4PlayerController* FT4GameplayModeBase::GetPlayerController() const
{
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	IT4PlayerController* PlayerController = GameWorld->GetPlayerController();
	check(nullptr != PlayerController);
	return PlayerController;
}

IT4PacketHandlerCS* FT4GameplayModeBase::GetPacketHandlerCS() const
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
