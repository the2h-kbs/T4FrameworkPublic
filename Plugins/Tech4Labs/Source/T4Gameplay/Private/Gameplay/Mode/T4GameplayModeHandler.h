// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "T4GameplayModeBase.h" // #40
#include "T4GameplayModeHandler.generated.h"

/**
  * https://www.unrealengine.com/ko/blog/input-action-and-axis-mappings-in-ue4
 */
class IT4PlayerController;
class IT4PacketHandlerCS;
class IT4GameObject;
UCLASS()
class UT4GameplayModeHandler : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void Initialize(ET4LayerType InLayerType);
	void Finalize(); // #40

	void Process(float InDeltaTime);

	ET4LayerType GetLayerType() const { return LayerType; }

	void HandleOnNextPlayModePressed(); // #40

	// #43
	void HandleOnPlayerQuickSpawn1Pressed(); 
	void HandleOnPlayerQuickSpawn2Pressed();
	void HandleOnNPCQuickSpawn1Pressed();
	void HandleOnNPCQuickSpawn2Pressed();
	// ~#43

	// #48
	void HandleOnEquipWeapon1Pressed(); // #22
	void HandleOnEquipWeapon2Pressed(); // #22
	// ~#48

	void HandleOnMoveForward(float InAxisValue);
	void HandleOnMoveRight(float InAxisValue);

	void HandleOnJumpPressed();
	void HandleOnRollPressed(); // #46
	void HandleOnTeleportPressed();

	void HandleOnAttackPressed();

	void HandleOnLockOnPressed();
	void HandleOnLockOnReleased();

	void HandleOnChangePlayer();
	void HandleOnLeaveObject();

	void HandleOnCameraRotatePressed();
	void HandleOnCameraRotateReleased();

	void HandleOnCameraZoom(float InAxisValue);
	void HandleOnCameraPitch(float InAxisValue);
	void HandleOnCameraYaw(float InAxisValue);

	void SetInputControlLock(bool bLock) { bInputControlLocked = bLock; } // #30

private:
	void SetupInput();
	void SetupMouse();

	void SwitchModeStrategy(ET4GameplayModeType InChangeModeType); // #40

	IT4PlayerController* GetPlayerController() const;

private:
	ET4LayerType LayerType;

	ET4GameplayModeType ActiveModeType; // #40
	FT4GameplayModeBase* ActiveModeStrategy; // #40
	
	bool bInputControlLocked; // #30
};
