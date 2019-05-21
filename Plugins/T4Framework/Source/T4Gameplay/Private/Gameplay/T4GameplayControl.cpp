// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameplayControl.h"
#include "T4GameplayActionKeys.h"

#include "Network/Protocol/T4PacketCS.h"

#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "T4Engine/Classes/Action/T4ActionMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"
#include "T4Framework/Public/T4FrameworkUtils.h"

#include "Components/InputComponent.h"

#include "T4GameplayInternal.h"

static const float CameraRotateDelayTimeSec = 0.1f;

/**
  * https://www.unrealengine.com/ko/blog/input-action-and-axis-mappings-in-ue4
 */
UT4GameplayControl::UT4GameplayControl(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, LayerType(ET4LayerType::Max)
	, ControlInputVector(FVector::ZeroVector)
	, CameraRotateDelayLeftTimeSec(0.0f)
	, bCameraRotateReady(false)
	, bCameraRotatePressed(false)
	, bInputControlLocked(false)
{
}

void UT4GameplayControl::Setup(ET4LayerType InLayerType)
{
	check(ET4LayerType::Max == LayerType);
	LayerType = InLayerType;
	SetupInput();
	SetupMouse();
}

void UT4GameplayControl::SetupInput()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);

	UInputComponent* NewInputComponent = PlayerController->NewInputComponent();
	if (nullptr != NewInputComponent)
	{
		NewInputComponent->BindAction("T4Gameplay_Jump", IE_Pressed, this, &UT4GameplayControl::OnJumpPressed);
		NewInputComponent->BindAction("T4Gameplay_LockOn", IE_Pressed, this, &UT4GameplayControl::OnLockOnPressed);
		NewInputComponent->BindAction("T4Gameplay_LockOn", IE_Released, this, &UT4GameplayControl::OnLockOnReleased);

		NewInputComponent->BindAction("T4Gameplay_Teleport", IE_Pressed, this, &UT4GameplayControl::OnTeleportPressed);

		NewInputComponent->BindAction("T4Gameplay_Attack", IE_Pressed, this, &UT4GameplayControl::OnAttackPressed);
		NewInputComponent->BindAction("T4Gameplay_ChangePlayer", IE_Pressed, this, &UT4GameplayControl::OnChangePlayer);
		
		NewInputComponent->BindAction("T4Gameplay_EquipWeapon", IE_Pressed, this, &UT4GameplayControl::OnEquipWeaponPressed);

		NewInputComponent->BindAction("T4Gameplay_EnterPlayer", IE_Pressed, this, &UT4GameplayControl::OnEnterPlayer);
		NewInputComponent->BindAction("T4Gameplay_EnterNPC", IE_Pressed, this, &UT4GameplayControl::OnEnterNPC); // #31
		NewInputComponent->BindAction("T4Gameplay_LeaveObject", IE_Pressed, this, &UT4GameplayControl::OnLeaveObject);

		NewInputComponent->BindAxis("T4Gameplay_MoveForward", this, &UT4GameplayControl::OnMoveForward);
		NewInputComponent->BindAxis("T4Gameplay_MoveRight", this, &UT4GameplayControl::OnMoveRight);

		NewInputComponent->BindAction("T4Gameplay_CameraRotate", IE_Pressed, this, &UT4GameplayControl::OnCameraRotatePressed);
		NewInputComponent->BindAction("T4Gameplay_CameraRotate", IE_Released, this, &UT4GameplayControl::OnCameraRotateReleased);

		NewInputComponent->BindAxis("T4Gameplay_CameraZoom", this, &UT4GameplayControl::OnCameraZoom);
		NewInputComponent->BindAxis("T4Gameplay_CameraPitch", this, &UT4GameplayControl::OnCameraPitch);
		NewInputComponent->BindAxis("T4Gameplay_CameraYaw", this, &UT4GameplayControl::OnCameraYaw);
	
		PlayerController->SetInputComponent(NewInputComponent);
	}
	PlayerController->OnSetInputMode(ET4InputMode::GameAndUI);
}

void UT4GameplayControl::SetupMouse()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);

	PlayerController->ShowMouseCursor(true);

	//PlayerController->DefaultMouseCursor;
	//PlayerController->CurrentMouseCursor;

	//PlayerController->bEnableClickEvents = true;
	//PlayerController->bEnableMouseOverEvents = true;
}

