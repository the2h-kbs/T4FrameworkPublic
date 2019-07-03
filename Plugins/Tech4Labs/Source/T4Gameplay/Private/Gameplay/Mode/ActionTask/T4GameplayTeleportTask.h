// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameplayActionTask.h"

/**
  * #48
 */
class FT4TeleportActionTask : public FT4ActionTask
{
public:
	explicit FT4TeleportActionTask(FT4GameplayModeBase* InGameplayMode);
	~FT4TeleportActionTask();

protected:
	void Reset() override;
	void Process(float InDeltaTime) override;

	bool Pressed(FString& OutErrorMsg) override;
};