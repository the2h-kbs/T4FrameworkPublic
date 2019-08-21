// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4FrameworkGameplay.generated.h"

/**
  *
 */
UENUM()
enum class ET4GameAttackType : uint8 // #63
{
	Melee,
	Ranged,
	Area,

	None,
};

UENUM()
enum class ET4GameEffectType : uint8 // #68
{
	Direct,
	Area,

	None UMETA(Hidden),
};
