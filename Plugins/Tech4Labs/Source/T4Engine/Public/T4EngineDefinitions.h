// Copyright 2019 SoonBo Noh.s All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Asset/Public/T4AssetDefinitions.h" // #62

/**
  *
 */

// Common

static const float DefaultLineTraceMaxDistance = 10000.0f;

#if (WITH_EDITOR || WITH_SERVER_CODE)
// DefaultEngine.ini [/Script/Engine.CollisionProfile]
#define T4COLLISION_GAMEOBJECT		ECC_GameTraceChannel1
#define T4COLLISION_WEAPON			ECC_GameTraceChannel2
#endif

#define T4_INVALID_NAVEXTENT		(FVector::ZeroVector)

// #39 : AnimSet

static const FName T4AnimSetAnimNotifyFootstepName = TEXT("Footstep_C");

static const FName T4AnimSetAnimNotifyLeftFootstepName = TEXT("Footstep_Left");
static const FName T4AnimSetAnimNotifyRightFootstepName = TEXT("Footstep_Right");

static const FName T4AnimSetDefaultSectionIdleAdditiveName = TEXT("IdleAddtive");

static const FName T4AnimSetLocomotionSectionJumpStartName = TEXT("Jump_Start");
static const FName T4AnimSetLocomotionSectionJumpEndName = TEXT("Jump_End");

static const FName T4AnimSetLocomotionSectionStanceUnarmedToLFName = TEXT("Stance_N_LF");
static const FName T4AnimSetLocomotionSectionStanceUnaremdToRFName = TEXT("Stance_N_RF");

static const FName T4AnimSetLocomotionSectionStanceLFToUnaremdName = TEXT("Stance_LF_N");
static const FName T4AnimSetLocomotionSectionStanceRFToUnaremdlName = TEXT("Stance_RF_N");

static const FName T4AnimSetLocomotionSectionStanceLFFromFrontName = TEXT("Stance_LF_F");
static const FName T4AnimSetLocomotionSectionStanceLFFromBackName = TEXT("Stance_LF_B");
static const FName T4AnimSetLocomotionSectionStanceLFFromLeftName = TEXT("Stance_LF_L");
static const FName T4AnimSetLocomotionSectionStanceLFFromRightName = TEXT("Stance_LF_R");

static const FName T4AnimSetLocomotionSectionStanceRFFromFrontName = TEXT("Stance_RF_F");
static const FName T4AnimSetLocomotionSectionStanceRFFromBackName = TEXT("Stance_RF_B");
static const FName T4AnimSetLocomotionSectionStanceRFFromLeftName = TEXT("Stance_RF_L");
static const FName T4AnimSetLocomotionSectionStanceRFFromRightName = TEXT("Stance_RF_R");

static const FName T4AnimSetLocomotionSectionTurnLFToLeft90Name = TEXT("Turn_LF_L90"); // #44
static const FName T4AnimSetLocomotionSectionTurnLFToRight90Name = TEXT("Turn_LF_R90"); // #44
static const FName T4AnimSetLocomotionSectionTurnLFToRight180Name = TEXT("Turn_LF_R180"); // #44

static const FName T4AnimSetLocomotionSectionTurnRFToLeft90Name = TEXT("Turn_RF_L90"); // #44
static const FName T4AnimSetLocomotionSectionTurnRFToRight90Name = TEXT("Turn_RF_R90"); // #44
static const FName T4AnimSetLocomotionSectionTurnRFToLeft180Name = TEXT("Turn_RF_L180"); // #44

static const FName T4AnimSetLocomotionSectionRollFrontName = TEXT("Roll_F"); // #46
static const FName T4AnimSetLocomotionSectionRollBackName = TEXT("Roll_B"); // #46
static const FName T4AnimSetLocomotionSectionRollLeftName = TEXT("Roll_L"); // #46
static const FName T4AnimSetLocomotionSectionRollRightName = TEXT("Roll_R"); // #46
static const FName T4AnimSetLocomotionSectionRollFrontLeftName = TEXT("Roll_FL"); // #46
static const FName T4AnimSetLocomotionSectionRollFrontRightName = TEXT("Roll_FR"); // #46
static const FName T4AnimSetLocomotionSectionRollBackLeftName = TEXT("Roll_BL"); // #46
static const FName T4AnimSetLocomotionSectionRollBackRightName = TEXT("Roll_BR"); // #46


// #47 : AnimState

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