void UT4GameplayControl::Process(float InDeltaTime)
{
	if (!ControlInputVector.IsZero())
	{
		// #33 : XY 축 이동이 있어 조작감 향상을 위해 모아서 한 프레임에 패킷으로 전송한다.
		IT4PlayerController* PlayerController = GetPlayerController();
		check(nullptr != PlayerController);
		if (PlayerController->HasTargetObject())
		{
			IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
			if (nullptr != PacketHandlerCS)
			{
				ControlInputVector.Normalize();

				{
					// #33 : Player 는 조작감 향상을 위해 선이동을 한다.
					// WARN : FT4PacketMoveToSC 처리는 Player 는 제외함에 유의!!
					IT4GameObject* PlayerObject = PlayerController->GetTargetObject();
					check(nullptr != PlayerObject);

					FT4MoveToAction NewAction;
					NewAction.MoveType = ET4MoveType::Async;
					NewAction.MoveDirection = ControlInputVector;
					NewAction.MoveSpeed = PlayerObject->GetPropertyConst().GetMoveSpeed(ET4MoveType::Async);
					PlayerObject->OnExecute(&NewAction);

					FT4PacketMoveWarmupCS NewPacketCS; // #27
					NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
					NewPacketCS.MoveDirection = ControlInputVector;
					PacketHandlerCS->OnSendPacket(&NewPacketCS);
				}
			}
		}
		ControlInputVector = FVector::ZeroVector;
	}
	if (bCameraRotateReady)
	{
		// #11 : CTRL + 마우스 우클릭으로 Player 교체 처리를 위해 딜레이를 줌!
		CameraRotateDelayLeftTimeSec -= InDeltaTime;
		if (0.0f >= CameraRotateDelayLeftTimeSec)
		{
			SetMouseCursor(false);
			SetMouseMoveLock(true);
			bCameraRotatePressed = true;
			bCameraRotateReady = false;
		}
	}
}

void UT4GameplayControl::OnMoveForward(float InAxisValue) 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (0.0f == InAxisValue)
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (PlayerController->HasPlayingAction(AttackActionPrimaryKey))
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose, 
			TEXT("UT4GameplayControl : don't move, playing action is attack!")
		);
		return;
	}
	FRotator ControlRotation = PlayerController->GetViewControlRotation();
	FVector MoveDirection = ControlRotation.RotateVector(FVector::ForwardVector) * InAxisValue;
	if (!PlayerController->HasTargetObject())
	{
		PlayerController->SetFreeCameraMoveDirection(MoveDirection); // free camera
		return;
	}
	ControlInputVector += MoveDirection; // #33 : XY 축 이동이 있어 조작감 향상을 위해 모아서 한 프레임에 패킷으로 전송한다.
}

void UT4GameplayControl::OnMoveRight(float InAxisValue) 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (0.0f == InAxisValue)
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (PlayerController->HasPlayingAction(AttackActionPrimaryKey))
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose, 
			TEXT("UT4GameplayControl : don't move, playing action is attack!")
		);
		return;
	}
	FRotator ControlRotation = PlayerController->GetViewControlRotation();
	FVector MoveDirection = ControlRotation.RotateVector(FVector::RightVector) * InAxisValue;
	if (!PlayerController->HasTargetObject())
	{
		PlayerController->SetFreeCameraMoveDirection(MoveDirection); // free camera
		return;
	}
	ControlInputVector += MoveDirection; // #33 : XY 축 이동이 있어 조작감 향상을 위해 모아서 한 프레임에 패킷으로 전송한다.
}

void UT4GameplayControl::OnJumpPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return;
	}
	if (PlayerController->HasPlayingAction(JumpActionPrimaryKey))
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose,
			TEXT("UT4GameplayControl : don't jump, playing action is jump!")
		);
		return;
	}
	FRotator ControlRotation = PlayerController->GetViewControlRotation();
	FVector ForwordVector = ControlRotation.RotateVector(FVector::ForwardVector);

	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketJumpWarmupCS NewPacketCS; // #27
	NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
	NewPacketCS.JumpDirection = ForwordVector;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnAttackPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return;
	}
	if (PlayerController->HasPlayingAction(AttackActionPrimaryKey))
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose, 
			TEXT("UT4GameplayControl : don't attack, playing action is attack!")
		);
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketAttackCS NewPacketCS;
	NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
	NewPacketCS.SkillNameInTable = TEXT("NormalAttack");
	IT4GameObject* MouseOverObject = T4FrameworkUtil::GetMouseOverGameObject(GetLayerType());
	if (nullptr != MouseOverObject)
	{
		NewPacketCS.TargetObjectID = MouseOverObject->GetObjectID();
	}
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnChangePlayer()
{
	IT4GameObject* MouseOverObject = T4FrameworkUtil::GetMouseOverGameObject(GetLayerType());
	if (nullptr == MouseOverObject)
	{
		return;
	}
	IT4GameWorld* GameWorld = T4EngineWorldGet(GetLayerType());
	check(nullptr != GameWorld);
	if (GameWorld->IsPlayerObject(MouseOverObject))
	{
		return;
	}
	FT4ChangePlayerAction NewAction;
	NewAction.ObjectID = MouseOverObject->GetObjectID();
	NewAction.DoExecute(GameWorld);
}

