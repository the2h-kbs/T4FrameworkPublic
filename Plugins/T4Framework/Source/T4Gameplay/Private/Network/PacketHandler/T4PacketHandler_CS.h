// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "Public/T4Gameplay.h"

/**
  *
 */
struct FT4PacketCtoS;
class IT4GameObject;
class IT4PlayerController;
class FT4PacketHandlerCS : public IT4PacketHandlerCS
{
public:
	explicit FT4PacketHandlerCS(ET4LayerType InLayerType);
	~FT4PacketHandlerCS();

	bool OnSendPacket(FT4PacketCtoS* InPacket) override; // Client, Reliable

	bool OnRecvPacket_Validation(const FT4PacketCtoS* InPacket) override;
	bool OnRecvPacket(const FT4PacketCtoS* InPacket, IT4PlayerController* InSenderPC) override;

public:
	ET4LayerType GetLayerType() const { return LayerType; }

	void Reset();

private:
	// #31
	// #T4_ADD_PACKET_TAG
	void HandleCS_MoveWarmup(const struct FT4PacketMoveWarmupCS* InPacket);
	void HandleCS_JumpWarmup(const struct FT4PacketJumpWarmupCS* InPacket);
	void HandleCS_Locked(const struct FT4PacketLockedCS* InPacket);
	void HandleCS_UnLocked(const struct FT4PacketUnLockedCS* InPacket);
	void HandleCS_Equip(const struct FT4PacketEquipCS* InPacket);
	void HandleCS_UnEquip(const struct FT4PacketUnEquipCS* InPacket);
	void HandleCS_Exchange(const struct FT4PacketExchangeCS* InPacket); // #37
	void HandleCS_Attack(const struct FT4PacketAttackCS* InPacket);
	void HandleCS_CmdChangeWorld(const struct FT4PacketCmdChangeWorldCS* InPacket);
	void HandleCS_CmdPCEnter(const struct FT4PacketCmdPCEnterCS* InPacket, IT4PlayerController* InSenderPC);
	void HandleCS_CmdPCLeave(const struct FT4PacketCmdPCLeaveCS* InPacket, IT4PlayerController* InSenderPC);
	void HandleCS_CmdNPCEnter(const struct FT4PacketCmdNPCEnterCS* InPacket);
	void HandleCS_CmdNPCLeave(const struct FT4PacketCmdNPCLeaveCS* InPacket);
	void HandleCS_CmdFOEnter(const struct FT4PacketCmdFOEnterCS* InPacket);
	void HandleCS_CmdFOLeave(const struct FT4PacketCmdFOLeaveCS* InPacket);
	void HandleCS_CmdItemEnter(const struct FT4PacketCmdItemEnterCS* InPacket); // #41
	void HandleCS_CmdItemLeave(const struct FT4PacketCmdItemLeaveCS* InPacket); // #41
	void HandleCS_CmdTeleport(const struct FT4PacketCmdTeleportCS* InPacket);

	UWorld* GetWorld() const;
	IT4PlayerController* GetPlayerController() const;
	IT4GameObject* GetGameObject(const FT4ObjectID& InObjectID) const;

#if (WITH_EDITOR || WITH_SERVER_CODE)
	AAIController* DoStartSpawnAIController(
		TSubclassOf<AAIController> InNPCControllerClass,
		const FVector& InSpawnLocation,
		const FRotator& InSpawnRotation
	); // #31, #41

	void DoFinishSpawningAIController(
		AAIController* InAIController,
		const FVector& InSpawnLocation,
		const FRotator& InSpawnRotation
	);
#endif

	IT4PacketHandlerSC* GetPacketHandlerSC() const;

	bool DoSendPacketForServer(FT4PacketStoC* InSendPacket);

private:
	ET4LayerType LayerType;
};
