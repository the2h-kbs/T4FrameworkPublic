// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayModeHandler.h"
#include "T4GameplayModeTPS.h" // #40
#include "T4GameplayModeShoulderView.h" // #40

#include "T4GameplaySettings.h"

#include "Public/T4GameplayUtils.h"

#include "T4Core/Public/T4CoreMacros.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "Components/InputComponent.h"

#include "T4GameplayInternal.h"

/**
  * https://www.unrealengine.com/ko/blog/input-action-and-axis-mappings-in-ue4
 */
UT4GameplayModeHandler::UT4GameplayModeHandler(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, LayerType(ET4LayerType::Max)
	, ActiveModeType(ET4GameplayModeType::None)
	, ActiveModeStrategy(nullptr) // #40
	, bInputControlLocked(false)
{
}

void UT4GameplayModeHandler::Initialize(ET4LayerType InLayerType)
{
	check(ET4LayerType::Max == LayerType);
	LayerType = InLayerType;
	check(ET4LayerType::Max != LayerType);
	ET4GameplayModeType DefaultModeType = GetDefault<UT4GameplaySettings>()->GameplayMode; // #40
	SwitchModeStrategy(DefaultModeType); // #40
	SetupInput();
	SetupMouse();
}

void UT4GameplayModeHandler::Finalize()
{
	if (nullptr != ActiveModeStrategy)
	{
		delete ActiveModeStrategy; // #40
		ActiveModeStrategy = nullptr;
	}
}

void UT4GameplayModeHandler::SetupInput()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);

	UInputComponent* NewInputComponent = PlayerController->NewInputComponent();
	if (nullptr != NewInputComponent)
	{
		// #40
		NewInputComponent->BindAction("Tech4Labs_NextPlayMode", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnNextPlayModePressed);

		// #43
		NewInputComponent->BindAction("Tech4Labs_PlayerQuickSpawn_1", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnPlayerQuickSpawn1Pressed);
		NewInputComponent->BindAction("Tech4Labs_PlayerQuickSpawn_2", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnPlayerQuickSpawn2Pressed);
		NewInputComponent->BindAction("Tech4Labs_NPCQuickSpawn_1", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnNPCQuickSpawn1Pressed);
		NewInputComponent->BindAction("Tech4Labs_NPCQuickSpawn_2", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnNPCQuickSpawn2Pressed);
		// ~#43
	
		// #48
		NewInputComponent->BindAction("Tech4Labs_EquipWeapon_1", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnEquipWeapon1Pressed);
		NewInputComponent->BindAction("Tech4Labs_EquipWeapon_2", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnEquipWeapon2Pressed);
		// ~#48

		NewInputComponent->BindAxis("Tech4Labs_MoveForward", this, &UT4GameplayModeHandler::HandleOnMoveForward);
		NewInputComponent->BindAxis("Tech4Labs_MoveRight", this, &UT4GameplayModeHandler::HandleOnMoveRight);

		NewInputComponent->BindAction("Tech4Labs_Jump", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnJumpPressed);
		NewInputComponent->BindAction("Tech4Labs_Roll", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnRollPressed); // #46
		NewInputComponent->BindAction("Tech4Labs_Teleport", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnTeleportPressed);

		NewInputComponent->BindAction("Tech4Labs_Attack", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnAttackPressed);

		NewInputComponent->BindAction("Tech4Labs_LockOn", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnLockOnPressed);
		NewInputComponent->BindAction("Tech4Labs_LockOn", IE_Released, this, &UT4GameplayModeHandler::HandleOnLockOnReleased);

		NewInputComponent->BindAction("Tech4Labs_ChangePlayer", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnChangePlayer);
		NewInputComponent->BindAction("Tech4Labs_LeaveObject", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnLeaveObject);

		NewInputComponent->BindAction("Tech4Labs_CameraRotate", IE_Pressed, this, &UT4GameplayModeHandler::HandleOnCameraRotatePressed);
		NewInputComponent->BindAction("Tech4Labs_CameraRotate", IE_Released, this, &UT4GameplayModeHandler::HandleOnCameraRotateReleased);

		NewInputComponent->BindAxis("Tech4Labs_CameraZoom", this, &UT4GameplayModeHandler::HandleOnCameraZoom);
		NewInputComponent->BindAxis("Tech4Labs_CameraPitch", this, &UT4GameplayModeHandler::HandleOnCameraPitch);
		NewInputComponent->BindAxis("Tech4Labs_CameraYaw", this, &UT4GameplayModeHandler::HandleOnCameraYaw);
	
		PlayerController->SetInputComponent(NewInputComponent);
	}
	PlayerController->OnSetInputMode(ET4InputMode::GameAndUI);
}

void UT4GameplayModeHandler::SetupMouse()
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);

	PlayerController->ShowMouseCursor(true);

	//PlayerController->DefaultMouseCursor;
	//PlayerController->CurrentMouseCursor;

	//PlayerController->bEnableClickEvents = true;
	//PlayerController->bEnableMouseOverEvents = true;
}

void UT4GameplayModeHandler::Process(float InDeltaTime)
{
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->OnProcess(InDeltaTime); // #40
	}
}

void UT4GameplayModeHandler::HandleOnNextPlayModePressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	// #40
	if (ET4GameplayModeType::TPS == ActiveModeType)
	{
		SwitchModeStrategy(ET4GameplayModeType::ShoulderView);
	}
	else if (ET4GameplayModeType::ShoulderView == ActiveModeType)
	{
		SwitchModeStrategy(ET4GameplayModeType::TPS);
	}
}

