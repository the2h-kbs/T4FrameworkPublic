// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/Player/T4GameplayPlayerController.h"

#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "T4Core/Public/T4CoreLayer.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html
 */
AT4GameplayPlayerController::AT4GameplayPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReplicates = true;
}

FORCEINLINE IT4PacketHandlerCS* GetPacketHandlerCS(const ET4LayerType InLayerType)
{
	IT4GameFramework* GameFramework = T4FrameworkGet(InLayerType);
	if (nullptr == GameFramework)
	{
		return nullptr;
	}
	FT4GameplayInstance* GameplayInstance = FT4GameplayInstance::CastGameplayInstance(
		GameFramework->GetGameplayHandler()
	);
	if (nullptr == GameplayInstance)
	{
		return nullptr;
	}
	return GameplayInstance->GetPacketHandlerCS();
}

bool AT4GameplayPlayerController::CS_RecvPacket_Validate(const FT4PacketCtoS* InPacket)
{
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS(LayerType);
	if (nullptr == PacketHandlerCS)
	{
		return false;
	}
	return PacketHandlerCS->OnRecvPacket_Validation(InPacket);
}

void AT4GameplayPlayerController::CS_RecvPacket_Implementation(const FT4PacketCtoS* InPacket)
{
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS(LayerType);
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	PacketHandlerCS->OnRecvPacket(InPacket, static_cast<IT4PlayerController*>(this));
}

#define DEFINE_CS_VALIDATION(x)																		\
bool AT4GameplayPlayerController::CS_RecvPacket_##x##_Validate(const FT4Packet##x##CS& InPacket)	\
{																									\
	return CS_RecvPacket_Validate(&InPacket);														\
}

#define DEFINE_CS_IMPLEMENTATION(x)																		\
void AT4GameplayPlayerController::CS_RecvPacket_##x##_Implementation(const FT4Packet##x##CS& InPacket)	\
{																										\
	CS_RecvPacket_Implementation(&InPacket);															\
}

#define DEFINE_CS_PACKET_MACRO(x)	\
DEFINE_CS_VALIDATION(x)				\
DEFINE_CS_IMPLEMENTATION(x)

// #T4_ADD_PACKET_TAG
DEFINE_CS_PACKET_MACRO(Move)
DEFINE_CS_PACKET_MACRO(Jump)
DEFINE_CS_PACKET_MACRO(Roll) // #46
DEFINE_CS_PACKET_MACRO(Turn)
DEFINE_CS_PACKET_MACRO(LockOn)
DEFINE_CS_PACKET_MACRO(LockOff)
DEFINE_CS_PACKET_MACRO(Equip)
DEFINE_CS_PACKET_MACRO(UnEquip)
DEFINE_CS_PACKET_MACRO(Exchange) // #37
DEFINE_CS_PACKET_MACRO(Attack)
DEFINE_CS_PACKET_MACRO(CmdChangeWorld)
DEFINE_CS_PACKET_MACRO(CmdPCEnter)
DEFINE_CS_PACKET_MACRO(CmdPCLeave)
DEFINE_CS_PACKET_MACRO(CmdNPCEnter)
DEFINE_CS_PACKET_MACRO(CmdNPCLeave)
DEFINE_CS_PACKET_MACRO(CmdFOEnter)
DEFINE_CS_PACKET_MACRO(CmdFOLeave)
DEFINE_CS_PACKET_MACRO(CmdItemEnter) // #41
DEFINE_CS_PACKET_MACRO(CmdItemLeave) // #41
DEFINE_CS_PACKET_MACRO(CmdTeleport)

void AT4GameplayPlayerController::SC_RecvPacket_Implementation(const FT4PacketStoC* InPacket)
{
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	if (nullptr == GameFramework)
	{
		return;
	}
	FT4GameplayInstance* GameplayInstance = FT4GameplayInstance::CastGameplayInstance(
		GameFramework->GetGameplayHandler()
	);
	if (nullptr == GameplayInstance)
	{
		return;
	}
	IT4PacketHandlerSC* PacketHandlerSC = GameplayInstance->GetPacketHandlerSC();
	if (nullptr == PacketHandlerSC)
	{
		return;
	}
	PacketHandlerSC->OnRecvPacket(InPacket);
}

// #25, #29, #17
#define DEFINE_SC_PACKET_MACRO(x)																		\
void AT4GameplayPlayerController::SC_RecvPacket_##x##_Implementation(const FT4Packet##x##SC& InPacket)	\
{																										\
	SC_RecvPacket_Implementation(&InPacket);															\
}

// #T4_ADD_PACKET_TAG
DEFINE_SC_PACKET_MACRO(ChangeWorld)
DEFINE_SC_PACKET_MACRO(MyPCEnter)
DEFINE_SC_PACKET_MACRO(PCEnter)
DEFINE_SC_PACKET_MACRO(PCLeave)
DEFINE_SC_PACKET_MACRO(NPCEnter)
DEFINE_SC_PACKET_MACRO(NPCLeave)
DEFINE_SC_PACKET_MACRO(FOEnter)
DEFINE_SC_PACKET_MACRO(FOLeave)
DEFINE_SC_PACKET_MACRO(ItemEnter) // #41
DEFINE_SC_PACKET_MACRO(ItemLeave) // #41
DEFINE_SC_PACKET_MACRO(MoveTo)
DEFINE_SC_PACKET_MACRO(JumpTo)
DEFINE_SC_PACKET_MACRO(RollTo) // #46
DEFINE_SC_PACKET_MACRO(TurnTo)
DEFINE_SC_PACKET_MACRO(TeleportTo)
DEFINE_SC_PACKET_MACRO(LockOn)
DEFINE_SC_PACKET_MACRO(LockOff)
DEFINE_SC_PACKET_MACRO(Equip)
DEFINE_SC_PACKET_MACRO(UnEquip)
DEFINE_SC_PACKET_MACRO(Exchange) // #37
DEFINE_SC_PACKET_MACRO(Attack)
DEFINE_SC_PACKET_MACRO(Effect)