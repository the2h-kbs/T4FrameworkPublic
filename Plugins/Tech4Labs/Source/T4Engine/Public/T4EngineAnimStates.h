// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #47
 */
static const FName T4AnimStateEmptyName = TEXT("T4EmptyState");
static const FName T4AnimStateErrorName = TEXT("T4ErrorState");

static const FName T4AnimStateHumanJumpingName = TEXT("T4JumpingState");
static const FName T4AnimStateHumanRollingName = TEXT("T4RollingState"); // #46

static const FName T4AnimStateHumanBasicCombatStanceName = TEXT("T4CombatStanceState"); // #48
static const FName T4AnimStateHumanBasicUnarmedStanceName = TEXT("T4UnarmedStanceState"); // #48
static const FName T4AnimStateHumanBasicRunningName = TEXT("T4RunningState"); // #48

static const FName T4AnimStateHumanLocomotionCombatLFStanceName = TEXT("T4CombatLFStanceState");
static const FName T4AnimStateHumanLocomotionCombatRFStanceName = TEXT("T4CombatRFStanceState");
static const FName T4AnimStateHumanLocomotionUnarmedStanceName = TEXT("T4UnarmedStanceState");
static const FName T4AnimStateHumanLocomotionTurningName = TEXT("T4TurningState"); // #44
static const FName T4AnimStateHumanLocomotionRunStartName = TEXT("T4RunStartState");
static const FName T4AnimStateHumanLocomotionRunStopName = TEXT("T4RunStopState");
static const FName T4AnimStateHumanLocomotionRunningName = TEXT("T4RunningState");
