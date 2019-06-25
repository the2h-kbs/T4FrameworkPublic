// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameplayActionTask.h"

/**
  * #48
 */
class FT4JumpActionTask : public FT4ActionTask
{
public:
	explicit FT4JumpActionTask(ET4LayerType InLayerType);
	~FT4JumpActionTask();

protected:
	void Reset() override;
	void Process(float InDeltaTime) override;

	bool Pressed(FString& OutErrorMsg) override;

private:
	void DoJump();

private:
	bool bDoublePressed;
	float JumpHoldTimeLeft;
};