// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameplayActionTask.h"

/**
  * #48
 */
class FT4ComboAttackActionTask : public FT4ActionTask
{
public:
	explicit FT4ComboAttackActionTask(FT4GameplayModeBase* InGameplayMode);
	~FT4ComboAttackActionTask();

protected:
	void Reset() override;
	void Process(float InDeltaTime) override;

	bool Pressed(FString& OutErrorMsg) override;

private:
	FT4GameDataID GetMainWeaponDataID();

private:
	bool bPendingComboAttack;
	float ComboAttackPendingClearTimeLeft;
	ET4ComboAttackSeqeunce ComboAttackSelected;
	float ComboAttackPlayTimeLeft;
};