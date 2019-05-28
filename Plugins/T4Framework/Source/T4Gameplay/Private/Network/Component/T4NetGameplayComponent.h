// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Network/Protocol/T4PacketCS_Status.h"
#include "Network/Protocol/T4PacketCS_Move.h"
#include "Network/Protocol/T4PacketCS_Action.h"
#include "Network/Protocol/T4PacketCS_Command.h"
#include "Network/Protocol/T4PacketCS.h" // #25

#include "Network/Protocol/T4PacketSC_World.h"
#include "Network/Protocol/T4PacketSC_Status.h"
#include "Network/Protocol/T4PacketSC_Move.h"
#include "Network/Protocol/T4PacketSC_Action.h"
#include "Network/Protocol/T4PacketSC.h" // #25

#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"

#include "T4NetGameplayComponent.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Networking/Actors/Components/index.html
 */
UCLASS()
class UT4NetGameplayComponent : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

protected:
	void BeginPlay() override;

	// #27 : Protocol
	bool CS_RecvPacket_Validate(const FT4PacketCtoS* InPacket);
	void CS_RecvPacket_Implementation(const FT4PacketCtoS* InPacket);

	void SC_RecvPacket_Implementation(const FT4PacketStoC* InPacket);

private:
	friend class FT4PacketHandlerCS;

	// #T4_ADD_PACKET_TAG
	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_MoveWarmup(const FT4PacketMoveWarmupCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_JumpWarmup(const FT4PacketJumpWarmupCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Locked(const FT4PacketLockedCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_UnLocked(const FT4PacketUnLockedCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Equip(const FT4PacketEquipCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_UnEquip(const FT4PacketUnEquipCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Exchange(const FT4PacketExchangeCS& InPacket); // #37

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Attack(const FT4PacketAttackCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdChangeWorld(const FT4PacketCmdChangeWorldCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdPCEnter(const FT4PacketCmdPCEnterCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdPCLeave(const FT4PacketCmdPCLeaveCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdNPCEnter(const FT4PacketCmdNPCEnterCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdNPCLeave(const FT4PacketCmdNPCLeaveCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdFOEnter(const FT4PacketCmdFOEnterCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdFOLeave(const FT4PacketCmdFOLeaveCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdItemEnter(const FT4PacketCmdItemEnterCS& InPacket); // #41

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdItemLeave(const FT4PacketCmdItemLeaveCS& InPacket); // #41

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdTeleport(const FT4PacketCmdTeleportCS& InPacket);

private:
	friend class FT4PacketHandlerSC;

	// #T4_ADD_PACKET_TAG
	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ChangeWorld(const FT4PacketChangeWorldSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MyPCEnter(const FT4PacketMyPCEnterSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_PCEnter(const FT4PacketPCEnterSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_PCLeave(const FT4PacketPCLeaveSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_NPCEnter(const FT4PacketNPCEnterSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_NPCLeave(const FT4PacketNPCLeaveSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_FOEnter(const FT4PacketFOEnterSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_FOLeave(const FT4PacketFOLeaveSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ItemEnter(const FT4PacketItemEnterSC& InPacket); // #41

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ItemLeave(const FT4PacketItemLeaveSC& InPacket); // #41

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MoveTo(const FT4PacketMoveToSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_JumpTo(const FT4PacketJumpToSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_TeleportTo(const FT4PacketTeleportToSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Locked(const FT4PacketLockedSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_UnLocked(const FT4PacketUnLockedSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Equip(const FT4PacketEquipSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_UnEquip(const FT4PacketUnEquipSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Exchange(const FT4PacketExchangeSC& InPacket); // #37

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Attack(const FT4PacketAttackSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Effect(const FT4PacketEffectSC& InPacket);

private:
	ET4LayerType LayerType;
};
