// Copyright 2019 SoonBo Noh.s All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  *
 */

// Common

static const FName T4ContiDefaultActionPontName = TEXT("Root"); // #63

// #74 : Entity

static const FName T4EntityDefaultLayerTagName = TEXT("Default");


// #73 : Stance

static const FName T4StanceDefaultStanceName = TEXT("Default");


// #78

static const float T4ObjectWorldEnterTimeSec = 1.0f;
static const float T4ObjectWorldLeaveTimeSec = 1.0f;


// #39 : AnimSet

static const float T4AnimSetLeftStanceValue = 1.0f;
static const float T4AnimSetRightStanceValue = -1.0f;
static const float T4AnimSetUnarmedStanceValue = 0.0f;

static const float T4AnimSetBlendTimeSec = 0.25f;

static const FName T4AnimSetAnimMontageDefaultName = TEXT("Default");
static const FName T4AnimSetAnimMontageAdditiveName = TEXT("Additive");
static const FName T4AnimSetAnimMontageSkillName = TEXT("Skill");
