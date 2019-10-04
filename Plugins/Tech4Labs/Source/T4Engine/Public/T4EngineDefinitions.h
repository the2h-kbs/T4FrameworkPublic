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

// #78 : Material Parameter

static const FName T4MaterialParameterOpacityParamName = TEXT("T4OpacityParam"); // #78


// #39 : AnimSet

static const FName T4AnimSetAnimNotifyFootstepName = TEXT("Footstep_C");

static const FName T4AnimSetAnimNotifyLeftFootstepName = TEXT("Footstep_Left");
static const FName T4AnimSetAnimNotifyRightFootstepName = TEXT("Footstep_Right");

static const FName T4AnimSetAdditiveSectionIdleName = TEXT("IdleAdditive");

static const FName T4AnimSetDefaultSectionJumpStartName = TEXT("Jump_Start");
static const FName T4AnimSetDefaultSectionJumpEndName = TEXT("Jump_End");

static const FName T4AnimSetDefaultSectionStanceUnarmedToLFName = TEXT("Stance_N_LF");
static const FName T4AnimSetDefaultSectionStanceUnaremdToRFName = TEXT("Stance_N_RF");

static const FName T4AnimSetDefaultSectionStanceLFToUnaremdName = TEXT("Stance_LF_N");
static const FName T4AnimSetDefaultSectionStanceRFToUnaremdlName = TEXT("Stance_RF_N");

static const FName T4AnimSetDefaultSectionStanceLFFromFrontName = TEXT("Stance_LF_F");
static const FName T4AnimSetDefaultSectionStanceLFFromBackName = TEXT("Stance_LF_B");
static const FName T4AnimSetDefaultSectionStanceLFFromLeftName = TEXT("Stance_LF_L");
static const FName T4AnimSetDefaultSectionStanceLFFromRightName = TEXT("Stance_LF_R");

static const FName T4AnimSetDefaultSectionStanceRFFromFrontName = TEXT("Stance_RF_F");
static const FName T4AnimSetDefaultSectionStanceRFFromBackName = TEXT("Stance_RF_B");
static const FName T4AnimSetDefaultSectionStanceRFFromLeftName = TEXT("Stance_RF_L");
static const FName T4AnimSetDefaultSectionStanceRFFromRightName = TEXT("Stance_RF_R");

static const FName T4AnimSetDefaultSectionTurnLFToLeft90Name = TEXT("Turn_LF_L90"); // #44
static const FName T4AnimSetDefaultSectionTurnLFToRight90Name = TEXT("Turn_LF_R90"); // #44
static const FName T4AnimSetDefaultSectionTurnLFToRight180Name = TEXT("Turn_LF_R180"); // #44

static const FName T4AnimSetDefaultSectionTurnRFToLeft90Name = TEXT("Turn_RF_L90"); // #44
static const FName T4AnimSetDefaultSectionTurnRFToRight90Name = TEXT("Turn_RF_R90"); // #44
static const FName T4AnimSetDefaultSectionTurnRFToLeft180Name = TEXT("Turn_RF_L180"); // #44

static const FName T4AnimSetDefaultSectionRollFrontName = TEXT("Roll_F"); // #46
static const FName T4AnimSetDefaultSectionRollBackName = TEXT("Roll_B"); // #46
static const FName T4AnimSetDefaultSectionRollLeftName = TEXT("Roll_L"); // #46
static const FName T4AnimSetDefaultSectionRollRightName = TEXT("Roll_R"); // #46
static const FName T4AnimSetDefaultSectionRollFrontLeftName = TEXT("Roll_FL"); // #46
static const FName T4AnimSetDefaultSectionRollFrontRightName = TEXT("Roll_FR"); // #46
static const FName T4AnimSetDefaultSectionRollBackLeftName = TEXT("Roll_BL"); // #46
static const FName T4AnimSetDefaultSectionRollBackRightName = TEXT("Roll_BR"); // #46


// #47 : AnimState

static const FName T4AnimStateEmptyName = TEXT("T4EmptyState");
static const FName T4AnimStateErrorName = TEXT("T4ErrorState");

static const FName T4AnimStateHumanJumpingName = TEXT("T4JumpingState");
static const FName T4AnimStateHumanRollingName = TEXT("T4RollingState"); // #46

static const FName T4AnimStateHumanVoidName = TEXT("T4VoidState"); // #76

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
