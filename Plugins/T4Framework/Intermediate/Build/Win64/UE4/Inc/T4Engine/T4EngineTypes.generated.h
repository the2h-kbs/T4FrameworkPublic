// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ENGINE_T4EngineTypes_generated_h
#error "T4EngineTypes.generated.h already included, missing '#pragma once' in T4EngineTypes.h"
#endif
#define T4ENGINE_T4EngineTypes_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Public_T4EngineTypes_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ObjectID_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ObjectID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Public_T4EngineTypes_h


#define FOREACH_ENUM_ET4COLLISIONCHANNEL(op) \
	op(ET4CollisionChannel::WorldStatic) \
	op(ET4CollisionChannel::SpawnObject) \
	op(ET4CollisionChannel::CollisionVisibility) \
	op(ET4CollisionChannel::Max) 

enum class ET4CollisionChannel : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4CollisionChannel>();

#define FOREACH_ENUM_ET4ANIMMONTAGELAYER(op) \
	op(ET4AnimMontageLayer::Movement) \
	op(ET4AnimMontageLayer::Skill) \
	op(ET4AnimMontageLayer::Max) 

enum class ET4AnimMontageLayer;
template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimMontageLayer>();

#define FOREACH_ENUM_ET4CONTROLLERTYPE(op) \
	op(ET4ControllerType::Player) \
	op(ET4ControllerType::NPCAI) \
	op(ET4ControllerType::All) 

enum class ET4ControllerType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4ControllerType>();

#define FOREACH_ENUM_ET4OBJECTTYPE(op) \
	op(ET4ObjectType::NullObject) \
	op(ET4ObjectType::GameObject) \
	op(ET4ObjectType::Max) 

enum class ET4ObjectType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4ObjectType>();

#define FOREACH_ENUM_ET4WORLDTYPE(op) \
	op(ET4WorldType::Null) \
	op(ET4WorldType::Client) \
	op(ET4WorldType::Server) \
	op(ET4WorldType::Max) 

enum class ET4WorldType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4WorldType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
