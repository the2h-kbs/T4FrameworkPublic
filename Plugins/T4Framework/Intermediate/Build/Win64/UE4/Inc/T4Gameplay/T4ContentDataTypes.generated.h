// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEPLAY_T4ContentDataTypes_generated_h
#error "T4ContentDataTypes.generated.h already included, missing '#pragma once' in T4ContentDataTypes.h"
#endif
#define T4GAMEPLAY_T4ContentDataTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Data_T4ContentDataTypes_h


#define FOREACH_ENUM_ET4CONTENTTABLETYPE(op) \
	op(ET4ContentTableType::World) \
	op(ET4ContentTableType::Player) \
	op(ET4ContentTableType::NPC) \
	op(ET4ContentTableType::FO) \
	op(ET4ContentTableType::Item) \
	op(ET4ContentTableType::Skill) \
	op(ET4ContentTableType::Effect) \
	op(ET4ContentTableType::Max) 

enum class ET4ContentTableType : uint32;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4ContentTableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
