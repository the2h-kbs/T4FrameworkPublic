// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "T4GameplayControl.generated.h"

/**
  * https://www.unrealengine.com/ko/blog/input-action-and-axis-mappings-in-ue4
 */
class IT4PlayerController;
class IT4PacketHandlerCS;
class IT4GameObject;

UCLASS()
class UT4GameplayControl : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void Setup(ET4LayerType InLayerType);

	void Process(float InDeltaTime);

	ET4LayerType GetLayerType() const { return LayerType; }

	void OnMoveForward(float InAxisValue);
	void OnMoveRight(float InAxisValue);

	void OnJumpPressed();

	void OnTeleportPressed();

	void OnAttackPressed();
	
	void OnChangePlayer();
	void OnEnterPlayer();
	void OnEnterNPC(); // #31
	void OnLeaveObject();

	void OnEquipWeaponPressed(); // #22

	void OnLockOnPressed();
	void OnLockOnReleased();

	void OnCameraRotatePressed();
	void OnCameraRotateReleased();

	void OnCameraZoom(float InAxisValue);
	void OnCameraPitch(float InAxisValue);
	void OnCameraYaw(float InAxisValue);

	void SetInputControlLock(bool bLock) { bInputControlLocked = bLock; } // #30

private:
	void SetupInput();
	void SetupMouse();

	void SetMouseCursor(bool bShow);
	void SetMouseMoveLock(bool bLock);

	IT4PlayerController* GetPlayerController() const;
	IT4PacketHandlerCS* GetPacketHandlerCS() const;

private:
	ET4LayerType LayerType;

	FVector ControlInputVector;

	float CameraRotateDelayLeftTimeSec;
	bool bCameraRotateReady;
	bool bCameraRotatePressed;
	
	bool bInputControlLocked; // #30
};
