// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayCameraRotateTask.h"

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
FT4CameraRotateActionTask::FT4CameraRotateActionTask(FT4GameplayModeBase* InGameplayMode)
	: FT4ActionTask(InGameplayMode)
	, bCameraRotateHoldStart(false)
	, CameraRotateHoldTimeLeft(0.0f)
{
}

FT4CameraRotateActionTask::~FT4CameraRotateActionTask()
{
}

void FT4CameraRotateActionTask::Reset()
{
	bCameraRotateHoldStart = false;
	CameraRotateHoldTimeLeft = 0.0f;
}

void FT4CameraRotateActionTask::Process(float InDeltaTime)
{
	if (!bCameraRotateHoldStart)
	{
		return;
	}
	// #11 : CTRL + 마우스 우클릭으로 Player 교체 처리를 위해 딜레이를 줌!
	CameraRotateHoldTimeLeft -= InDeltaTime;
	if (0.0f >= CameraRotateHoldTimeLeft)
	{
		SetMouseCursor(false);
		SetMouseMoveLock(true);
		bPressed = true;
		bCameraRotateHoldStart = false;
	}
}

bool FT4CameraRotateActionTask::Pressed(FString& OutErrorMsg)
{
	const UT4EngineSettings* EngineSettings = GetDefault<UT4EngineSettings>();
	check(nullptr != EngineSettings);
	CameraRotateHoldTimeLeft = EngineSettings->CameraRotateHoldTimeSec;
	bCameraRotateHoldStart = true;
	return true;
}

void FT4CameraRotateActionTask::Released()
{
	bCameraRotateHoldStart = false;
	if (!bPressed)
	{
		return;
	}
	SetMouseCursor(true);
	SetMouseMoveLock(false);
	bPressed = false;
}

void FT4CameraRotateActionTask::SetMouseCursor(bool bShow)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->ShowMouseCursor(bShow);
}

void FT4CameraRotateActionTask::SetMouseMoveLock(bool bLock)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	PlayerController->SetCameraLock(bLock);
}