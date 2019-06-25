// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameplayActionTask.h"

/**
  * #48
 */
class FT4RollActionTask : public FT4ActionTask
{
public:
	explicit FT4RollActionTask(ET4LayerType InLayerType);
	~FT4RollActionTask();

protected:
	void Reset() override;
	void Process(float InDeltaTime) override;

	bool Pressed(FString& OutErrorMsg) override;

private:
	void DoRoll();

private:
	float RollHoldTimeLeft;
};