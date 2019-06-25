// Copyright 2019 Tech4 Labs, Inc.s All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #39
 */
static const float T4AnimSetBlendInTimeSec = 0.25f;
static const float T4AnimSetBlendOutTimeSec = 0.25f;

static const float T4AnimSetLeftStanceValue = 1.0f;
static const float T4AnimSetRightStanceValue = -1.0f;
static const float T4AnimSetUnarmedStanceValue = 0.0f;

static const FName T4AnimSetAnimNotifyFootstepName = TEXT("Footstep_C");

static const FName T4AnimSetAnimNotifyLeftFootstepName = TEXT("Footstep_Left");
static const FName T4AnimSetAnimNotifyRightFootstepName = TEXT("Footstep_Right");

static const FName T4AnimSetAnimMontageDefaultName = TEXT("Default");
static const FName T4AnimSetAnimMontageLocomotionName = TEXT("Locomotion");
static const FName T4AnimSetAnimMontageSkillName = TEXT("Skill");

static const FName T4AnimSetSkillGroupName = FName(TEXT("SkillGroup")); // #48

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