void UT4GameplayModeHandler::HandleOnPlayerQuickSpawn1Pressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	FName SpawnContentNameID = GetDefault<UT4GameplaySettings>()->PlayerDataRowName_Key1; // #43
	if (SpawnContentNameID != NAME_None)
	{
		T4GameplayUtil::DoPlayerSpawn(LayerType, SpawnContentNameID);
	}
}

void UT4GameplayModeHandler::HandleOnPlayerQuickSpawn2Pressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	FName SpawnContentNameID = GetDefault<UT4GameplaySettings>()->PlayerDataRowName_Key2; // #43
	if (SpawnContentNameID != NAME_None)
	{
		T4GameplayUtil::DoPlayerSpawn(LayerType, SpawnContentNameID);
	}
}

void UT4GameplayModeHandler::HandleOnNPCQuickSpawn1Pressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	FName SpawnContentNameID = GetDefault<UT4GameplaySettings>()->NPCDataRowName_Key1; // #43
	if (SpawnContentNameID != NAME_None)
	{
		T4GameplayUtil::DoNPCSpawn(LayerType, SpawnContentNameID);
	}
}

void UT4GameplayModeHandler::HandleOnNPCQuickSpawn2Pressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	FName SpawnContentNameID = GetDefault<UT4GameplaySettings>()->NPCDataRowName_Key2; // #43
	if (SpawnContentNameID != NAME_None)
	{
		T4GameplayUtil::DoNPCSpawn(LayerType, SpawnContentNameID);
	}
}

void UT4GameplayModeHandler::HandleOnEquipWeapon1Pressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	FName WeaponDataRowName = GetDefault<UT4GameplaySettings>()->WeaponDataRowName_Key1; // #48
	if (WeaponDataRowName != NAME_None)
	{
		T4GameplayUtil::DoEquipOrUnEquipWeapon(LayerType, WeaponDataRowName, true);
	}
}

void UT4GameplayModeHandler::HandleOnEquipWeapon2Pressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	FName WeaponDataRowName = GetDefault<UT4GameplaySettings>()->WeaponDataRowName_Key2; // #48
	if (WeaponDataRowName != NAME_None)
	{
		T4GameplayUtil::DoEquipOrUnEquipWeapon(LayerType, WeaponDataRowName, true);
	}
}

void UT4GameplayModeHandler::HandleOnMoveForward(float InAxisValue) 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (0.0f == InAxisValue)
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoMoveForward(InAxisValue); // #40
	}
}

void UT4GameplayModeHandler::HandleOnMoveRight(float InAxisValue) 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (0.0f == InAxisValue)
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoMoveRight(InAxisValue); // #40
	}
}

void UT4GameplayModeHandler::HandleOnJumpPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoJumpPressed(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnRollPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoRollPressed(); // #46
	}
}

void UT4GameplayModeHandler::HandleOnTeleportPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoTeleportPressed(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnAttackPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoAttackPressed(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnLockOnPressed()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoLockOnPressed(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnLockOnReleased()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoLockOnReleased(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnChangePlayer()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoChangePlayer(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnLeaveObject()
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoLeaveObject(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnCameraRotatePressed() 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoCameraRotatePressed(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnCameraRotateReleased() 
{
	if (bInputControlLocked) // #30
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoCameraRotateReleased(); // #40
	}
}

void UT4GameplayModeHandler::HandleOnCameraZoom(float InAxisValue)
{
	if (0.0f == InAxisValue)
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoCameraZoom(InAxisValue); // #40
	}
}

void UT4GameplayModeHandler::HandleOnCameraPitch(float InAxisValue)
{
	if (0.0f == InAxisValue)
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoCameraPitch(InAxisValue); // #40
	}
}

void UT4GameplayModeHandler::HandleOnCameraYaw(float InAxisValue)
{
	if (0.0f == InAxisValue)
	{
		return;
	}
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->DoCameraYaw(InAxisValue); // #40
	}
}

void UT4GameplayModeHandler::SwitchModeStrategy(ET4GameplayModeType InChangeModeType)
{
	// #40
	if (nullptr != ActiveModeStrategy)
	{
		ActiveModeStrategy->OnLeave();
		delete ActiveModeStrategy;
		ActiveModeStrategy = nullptr;
	}
	switch (InChangeModeType)
	{
		case ET4GameplayModeType::TPS:
			ActiveModeStrategy = new FT4GameplayModeTPS(LayerType);
			break;

		case ET4GameplayModeType::ShoulderView:
			ActiveModeStrategy = new FT4GameplayModeShoulderView(LayerType);
			break;

		default:
			{
				UE_LOG(
					LogT4Gameplay,
					Error,
					TEXT("[SL:%u] SwitchModeStrategy '%u' failed. no implementation."),
					uint32(LayerType),
					uint32(InChangeModeType)
				);
			}
			break;
	}
	check(nullptr != ActiveModeStrategy);
	ActiveModeStrategy->OnEnter();
	ActiveModeType = InChangeModeType;
}

IT4PlayerController* UT4GameplayModeHandler::GetPlayerController() const
{
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	IT4PlayerController* PlayerController = GameFramework->GetPCInterface();
	check(nullptr != PlayerController);
	return PlayerController;
}
