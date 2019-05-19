// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4FRAMEWORK_T4PacketTypes_generated_h
#error "T4PacketTypes.generated.h already included, missing '#pragma once' in T4PacketTypes.h"
#endif
#define T4FRAMEWORK_T4PacketTypes_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Public_Protocol_T4PacketTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4NetID_Statics; \
	T4FRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<struct FT4NetID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Public_Protocol_T4PacketTypes_h


#define FOREACH_ENUM_ET4PACKETSTOC(op) \
	op(ET4PacketStoC::ChangeWorld) \
	op(ET4PacketStoC::MyPCEnter) \
	op(ET4PacketStoC::PCEnter) \
	op(ET4PacketStoC::PCLeave) \
	op(ET4PacketStoC::NPCEnter) \
	op(ET4PacketStoC::NPCLeave) \
	op(ET4PacketStoC::FOEnter) \
	op(ET4PacketStoC::FOLeave) \
	op(ET4PacketStoC::ItemEnter) \
	op(ET4PacketStoC::ItemLeave) \
	op(ET4PacketStoC::MoveTo) \
	op(ET4PacketStoC::JumpTo) \
	op(ET4PacketStoC::TeleportTo) \
	op(ET4PacketStoC::Locked) \
	op(ET4PacketStoC::UnLocked) \
	op(ET4PacketStoC::Equip) \
	op(ET4PacketStoC::UnEquip) \
	op(ET4PacketStoC::Exchange) \
	op(ET4PacketStoC::Attack) \
	op(ET4PacketStoC::Effect) \
	op(ET4PacketStoC::None) 

enum class ET4PacketStoC : uint32;
template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4PacketStoC>();

#define FOREACH_ENUM_ET4PACKETCTOS(op) \
	op(ET4PacketCtoS::MoveWarmup) \
	op(ET4PacketCtoS::JumpWarmup) \
	op(ET4PacketCtoS::Locked) \
	op(ET4PacketCtoS::UnLocked) \
	op(ET4PacketCtoS::Equip) \
	op(ET4PacketCtoS::UnEquip) \
	op(ET4PacketCtoS::Exchange) \
	op(ET4PacketCtoS::Attack) \
	op(ET4PacketCtoS::CmdChangeWorld) \
	op(ET4PacketCtoS::CmdPCEnter) \
	op(ET4PacketCtoS::CmdPCLeave) \
	op(ET4PacketCtoS::CmdNPCEnter) \
	op(ET4PacketCtoS::CmdNPCLeave) \
	op(ET4PacketCtoS::CmdFOEnter) \
	op(ET4PacketCtoS::CmdFOLeave) \
	op(ET4PacketCtoS::CmdItemEnter) \
	op(ET4PacketCtoS::CmdItemLeave) \
	op(ET4PacketCtoS::CmdTeleport) \
	op(ET4PacketCtoS::None) 

enum class ET4PacketCtoS : uint32;
template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4PacketCtoS>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
