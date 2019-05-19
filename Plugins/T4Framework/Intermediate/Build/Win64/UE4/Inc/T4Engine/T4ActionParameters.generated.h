// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ENGINE_T4ActionParameters_generated_h
#error "T4ActionParameters.generated.h already included, missing '#pragma once' in T4ActionParameters.h"
#endif
#define T4ENGINE_T4ActionParameters_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Classes_Action_T4ActionParameters_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionParameters>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Classes_Action_T4ActionParameters_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionTargetParameters>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Classes_Action_T4ActionParameters_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionTimeParameters>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Classes_Action_T4ActionParameters_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionDefaultParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Classes_Action_T4ActionParameters_h


#define FOREACH_ENUM_ET4TARGETPARAMBITS(op) \
	op(ET4TargetParamBits::ObjectIDBit) \
	op(ET4TargetParamBits::LocationBit) \
	op(ET4TargetParamBits::DirectionBit) 

enum class ET4TargetParamBits;
template<> T4ENGINE_API UEnum* StaticEnum<ET4TargetParamBits>();

#define FOREACH_ENUM_ET4TIMEPARAMBITS(op) \
	op(ET4TimeParamBits::DurationBit) 

enum class ET4TimeParamBits;
template<> T4ENGINE_API UEnum* StaticEnum<ET4TimeParamBits>();

#define FOREACH_ENUM_ET4DEFAULTPARAMBITS(op) \
	op(ET4DefaultParamBits::ActionKeyBit) 

enum class ET4DefaultParamBits;
template<> T4ENGINE_API UEnum* StaticEnum<ET4DefaultParamBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
