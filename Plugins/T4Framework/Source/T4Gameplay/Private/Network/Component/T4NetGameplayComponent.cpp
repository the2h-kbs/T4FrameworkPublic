// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4NetGameplayComponent.h"

#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "T4Core/Public/T4CoreLayer.h"
#include "T4Framework/Classes/Player/T4PlayerController.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Networking/Actors/Components/index.html
 */
UT4NetGameplayComponent::UT4NetGameplayComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, LayerType(ET4LayerType::Max)
{
}

void UT4NetGameplayComponent::TickComponent(
	float DeltaTime,
	enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction
)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UT4NetGameplayComponent::BeginPlay()
{
	Super::BeginPlay();

	check(ET4LayerType::Max == LayerType);
	LayerType = T4CoreLayer::Get(GetWorld()); // #12 : Support Multiple LayerType
	check(ET4LayerType::Max != LayerType);
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

bool UT4NetGameplayComponent::CS_RecvPacket_Validate(const FT4PacketCtoS* InPacket)
{
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS(LayerType);
	if (nullptr == PacketHandlerCS)
	{
		return false;
	}
	return PacketHandlerCS->OnRecvPacket_Validation(InPacket);
}

void UT4NetGameplayComponent::CS_RecvPacket_Implementation(const FT4PacketCtoS* InPacket)
{
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS(LayerType);
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	AT4PlayerController* PlayerController = Cast<AT4PlayerController>(GetOuter());
	if (nullptr != PlayerController)
	{
		PacketHandlerCS->OnRecvPacket(InPacket, static_cast<IT4PlayerController*>(PlayerController));
	}
}

#define DEFINE_CS_VALIDATION(x)																	\
bool UT4NetGameplayComponent::CS_RecvPacket_##x##_Validate(const FT4Packet##x##CS& InPacket)	\
{																								\
	return CS_RecvPacket_Validate(&InPacket);													\
}

#define DEFINE_CS_IMPLEMENTATION(x)																	\
void UT4NetGameplayComponent::CS_RecvPacket_##x##_Implementation(const FT4Packet##x##CS& InPacket)	\
{																									\
	CS_RecvPacket_Implementation(&InPacket);														\
}

#define DEFINE_CS_PACKET_MACRO(x)	\
DEFINE_CS_VALIDATION(x)				\
DEFINE_CS_IMPLEMENTATION(x)

// #T4_ADD_PACKET_TAG
DEFINE_CS_PACKET_MACRO(MoveWarmup)
DEFINE_CS_PACKET_MACRO(JumpWarmup)
DEFINE_CS_PACKET_MACRO(Locked)
DEFINE_CS_PACKET_MACRO(UnLocked)
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

void UT4NetGameplayComponent::SC_RecvPacket_Implementation(const FT4PacketStoC* InPacket)
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
#define DEFINE_SC_PACKET_MACRO(x)																	\
void UT4NetGameplayComponent::SC_RecvPacket_##x##_Implementation(const FT4Packet##x##SC& InPacket)	\
{																									\
	SC_RecvPacket_Implementation(&InPacket);														\
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
DEFINE_SC_PACKET_MACRO(TeleportTo)
DEFINE_SC_PACKET_MACRO(Locked)
DEFINE_SC_PACKET_MACRO(UnLocked)
DEFINE_SC_PACKET_MACRO(Equip)
DEFINE_SC_PACKET_MACRO(UnEquip)
DEFINE_SC_PACKET_MACRO(Exchange) // #37
DEFINE_SC_PACKET_MACRO(Attack)
DEFINE_SC_PACKET_MACRO(Effect)