// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4CORE_T4EntityTypes_generated_h
#error "T4EntityTypes.generated.h already included, missing '#pragma once' in T4EntityTypes.h"
#endif
#define T4CORE_T4EntityTypes_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4EntityTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EntityKey_Statics; \
	T4CORE_API static class UScriptStruct* StaticStruct();


template<> T4CORE_API UScriptStruct* StaticStruct<struct FT4EntityKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4EntityTypes_h


#define FOREACH_ENUM_ET4ENTITYANIMINSTANCETYPE(op) \
	op(ET4EntityAnimInstanceType::None) \
	op(ET4EntityAnimInstanceType::Human) \
	op(ET4EntityAnimInstanceType::Animal) \
	op(ET4EntityAnimInstanceType::Max) 

enum class ET4EntityAnimInstanceType;
template<> T4CORE_API UEnum* StaticEnum<ET4EntityAnimInstanceType>();

#define FOREACH_ENUM_ET4ENTITYPROPTYPE(op) \
	op(ET4EntityPropType::Normal) \
	op(ET4EntityPropType::RigidBody) \
	op(ET4EntityPropType::Prefab) \
	op(ET4EntityPropType::Max) 

enum class ET4EntityPropType : uint8;
template<> T4CORE_API UEnum* StaticEnum<ET4EntityPropType>();

#define FOREACH_ENUM_ET4ENTITYACTORTYPE(op) \
	op(ET4EntityActorType::FullBody) \
	op(ET4EntityActorType::Composite) \
	op(ET4EntityActorType::Max) 

enum class ET4EntityActorType : uint8;
template<> T4CORE_API UEnum* StaticEnum<ET4EntityActorType>();

#define FOREACH_ENUM_ET4ENTITYWORLDTYPE(op) \
	op(ET4EntityWorldType::Normal) \
	op(ET4EntityWorldType::Seamless) \
	op(ET4EntityWorldType::Max) 

enum class ET4EntityWorldType : uint8;
template<> T4CORE_API UEnum* StaticEnum<ET4EntityWorldType>();

#define FOREACH_ENUM_ET4ENTITYMESHTYPE(op) \
	op(ET4EntityMeshType::StaticMesh) \
	op(ET4EntityMeshType::SkeletalMesh) \
	op(ET4EntityMeshType::ParticleSystem) \
	op(ET4EntityMeshType::Max) 

enum class ET4EntityMeshType : uint8;
template<> T4CORE_API UEnum* StaticEnum<ET4EntityMeshType>();

#define FOREACH_ENUM_ET4ENTITYTYPE(op) \
	op(ET4EntityType::World) \
	op(ET4EntityType::Actor) \
	op(ET4EntityType::Prop) \
	op(ET4EntityType::Item) \
	op(ET4EntityType::Costume) \
	op(ET4EntityType::Weapon) \
	op(ET4EntityType::None) 

enum class ET4EntityType : uint8;
template<> T4CORE_API UEnum* StaticEnum<ET4EntityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
