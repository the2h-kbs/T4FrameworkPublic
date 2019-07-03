// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "Public/T4GameplayTypes.h"

/**
  * #40
 */
class FT4ActionTask;
class IT4PlayerController;
class IT4PacketHandlerCS;
class IT4GameFramework;
class FT4GameplayModeBase
{
public:
	explicit FT4GameplayModeBase(ET4LayerType InLayerType);
	virtual ~FT4GameplayModeBase();

	void OnEnter();
	void OnLeave();

	void OnProcess(float InDeltaTime);

	virtual ET4GameplayModeType GetModeType() const = 0;

	bool DoMoveForward(float InAxisValue);
	bool DoMoveRight(float InAxisValue);

	virtual bool DoLockOnPressed();
	virtual bool DoLockOnReleased();

	bool DoJumpPressed();
	bool DoRollPressed(); // #46
	bool DoTeleportPressed();

	bool DoAttackPressed();

	bool DoChangePlayer();
	bool DoLeaveObject();

	bool DoCameraRotatePressed();
	bool DoCameraRotateReleased();

	bool DoCameraZoom(float InAxisValue);
	bool DoCameraPitch(float InAxisValue);
	bool DoCameraYaw(float InAxisValue);

protected:
	friend class FT4ActionTask;

	virtual void Enter() {}
	virtual void Leave() {}

	virtual void Process(float InDeltaTime) {}

	bool CallLockOnStart(const float InSyncHeadYawAngle, FString& OutErrorMsg);
	bool CallLockOnEnd(const float InSyncHeadYawAngle, FString& OutErrorMsg);

	bool IsCameraRotationEnabled() const; // #48
	bool IsLockOnUsed() const { return bLockOnUsed; }
	bool IsMovementLocked() const; // #48

	IT4GameFramework* GetGameFramework() const;
	IT4GameObject* GetPlayerObject() const;
	IT4PlayerController* GetPlayerController() const;
	IT4PacketHandlerCS* GetPacketHandlerCS() const;

protected:
	ET4LayerType LayerType;
	bool bLockOnUsed;
	FVector MovementInputVector;

	// #48
	enum ET4ActionTaskType
	{
		ActionTask_CameraRotate,
		ActionTask_LockOn,
		ActionTask_Jump,
		ActionTask_Roll,
		ActionTask_Teleport,
		ActionTask_Attack,

		ActionTask_Nums
	};

	FT4ActionTask* ActionTasks[ActionTask_Nums];
	// ~#48
};
