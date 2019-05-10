// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ContentDataTypes.generated.h"

/**
  *
 */
UENUM()
enum class ET4ContentTableType : uint32
{
	World,
	Player,
	NPC,
	FO,
	Item,

	Skill,
	Effect,

	Max,
};