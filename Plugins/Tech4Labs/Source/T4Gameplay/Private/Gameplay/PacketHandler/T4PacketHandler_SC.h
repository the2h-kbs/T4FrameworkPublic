// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "Public/T4Gameplay.h"

/**
  *
 */
struct FT4PacketStoC;
class IT4GameObject;
class AT4GameplayPlayerController;
class FT4PacketHandlerSC : public IT4PacketHandlerSC
{
public:
	explicit FT4PacketHandlerSC(ET4LayerType InLayerType);
	~FT4PacketHandlerSC();

	bool OnSendPacket(FT4PacketStoC* InPacket, IT4PlayerController* InRecvPC) override;
	bool OnBroadcastPacket(FT4PacketStoC* InPacket) override;

	bool OnRecvPacket(const FT4PacketStoC* InPacket) override;

#if (WITH_EDITOR || WITH_SERVER_CODE)
	bool DoBroadcastPacketForServer(FT4PacketStoC* InPacket) override; // #50
#endif

public:
	ET4LayerType GetLayerType() const { return LayerType; }

	void Reset();

private:
	bool SendPacketInternal(FT4PacketStoC* InPacket, AT4GameplayPlayerController* InRecvPC);

	// #31
	// #T4_ADD_PACKET_TAG
	void HandleSC_ChangeWorld(const struct FT4PacketChangeWorldSC* InPacket);
	void HandleSC_MyPCEnter(const struct FT4PacketMyPCEnterSC* InPacket);
	void HandleSC_PCEnter(const struct FT4PacketPCEnterSC* InPacket);
	void HandleSC_PCLeave(const struct FT4PacketPCLeaveSC* InPacket);
	void HandleSC_NPCEnter(const struct FT4PacketNPCEnterSC* InPacket);
	void HandleSC_NPCLeave(const struct FT4PacketNPCLeaveSC* InPacket);
	void HandleSC_FOEnter(const struct FT4PacketFOEnterSC* InPacket);
	void HandleSC_FOLeave(const struct FT4PacketFOLeaveSC* InPacket);
	void HandleSC_ItemEnter(const struct FT4PacketItemEnterSC* InPacket); // #41
	void HandleSC_ItemLeave(const struct FT4PacketItemLeaveSC* InPacket); // #41
	void HandleSC_MoveTo(const struct FT4PacketMoveToSC* InPacket);
	void HandleSC_JumpTo(const struct FT4PacketJumpToSC* InPacket);
	void HandleSC_RollTo(const struct FT4PacketRollToSC* InPacket); // #46
	void HandleSC_TurnTo(const struct FT4PacketTurnToSC* InPacket); // #40
	void HandleSC_TeleportTo(const struct FT4PacketTeleportToSC* InPacket);
	void HandleSC_LockOn(const struct FT4PacketLockOnSC* InPacket);
	void HandleSC_LockOff(const struct FT4PacketLockOffSC* InPacket);
	void HandleSC_Equip(const struct FT4PacketEquipSC* InPacket);
	void HandleSC_UnEquip(const struct FT4PacketUnEquipSC* InPacket);
	void HandleSC_Exchange(const struct FT4PacketExchangeSC* InPacket); // #37
	void HandleSC_Attack(const struct FT4PacketAttackSC* InPacket);
	void HandleSC_Effect(const struct FT4PacketEffectSC* InPacket);

	UWorld* GetWorld() const;
	IT4PlayerController* GetPlayerController() const;
	IT4GameObject* GetGameObject(const FT4ObjectID& InObjectID) const;

private:
	ET4LayerType LayerType;
};
