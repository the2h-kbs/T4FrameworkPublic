// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameplayActionTask.h"

/**
  * #48
 */
class FT4LockOnActionTask : public FT4ActionTask
{
public:
	explicit FT4LockOnActionTask(FT4GameplayModeBase* InGameplayMode);
	~FT4LockOnActionTask();

	bool Start(const float InSyncHeadYawAngle, FString& OutErrorMsg);
	bool End(const float InSyncHeadYawAngle, FString& OutErrorMsg);

protected:
	void Reset() override;
	void Process(float InDeltaTime) override;
};