void UT4GameplayControl::OnEnterPlayer()
{
	FVector PickingLocation;
	if (!T4FrameworkUtil::GetMousePickingLocation(GetLayerType(), PickingLocation))
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	FT4PacketCmdPCEnterCS NewPacketCS; // #27
	NewPacketCS.CharacterNameInTable = TEXT("DefaultCharacter");
	NewPacketCS.SpawnLocation = PickingLocation;
	NewPacketCS.bSetViewTarget = !PlayerController->HasTargetObject(); // WARN : 빙의된 캐릭터가 없으면 MyPC로 간주하도록 조치
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnEnterNPC()
{
	FVector PickingLocation;
	if (!T4FrameworkUtil::GetMousePickingLocation(GetLayerType(), PickingLocation))
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketCmdNPCEnterCS NewPacketCS; // #31
	NewPacketCS.NPCNameInTable = TEXT("DefaultNPC");
	NewPacketCS.SpawnLocation = PickingLocation;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnLeaveObject()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketCmdPCLeaveCS NewPacketCS; // #27
	NewPacketCS.LeaveObjectID = PlayerController->GetTargetObjectID();
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnEquipWeaponPressed()
{ 
	if (bInputControlLocked) // #30
	{
		return;
	}
	// #22
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	const FT4ObjectID PlayerObjectID = PlayerController->GetTargetObjectID();
	if (PlayerController->HasPlayingAction(WeaponLeftEquipmentActionPrimaryKey))
	{
		FT4PacketUnEquipCS NewPacketCS; // #27
		NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
		NewPacketCS.ItemNameInTable = TEXT("DefaultSword");
		PacketHandlerCS->OnSendPacket(&NewPacketCS);
	}
	else
	{
		FT4PacketEquipCS NewPacketCS; // #27
		NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
		NewPacketCS.ItemNameInTable = TEXT("DefaultSword");
		PacketHandlerCS->OnSendPacket(&NewPacketCS);
	}
}

void UT4GameplayControl::OnLockOnPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return;
	}
	if (PlayerController->HasPlayingAction(AttackActionPrimaryKey) ||
		PlayerController->HasPlayingAction(JumpActionPrimaryKey))
	{
		UE_LOG(
			LogT4Gameplay,
			Verbose, 
			TEXT("UT4GameplayControl : don't lockon, playing action is attack or jump!")
		);
		return;
	}
	// #20
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketLockedCS NewPacketCS; // #27
	NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
	NewPacketCS.LockedRotation = PlayerController->GetTargetObject()->GetRotation();
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnLockOnReleased()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return;
	}
	if (!PlayerController->HasPlayingAction(LockOnActionPrimaryKey))
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketUnLockedCS NewPacketCS; // #27
	NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnTeleportPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		return;
	}
	FVector PickingLocation;
	if (!T4FrameworkUtil::GetMousePickingLocation(GetLayerType(), PickingLocation))
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketCmdTeleportCS NewPacketCS; // #27
	NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
	NewPacketCS.TargetLocation = PickingLocation;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void UT4GameplayControl::OnCameraRotatePressed() 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	CameraRotateDelayLeftTimeSec = CameraRotateDelayTimeSec;
	bCameraRotateReady = true;
}

void UT4GameplayControl::OnCameraRotateReleased() 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	bCameraRotateReady = false;
	if (!bCameraRotatePressed)
	{
		return;
	}
	SetMouseCursor(true);
	SetMouseMoveLock(false);
	bCameraRotatePressed = false;
}

void UT4GameplayControl::OnCameraZoom(float InAxisValue)
{
	if (0.0f == InAxisValue)
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SetCameraZoom(InAxisValue);
}

void UT4GameplayControl::OnCameraPitch(float InAxisValue)
{
#if PLATFORM_ANDROID
	if (0.0f == InAxisValue)
#else
	if (0.0f == InAxisValue || !bCameraRotatePressed)
#endif
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	InAxisValue = -InAxisValue;
	PlayerController->SetCameraPitch(InAxisValue);
}

void UT4GameplayControl::OnCameraYaw(float InAxisValue)
{
#if PLATFORM_ANDROID
	if (0.0f == InAxisValue)
#else
	if (0.0f == InAxisValue || !bCameraRotatePressed)
#endif
	{
		return;
	}
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SetCameraYaw(InAxisValue);
}

void UT4GameplayControl::SetMouseCursor(bool bShow)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->ShowMouseCursor(bShow);
}

void UT4GameplayControl::SetMouseMoveLock(bool bLock)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SetCameraLock(bLock);
}

IT4PlayerController* UT4GameplayControl::GetPlayerController() const
{
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	IT4PlayerController* PlayerController = GameWorld->GetPlayerController();
	check(nullptr != PlayerController);
	return PlayerController;
}

IT4PacketHandlerCS* UT4GameplayControl::GetPacketHandlerCS() const
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