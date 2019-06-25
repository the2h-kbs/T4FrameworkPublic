// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameplayActionTask.h"

/**
  * #48
 */
class FT4CameraRotateActionTask : public FT4ActionTask
{
public:
	explicit FT4CameraRotateActionTask(ET4LayerType InLayerType);
	~FT4CameraRotateActionTask();

protected:
	void Reset() override;
	void Process(float InDeltaTime) override;
	
	bool Pressed(FString& OutErrorMsg) override;
	void Released() override;

private:
	void SetMouseCursor(bool bShow);
	void SetMouseMoveLock(bool bLock);

private:
	bool bCameraRotateHoldStart;
	float CameraRotateHoldTimeLeft;
};