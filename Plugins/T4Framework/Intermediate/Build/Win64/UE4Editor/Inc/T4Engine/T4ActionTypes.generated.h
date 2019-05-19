// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ENGINE_T4ActionTypes_generated_h
#error "T4ActionTypes.generated.h already included, missing '#pragma once' in T4ActionTypes.h"
#endif
#define T4ENGINE_T4ActionTypes_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Classes_Action_T4ActionTypes_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionKey_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Classes_Action_T4ActionTypes_h


#define FOREACH_ENUM_ET4EDITORDIRTYTYPE(op) \
	op(ET4EditorDirtyType::All) \
	op(ET4EditorDirtyType::Attribute) \
	op(ET4EditorDirtyType::Data) \
	op(ET4EditorDirtyType::None) 

enum class ET4EditorDirtyType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4EditorDirtyType>();

#define FOREACH_ENUM_ET4ROTATIONTYPE(op) \
	op(ET4RotationType::Current) \
	op(ET4RotationType::Location) \
	op(ET4RotationType::Direction) \
	op(ET4RotationType::TargetObject) \
	op(ET4RotationType::Default) 

enum class ET4RotationType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4RotationType>();

#define FOREACH_ENUM_ET4MOVETYPE(op) \
	op(ET4MoveType::Sync) \
	op(ET4MoveType::Async) \
	op(ET4MoveType::Count) 

enum class ET4MoveType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4MoveType>();

#define FOREACH_ENUM_ET4LIFECYCLEPOLICY(op) \
	op(ET4LifecyclePolicy::Duration) \
	op(ET4LifecyclePolicy::Looping) \
	op(ET4LifecyclePolicy::Default) 

enum class ET4LifecyclePolicy : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4LifecyclePolicy>();

#define FOREACH_ENUM_ET4ACTIONTYPE(op) \
	op(ET4ActionType::Root) \
	op(ET4ActionType::ChangeWorld) \
	op(ET4ActionType::ChangePlayer) \
	op(ET4ActionType::ObjectEnter) \
	op(ET4ActionType::ObjectLeave) \
	op(ET4ActionType::Possess) \
	op(ET4ActionType::MoveTo) \
	op(ET4ActionType::JumpTo) \
	op(ET4ActionType::TeleportTo) \
	op(ET4ActionType::EquipWeapon) \
	op(ET4ActionType::ExchangeCostume) \
	op(ET4ActionType::LockOn) \
	op(ET4ActionType::MoveSpeed) \
	op(ET4ActionType::Rotation) \
	op(ET4ActionType::Animation) \
	op(ET4ActionType::Particle) \
	op(ET4ActionType::Conti) \
	op(ET4ActionType::Stop) \
	op(ET4ActionType::EditorDirty) \
	op(ET4ActionType::None) 

enum class ET4ActionType : uint32;
template<> T4ENGINE_API UEnum* StaticEnum<ET4ActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
