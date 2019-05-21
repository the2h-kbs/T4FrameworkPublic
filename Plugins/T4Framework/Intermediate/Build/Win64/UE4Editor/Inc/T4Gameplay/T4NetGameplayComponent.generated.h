// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FT4PacketEffectSC;
struct FT4PacketAttackSC;
struct FT4PacketExchangeSC;
struct FT4PacketUnEquipSC;
struct FT4PacketEquipSC;
struct FT4PacketUnLockedSC;
struct FT4PacketLockedSC;
struct FT4PacketTeleportToSC;
struct FT4PacketJumpToSC;
struct FT4PacketMoveToSC;
struct FT4PacketItemLeaveSC;
struct FT4PacketItemEnterSC;
struct FT4PacketFOLeaveSC;
struct FT4PacketFOEnterSC;
struct FT4PacketNPCLeaveSC;
struct FT4PacketNPCEnterSC;
struct FT4PacketPCLeaveSC;
struct FT4PacketPCEnterSC;
struct FT4PacketMyPCEnterSC;
struct FT4PacketChangeWorldSC;
struct FT4PacketCmdTeleportCS;
struct FT4PacketCmdItemLeaveCS;
struct FT4PacketCmdItemEnterCS;
struct FT4PacketCmdFOLeaveCS;
struct FT4PacketCmdFOEnterCS;
struct FT4PacketCmdNPCLeaveCS;
struct FT4PacketCmdNPCEnterCS;
struct FT4PacketCmdPCLeaveCS;
struct FT4PacketCmdPCEnterCS;
struct FT4PacketCmdChangeWorldCS;
struct FT4PacketAttackCS;
struct FT4PacketExchangeCS;
struct FT4PacketUnEquipCS;
struct FT4PacketEquipCS;
struct FT4PacketUnLockedCS;
struct FT4PacketLockedCS;
struct FT4PacketJumpWarmupCS;
struct FT4PacketMoveWarmupCS;
#ifdef T4GAMEPLAY_T4NetGameplayComponent_generated_h
#error "T4NetGameplayComponent.generated.h already included, missing '#pragma once' in T4NetGameplayComponent.h"
#endif
#define T4GAMEPLAY_T4NetGameplayComponent_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_RPC_WRAPPERS \
	virtual void SC_RecvPacket_Effect_Implementation(FT4PacketEffectSC const& InPacket); \
	virtual void SC_RecvPacket_Attack_Implementation(FT4PacketAttackSC const& InPacket); \
	virtual void SC_RecvPacket_Exchange_Implementation(FT4PacketExchangeSC const& InPacket); \
	virtual void SC_RecvPacket_UnEquip_Implementation(FT4PacketUnEquipSC const& InPacket); \
	virtual void SC_RecvPacket_Equip_Implementation(FT4PacketEquipSC const& InPacket); \
	virtual void SC_RecvPacket_UnLocked_Implementation(FT4PacketUnLockedSC const& InPacket); \
	virtual void SC_RecvPacket_Locked_Implementation(FT4PacketLockedSC const& InPacket); \
	virtual void SC_RecvPacket_TeleportTo_Implementation(FT4PacketTeleportToSC const& InPacket); \
	virtual void SC_RecvPacket_JumpTo_Implementation(FT4PacketJumpToSC const& InPacket); \
	virtual void SC_RecvPacket_MoveTo_Implementation(FT4PacketMoveToSC const& InPacket); \
	virtual void SC_RecvPacket_ItemLeave_Implementation(FT4PacketItemLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_ItemEnter_Implementation(FT4PacketItemEnterSC const& InPacket); \
	virtual void SC_RecvPacket_FOLeave_Implementation(FT4PacketFOLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_FOEnter_Implementation(FT4PacketFOEnterSC const& InPacket); \
	virtual void SC_RecvPacket_NPCLeave_Implementation(FT4PacketNPCLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_NPCEnter_Implementation(FT4PacketNPCEnterSC const& InPacket); \
	virtual void SC_RecvPacket_PCLeave_Implementation(FT4PacketPCLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_PCEnter_Implementation(FT4PacketPCEnterSC const& InPacket); \
	virtual void SC_RecvPacket_MyPCEnter_Implementation(FT4PacketMyPCEnterSC const& InPacket); \
	virtual void SC_RecvPacket_ChangeWorld_Implementation(FT4PacketChangeWorldSC const& InPacket); \
	virtual bool CS_RecvPacket_CmdTeleport_Validate(FT4PacketCmdTeleportCS const& ); \
	virtual void CS_RecvPacket_CmdTeleport_Implementation(FT4PacketCmdTeleportCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdItemLeave_Validate(FT4PacketCmdItemLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdItemLeave_Implementation(FT4PacketCmdItemLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdItemEnter_Validate(FT4PacketCmdItemEnterCS const& ); \
	virtual void CS_RecvPacket_CmdItemEnter_Implementation(FT4PacketCmdItemEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdFOLeave_Validate(FT4PacketCmdFOLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdFOLeave_Implementation(FT4PacketCmdFOLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdFOEnter_Validate(FT4PacketCmdFOEnterCS const& ); \
	virtual void CS_RecvPacket_CmdFOEnter_Implementation(FT4PacketCmdFOEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdNPCLeave_Validate(FT4PacketCmdNPCLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdNPCLeave_Implementation(FT4PacketCmdNPCLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdNPCEnter_Validate(FT4PacketCmdNPCEnterCS const& ); \
	virtual void CS_RecvPacket_CmdNPCEnter_Implementation(FT4PacketCmdNPCEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdPCLeave_Validate(FT4PacketCmdPCLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdPCLeave_Implementation(FT4PacketCmdPCLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdPCEnter_Validate(FT4PacketCmdPCEnterCS const& ); \
	virtual void CS_RecvPacket_CmdPCEnter_Implementation(FT4PacketCmdPCEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdChangeWorld_Validate(FT4PacketCmdChangeWorldCS const& ); \
	virtual void CS_RecvPacket_CmdChangeWorld_Implementation(FT4PacketCmdChangeWorldCS const& InPacket); \
	virtual bool CS_RecvPacket_Attack_Validate(FT4PacketAttackCS const& ); \
	virtual void CS_RecvPacket_Attack_Implementation(FT4PacketAttackCS const& InPacket); \
	virtual bool CS_RecvPacket_Exchange_Validate(FT4PacketExchangeCS const& ); \
	virtual void CS_RecvPacket_Exchange_Implementation(FT4PacketExchangeCS const& InPacket); \
	virtual bool CS_RecvPacket_UnEquip_Validate(FT4PacketUnEquipCS const& ); \
	virtual void CS_RecvPacket_UnEquip_Implementation(FT4PacketUnEquipCS const& InPacket); \
	virtual bool CS_RecvPacket_Equip_Validate(FT4PacketEquipCS const& ); \
	virtual void CS_RecvPacket_Equip_Implementation(FT4PacketEquipCS const& InPacket); \
	virtual bool CS_RecvPacket_UnLocked_Validate(FT4PacketUnLockedCS const& ); \
	virtual void CS_RecvPacket_UnLocked_Implementation(FT4PacketUnLockedCS const& InPacket); \
	virtual bool CS_RecvPacket_Locked_Validate(FT4PacketLockedCS const& ); \
	virtual void CS_RecvPacket_Locked_Implementation(FT4PacketLockedCS const& InPacket); \
	virtual bool CS_RecvPacket_JumpWarmup_Validate(FT4PacketJumpWarmupCS const& ); \
	virtual void CS_RecvPacket_JumpWarmup_Implementation(FT4PacketJumpWarmupCS const& InPacket); \
	virtual bool CS_RecvPacket_MoveWarmup_Validate(FT4PacketMoveWarmupCS const& ); \
	virtual void CS_RecvPacket_MoveWarmup_Implementation(FT4PacketMoveWarmupCS const& InPacket); \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Effect) \
	{ \
		P_GET_STRUCT(FT4PacketEffectSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Effect_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Attack) \
	{ \
		P_GET_STRUCT(FT4PacketAttackSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Attack_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Exchange) \
	{ \
		P_GET_STRUCT(FT4PacketExchangeSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Exchange_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_UnEquip) \
	{ \
		P_GET_STRUCT(FT4PacketUnEquipSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_UnEquip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Equip) \
	{ \
		P_GET_STRUCT(FT4PacketEquipSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Equip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_UnLocked) \
	{ \
		P_GET_STRUCT(FT4PacketUnLockedSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_UnLocked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Locked) \
	{ \
		P_GET_STRUCT(FT4PacketLockedSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Locked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_TeleportTo) \
	{ \
		P_GET_STRUCT(FT4PacketTeleportToSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_TeleportTo_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_JumpTo) \
	{ \
		P_GET_STRUCT(FT4PacketJumpToSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_JumpTo_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveTo) \
	{ \
		P_GET_STRUCT(FT4PacketMoveToSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_MoveTo_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemLeave) \
	{ \
		P_GET_STRUCT(FT4PacketItemLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_ItemLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemEnter) \
	{ \
		P_GET_STRUCT(FT4PacketItemEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_ItemEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_FOLeave) \
	{ \
		P_GET_STRUCT(FT4PacketFOLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_FOLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_FOEnter) \
	{ \
		P_GET_STRUCT(FT4PacketFOEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_FOEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketNPCLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_NPCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketNPCEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_NPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_PCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketPCLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_PCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_PCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketPCEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_PCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_MyPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketMyPCEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_MyPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_ChangeWorld) \
	{ \
		P_GET_STRUCT(FT4PacketChangeWorldSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_ChangeWorld_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdTeleport) \
	{ \
		P_GET_STRUCT(FT4PacketCmdTeleportCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdTeleport_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdTeleport_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdTeleport_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdItemLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdItemLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdItemLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdItemLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdItemLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdItemEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdItemEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdItemEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdItemEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdItemEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdFOLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdFOLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdFOLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdFOLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdFOLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdFOEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdFOEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdFOEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdFOEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdFOEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdNPCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdNPCLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdNPCLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdNPCLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdNPCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdNPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdNPCEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdNPCEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdNPCEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdNPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdPCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdPCLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdPCLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdPCLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdPCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdPCEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdPCEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdPCEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdChangeWorld) \
	{ \
		P_GET_STRUCT(FT4PacketCmdChangeWorldCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdChangeWorld_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdChangeWorld_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdChangeWorld_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Attack) \
	{ \
		P_GET_STRUCT(FT4PacketAttackCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Attack_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Attack_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Attack_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Exchange) \
	{ \
		P_GET_STRUCT(FT4PacketExchangeCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Exchange_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Exchange_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Exchange_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_UnEquip) \
	{ \
		P_GET_STRUCT(FT4PacketUnEquipCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_UnEquip_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_UnEquip_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_UnEquip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Equip) \
	{ \
		P_GET_STRUCT(FT4PacketEquipCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Equip_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Equip_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Equip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_UnLocked) \
	{ \
		P_GET_STRUCT(FT4PacketUnLockedCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_UnLocked_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_UnLocked_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_UnLocked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Locked) \
	{ \
		P_GET_STRUCT(FT4PacketLockedCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Locked_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Locked_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Locked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_JumpWarmup) \
	{ \
		P_GET_STRUCT(FT4PacketJumpWarmupCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_JumpWarmup_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_JumpWarmup_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_JumpWarmup_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_MoveWarmup) \
	{ \
		P_GET_STRUCT(FT4PacketMoveWarmupCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_MoveWarmup_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_MoveWarmup_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_MoveWarmup_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SC_RecvPacket_Effect_Implementation(FT4PacketEffectSC const& InPacket); \
	virtual void SC_RecvPacket_Attack_Implementation(FT4PacketAttackSC const& InPacket); \
	virtual void SC_RecvPacket_Exchange_Implementation(FT4PacketExchangeSC const& InPacket); \
	virtual void SC_RecvPacket_UnEquip_Implementation(FT4PacketUnEquipSC const& InPacket); \
	virtual void SC_RecvPacket_Equip_Implementation(FT4PacketEquipSC const& InPacket); \
	virtual void SC_RecvPacket_UnLocked_Implementation(FT4PacketUnLockedSC const& InPacket); \
	virtual void SC_RecvPacket_Locked_Implementation(FT4PacketLockedSC const& InPacket); \
	virtual void SC_RecvPacket_TeleportTo_Implementation(FT4PacketTeleportToSC const& InPacket); \
	virtual void SC_RecvPacket_JumpTo_Implementation(FT4PacketJumpToSC const& InPacket); \
	virtual void SC_RecvPacket_MoveTo_Implementation(FT4PacketMoveToSC const& InPacket); \
	virtual void SC_RecvPacket_ItemLeave_Implementation(FT4PacketItemLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_ItemEnter_Implementation(FT4PacketItemEnterSC const& InPacket); \
	virtual void SC_RecvPacket_FOLeave_Implementation(FT4PacketFOLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_FOEnter_Implementation(FT4PacketFOEnterSC const& InPacket); \
	virtual void SC_RecvPacket_NPCLeave_Implementation(FT4PacketNPCLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_NPCEnter_Implementation(FT4PacketNPCEnterSC const& InPacket); \
	virtual void SC_RecvPacket_PCLeave_Implementation(FT4PacketPCLeaveSC const& InPacket); \
	virtual void SC_RecvPacket_PCEnter_Implementation(FT4PacketPCEnterSC const& InPacket); \
	virtual void SC_RecvPacket_MyPCEnter_Implementation(FT4PacketMyPCEnterSC const& InPacket); \
	virtual void SC_RecvPacket_ChangeWorld_Implementation(FT4PacketChangeWorldSC const& InPacket); \
	virtual bool CS_RecvPacket_CmdTeleport_Validate(FT4PacketCmdTeleportCS const& ); \
	virtual void CS_RecvPacket_CmdTeleport_Implementation(FT4PacketCmdTeleportCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdItemLeave_Validate(FT4PacketCmdItemLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdItemLeave_Implementation(FT4PacketCmdItemLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdItemEnter_Validate(FT4PacketCmdItemEnterCS const& ); \
	virtual void CS_RecvPacket_CmdItemEnter_Implementation(FT4PacketCmdItemEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdFOLeave_Validate(FT4PacketCmdFOLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdFOLeave_Implementation(FT4PacketCmdFOLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdFOEnter_Validate(FT4PacketCmdFOEnterCS const& ); \
	virtual void CS_RecvPacket_CmdFOEnter_Implementation(FT4PacketCmdFOEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdNPCLeave_Validate(FT4PacketCmdNPCLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdNPCLeave_Implementation(FT4PacketCmdNPCLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdNPCEnter_Validate(FT4PacketCmdNPCEnterCS const& ); \
	virtual void CS_RecvPacket_CmdNPCEnter_Implementation(FT4PacketCmdNPCEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdPCLeave_Validate(FT4PacketCmdPCLeaveCS const& ); \
	virtual void CS_RecvPacket_CmdPCLeave_Implementation(FT4PacketCmdPCLeaveCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdPCEnter_Validate(FT4PacketCmdPCEnterCS const& ); \
	virtual void CS_RecvPacket_CmdPCEnter_Implementation(FT4PacketCmdPCEnterCS const& InPacket); \
	virtual bool CS_RecvPacket_CmdChangeWorld_Validate(FT4PacketCmdChangeWorldCS const& ); \
	virtual void CS_RecvPacket_CmdChangeWorld_Implementation(FT4PacketCmdChangeWorldCS const& InPacket); \
	virtual bool CS_RecvPacket_Attack_Validate(FT4PacketAttackCS const& ); \
	virtual void CS_RecvPacket_Attack_Implementation(FT4PacketAttackCS const& InPacket); \
	virtual bool CS_RecvPacket_Exchange_Validate(FT4PacketExchangeCS const& ); \
	virtual void CS_RecvPacket_Exchange_Implementation(FT4PacketExchangeCS const& InPacket); \
	virtual bool CS_RecvPacket_UnEquip_Validate(FT4PacketUnEquipCS const& ); \
	virtual void CS_RecvPacket_UnEquip_Implementation(FT4PacketUnEquipCS const& InPacket); \
	virtual bool CS_RecvPacket_Equip_Validate(FT4PacketEquipCS const& ); \
	virtual void CS_RecvPacket_Equip_Implementation(FT4PacketEquipCS const& InPacket); \
	virtual bool CS_RecvPacket_UnLocked_Validate(FT4PacketUnLockedCS const& ); \
	virtual void CS_RecvPacket_UnLocked_Implementation(FT4PacketUnLockedCS const& InPacket); \
	virtual bool CS_RecvPacket_Locked_Validate(FT4PacketLockedCS const& ); \
	virtual void CS_RecvPacket_Locked_Implementation(FT4PacketLockedCS const& InPacket); \
	virtual bool CS_RecvPacket_JumpWarmup_Validate(FT4PacketJumpWarmupCS const& ); \
	virtual void CS_RecvPacket_JumpWarmup_Implementation(FT4PacketJumpWarmupCS const& InPacket); \
	virtual bool CS_RecvPacket_MoveWarmup_Validate(FT4PacketMoveWarmupCS const& ); \
	virtual void CS_RecvPacket_MoveWarmup_Implementation(FT4PacketMoveWarmupCS const& InPacket); \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Effect) \
	{ \
		P_GET_STRUCT(FT4PacketEffectSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Effect_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Attack) \
	{ \
		P_GET_STRUCT(FT4PacketAttackSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Attack_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Exchange) \
	{ \
		P_GET_STRUCT(FT4PacketExchangeSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Exchange_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_UnEquip) \
	{ \
		P_GET_STRUCT(FT4PacketUnEquipSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_UnEquip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Equip) \
	{ \
		P_GET_STRUCT(FT4PacketEquipSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Equip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_UnLocked) \
	{ \
		P_GET_STRUCT(FT4PacketUnLockedSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_UnLocked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_Locked) \
	{ \
		P_GET_STRUCT(FT4PacketLockedSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_Locked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_TeleportTo) \
	{ \
		P_GET_STRUCT(FT4PacketTeleportToSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_TeleportTo_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_JumpTo) \
	{ \
		P_GET_STRUCT(FT4PacketJumpToSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_JumpTo_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveTo) \
	{ \
		P_GET_STRUCT(FT4PacketMoveToSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_MoveTo_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemLeave) \
	{ \
		P_GET_STRUCT(FT4PacketItemLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_ItemLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemEnter) \
	{ \
		P_GET_STRUCT(FT4PacketItemEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_ItemEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_FOLeave) \
	{ \
		P_GET_STRUCT(FT4PacketFOLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_FOLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_FOEnter) \
	{ \
		P_GET_STRUCT(FT4PacketFOEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_FOEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketNPCLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_NPCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketNPCEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_NPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_PCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketPCLeaveSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_PCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_PCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketPCEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_PCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_MyPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketMyPCEnterSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_MyPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_ChangeWorld) \
	{ \
		P_GET_STRUCT(FT4PacketChangeWorldSC,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SC_RecvPacket_ChangeWorld_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdTeleport) \
	{ \
		P_GET_STRUCT(FT4PacketCmdTeleportCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdTeleport_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdTeleport_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdTeleport_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdItemLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdItemLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdItemLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdItemLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdItemLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdItemEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdItemEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdItemEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdItemEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdItemEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdFOLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdFOLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdFOLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdFOLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdFOLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdFOEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdFOEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdFOEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdFOEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdFOEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdNPCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdNPCLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdNPCLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdNPCLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdNPCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdNPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdNPCEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdNPCEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdNPCEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdNPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdPCLeave) \
	{ \
		P_GET_STRUCT(FT4PacketCmdPCLeaveCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdPCLeave_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdPCLeave_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdPCLeave_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdPCEnter) \
	{ \
		P_GET_STRUCT(FT4PacketCmdPCEnterCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdPCEnter_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdPCEnter_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdPCEnter_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdChangeWorld) \
	{ \
		P_GET_STRUCT(FT4PacketCmdChangeWorldCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_CmdChangeWorld_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_CmdChangeWorld_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_CmdChangeWorld_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Attack) \
	{ \
		P_GET_STRUCT(FT4PacketAttackCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Attack_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Attack_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Attack_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Exchange) \
	{ \
		P_GET_STRUCT(FT4PacketExchangeCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Exchange_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Exchange_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Exchange_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_UnEquip) \
	{ \
		P_GET_STRUCT(FT4PacketUnEquipCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_UnEquip_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_UnEquip_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_UnEquip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Equip) \
	{ \
		P_GET_STRUCT(FT4PacketEquipCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Equip_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Equip_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Equip_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_UnLocked) \
	{ \
		P_GET_STRUCT(FT4PacketUnLockedCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_UnLocked_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_UnLocked_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_UnLocked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_Locked) \
	{ \
		P_GET_STRUCT(FT4PacketLockedCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_Locked_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_Locked_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_Locked_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_JumpWarmup) \
	{ \
		P_GET_STRUCT(FT4PacketJumpWarmupCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_JumpWarmup_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_JumpWarmup_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_JumpWarmup_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCS_RecvPacket_MoveWarmup) \
	{ \
		P_GET_STRUCT(FT4PacketMoveWarmupCS,Z_Param_InPacket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->CS_RecvPacket_MoveWarmup_Validate(Z_Param_InPacket)) \
		{ \
			RPC_ValidateFailed(TEXT("CS_RecvPacket_MoveWarmup_Validate")); \
			return; \
		} \
		P_THIS->CS_RecvPacket_MoveWarmup_Implementation(Z_Param_InPacket); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_EVENT_PARMS \
	struct T4NetGameplayComponent_eventCS_RecvPacket_Attack_Parms \
	{ \
		FT4PacketAttackCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdChangeWorld_Parms \
	{ \
		FT4PacketCmdChangeWorldCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdFOEnter_Parms \
	{ \
		FT4PacketCmdFOEnterCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdFOLeave_Parms \
	{ \
		FT4PacketCmdFOLeaveCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdItemEnter_Parms \
	{ \
		FT4PacketCmdItemEnterCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdItemLeave_Parms \
	{ \
		FT4PacketCmdItemLeaveCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdNPCEnter_Parms \
	{ \
		FT4PacketCmdNPCEnterCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdNPCLeave_Parms \
	{ \
		FT4PacketCmdNPCLeaveCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdPCEnter_Parms \
	{ \
		FT4PacketCmdPCEnterCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdPCLeave_Parms \
	{ \
		FT4PacketCmdPCLeaveCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_CmdTeleport_Parms \
	{ \
		FT4PacketCmdTeleportCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_Equip_Parms \
	{ \
		FT4PacketEquipCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_Exchange_Parms \
	{ \
		FT4PacketExchangeCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_JumpWarmup_Parms \
	{ \
		FT4PacketJumpWarmupCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_Locked_Parms \
	{ \
		FT4PacketLockedCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_MoveWarmup_Parms \
	{ \
		FT4PacketMoveWarmupCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_UnEquip_Parms \
	{ \
		FT4PacketUnEquipCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventCS_RecvPacket_UnLocked_Parms \
	{ \
		FT4PacketUnLockedCS InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_Attack_Parms \
	{ \
		FT4PacketAttackSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_ChangeWorld_Parms \
	{ \
		FT4PacketChangeWorldSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_Effect_Parms \
	{ \
		FT4PacketEffectSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_Equip_Parms \
	{ \
		FT4PacketEquipSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_Exchange_Parms \
	{ \
		FT4PacketExchangeSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_FOEnter_Parms \
	{ \
		FT4PacketFOEnterSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_FOLeave_Parms \
	{ \
		FT4PacketFOLeaveSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_ItemEnter_Parms \
	{ \
		FT4PacketItemEnterSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_ItemLeave_Parms \
	{ \
		FT4PacketItemLeaveSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_JumpTo_Parms \
	{ \
		FT4PacketJumpToSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_Locked_Parms \
	{ \
		FT4PacketLockedSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_MoveTo_Parms \
	{ \
		FT4PacketMoveToSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_MyPCEnter_Parms \
	{ \
		FT4PacketMyPCEnterSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_NPCEnter_Parms \
	{ \
		FT4PacketNPCEnterSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_NPCLeave_Parms \
	{ \
		FT4PacketNPCLeaveSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_PCEnter_Parms \
	{ \
		FT4PacketPCEnterSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_PCLeave_Parms \
	{ \
		FT4PacketPCLeaveSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_TeleportTo_Parms \
	{ \
		FT4PacketTeleportToSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_UnEquip_Parms \
	{ \
		FT4PacketUnEquipSC InPacket; \
	}; \
	struct T4NetGameplayComponent_eventSC_RecvPacket_UnLocked_Parms \
	{ \
		FT4PacketUnLockedSC InPacket; \
	};


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_CALLBACK_WRAPPERS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4NetGameplayComponent(); \
	friend struct Z_Construct_UClass_UT4NetGameplayComponent_Statics; \
public: \
	DECLARE_CLASS(UT4NetGameplayComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Gameplay"), NO_API) \
	DECLARE_SERIALIZER(UT4NetGameplayComponent)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUT4NetGameplayComponent(); \
	friend struct Z_Construct_UClass_UT4NetGameplayComponent_Statics; \
public: \
	DECLARE_CLASS(UT4NetGameplayComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Gameplay"), NO_API) \
	DECLARE_SERIALIZER(UT4NetGameplayComponent)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4NetGameplayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4NetGameplayComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4NetGameplayComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4NetGameplayComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4NetGameplayComponent(UT4NetGameplayComponent&&); \
	NO_API UT4NetGameplayComponent(const UT4NetGameplayComponent&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4NetGameplayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4NetGameplayComponent(UT4NetGameplayComponent&&); \
	NO_API UT4NetGameplayComponent(const UT4NetGameplayComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4NetGameplayComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4NetGameplayComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4NetGameplayComponent)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_PRIVATE_PROPERTY_OFFSET
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_27_PROLOG \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_EVENT_PARMS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_CALLBACK_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_CALLBACK_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4NetGameplayComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4GAMEPLAY_API UClass* StaticClass<class UT4NetGameplayComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Gameplay_Private_Network_Component_T4NetGameplayComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
