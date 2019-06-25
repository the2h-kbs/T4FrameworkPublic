// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_SC.h"

#include "Network/Protocol/T4PacketSCMinimal.h"
#include "Classes/Player/T4GameplayPlayerController.h" // #42

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "Classes/Engine/World.h"

#include "T4GameplayInternal.h"

/**
  *
 */
FT4PacketHandlerSC::FT4PacketHandlerSC(ET4LayerType InLayerType)
	: LayerType(InLayerType)
{
	check(ET4LayerType::Max != LayerType);
}

FT4PacketHandlerSC::~FT4PacketHandlerSC()
{
}

void FT4PacketHandlerSC::Reset()
{
}

UWorld* FT4PacketHandlerSC::GetWorld() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	return GameWorld->GetWorld();
}

IT4PlayerController* FT4PacketHandlerSC::GetPlayerController() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	return GameFramework->GetPlayerController();
}

IT4GameObject* FT4PacketHandlerSC::GetGameObject(const FT4ObjectID& InObjectID) const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	IT4GameWorld* GameWorld = GameFramework->GetGameWorld();
	check(nullptr != GameWorld);
	return GameWorld->FindObject(InObjectID);
}

bool FT4PacketHandlerSC::SendPacketInternal(
	FT4PacketStoC* InPacket,
	AT4GameplayPlayerController* InRecvPC
)
{
	check(nullptr != InRecvPC);

	bool bResult = true;
	const ET4PacketStoC PacketSC = InPacket->PacketSC;
	switch (PacketSC)
	{
		// #27
		// #T4_ADD_PACKET_TAG
		case ET4PacketStoC::ChangeWorld:
			InRecvPC->SC_RecvPacket_ChangeWorld(*(static_cast<const FT4PacketChangeWorldSC*>(InPacket)));
			break;

		case ET4PacketStoC::MyPCEnter:
			InRecvPC->SC_RecvPacket_MyPCEnter(*(static_cast<const FT4PacketMyPCEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::PCEnter:
			InRecvPC->SC_RecvPacket_PCEnter(*(static_cast<const FT4PacketPCEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::PCLeave:
			InRecvPC->SC_RecvPacket_PCLeave(*(static_cast<const FT4PacketPCLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::NPCEnter:
			InRecvPC->SC_RecvPacket_NPCEnter(*(static_cast<const FT4PacketNPCEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::NPCLeave:
			InRecvPC->SC_RecvPacket_NPCLeave(*(static_cast<const FT4PacketNPCLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::FOEnter:
			InRecvPC->SC_RecvPacket_FOEnter(*(static_cast<const FT4PacketFOEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::FOLeave:
			InRecvPC->SC_RecvPacket_FOLeave(*(static_cast<const FT4PacketFOLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::ItemEnter: // #41
			InRecvPC->SC_RecvPacket_ItemEnter(*(static_cast<const FT4PacketItemEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::ItemLeave: // #41
			InRecvPC->SC_RecvPacket_ItemLeave(*(static_cast<const FT4PacketItemLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::MoveTo:
			InRecvPC->SC_RecvPacket_MoveTo(*(static_cast<const FT4PacketMoveToSC*>(InPacket)));
			break;

		case ET4PacketStoC::JumpTo:
			InRecvPC->SC_RecvPacket_JumpTo(*(static_cast<const FT4PacketJumpToSC*>(InPacket)));
			break;

		case ET4PacketStoC::RollTo: // #46
			InRecvPC->SC_RecvPacket_RollTo(*(static_cast<const FT4PacketRollToSC*>(InPacket)));
			break;

		case ET4PacketStoC::TurnTo: // #40
			InRecvPC->SC_RecvPacket_TurnTo(*(static_cast<const FT4PacketTurnToSC*>(InPacket)));
			break;

		case ET4PacketStoC::TeleportTo:
			InRecvPC->SC_RecvPacket_TeleportTo(*(static_cast<const FT4PacketTeleportToSC*>(InPacket)));
			break;

		case ET4PacketStoC::LockOn:
			InRecvPC->SC_RecvPacket_LockOn(*(static_cast<const FT4PacketLockOnSC*>(InPacket)));
			break;

		case ET4PacketStoC::LockOff:
			InRecvPC->SC_RecvPacket_LockOff(*(static_cast<const FT4PacketLockOffSC*>(InPacket)));
			break;

		case ET4PacketStoC::Equip:
			InRecvPC->SC_RecvPacket_Equip(*(static_cast<const FT4PacketEquipSC*>(InPacket)));
			break;

		case ET4PacketStoC::UnEquip:
			InRecvPC->SC_RecvPacket_UnEquip(*(static_cast<const FT4PacketUnEquipSC*>(InPacket)));
			break;

		case ET4PacketStoC::Exchange: // #37
			InRecvPC->SC_RecvPacket_Exchange(*(static_cast<const FT4PacketExchangeSC*>(InPacket)));
			break;

		case ET4PacketStoC::Attack:
			InRecvPC->SC_RecvPacket_Attack(*(static_cast<const FT4PacketAttackSC*>(InPacket)));
			break;

		case ET4PacketStoC::Effect:
			InRecvPC->SC_RecvPacket_Effect(*(static_cast<const FT4PacketEffectSC*>(InPacket)));
			break;

		default:
			{
				UE_LOG(
					LogT4Gameplay,
					Error,
					TEXT("[SL:%u] SendPacketInternal '%s' failed. no implementation."),
					uint32(LayerType),
					*(InPacket->ToString())
				);
				bResult = false;
			}
			break;
	}
	return bResult;
}

bool FT4PacketHandlerSC::OnSendPacket(
	FT4PacketStoC* InPacket,
	IT4PlayerController* InRecvPC
)
{
	FString OutString;
	if (!InPacket->Validate(OutString))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] OnSendPacket '%s' failed. error msg '%s'"),
			uint32(LayerType),
			*(InPacket->ToString()),
			*OutString
		);
		return false;
	}
	AT4GameplayPlayerController* TargetPC = static_cast<AT4GameplayPlayerController*>(InRecvPC);
	check(nullptr != TargetPC);
	bool bResult = SendPacketInternal(InPacket, TargetPC);
	return bResult;
}

bool FT4PacketHandlerSC::OnBroadcastPacket(FT4PacketStoC* InPacket)
{
	FString OutString;
	if (!InPacket->Validate(OutString))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] OnBroadcastPacket '%s' failed. error msg '%s'"),
			uint32(LayerType),
			*(InPacket->ToString()),
			*OutString
		);
		return false;
	}

	bool bResult = true;
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		AT4GameplayPlayerController* TargetPC = Cast<AT4GameplayPlayerController>(*It);
		if (nullptr != TargetPC && TargetPC->HasAuthority())
		{
			bResult &= SendPacketInternal(InPacket, TargetPC);
		}
	}

	return bResult;
}

bool FT4PacketHandlerSC::OnRecvPacket(const FT4PacketStoC* InPacket)
{
	check(ET4LayerType::Max != LayerType);
	check(nullptr != InPacket);
	bool bResult = true;
	const ET4PacketStoC PacketSC = InPacket->PacketSC;
	switch (PacketSC)
	{
		// #27
		// #T4_ADD_PACKET_TAG
		case ET4PacketStoC::ChangeWorld:
			HandleSC_ChangeWorld(static_cast<const FT4PacketChangeWorldSC*>(InPacket));
			break;

		case ET4PacketStoC::MyPCEnter:
			HandleSC_MyPCEnter(static_cast<const FT4PacketMyPCEnterSC*>(InPacket));
			break;

		case ET4PacketStoC::PCEnter:
			HandleSC_PCEnter(static_cast<const FT4PacketPCEnterSC*>(InPacket));
			break;

		case ET4PacketStoC::PCLeave:
			HandleSC_PCLeave(static_cast<const FT4PacketPCLeaveSC*>(InPacket));
			break;

		case ET4PacketStoC::NPCEnter:
			HandleSC_NPCEnter(static_cast<const FT4PacketNPCEnterSC*>(InPacket));
			break;

		case ET4PacketStoC::NPCLeave:
			HandleSC_NPCLeave(static_cast<const FT4PacketNPCLeaveSC*>(InPacket));
			break;

		case ET4PacketStoC::FOEnter:
			HandleSC_FOEnter(static_cast<const FT4PacketFOEnterSC*>(InPacket));
			break;

		case ET4PacketStoC::FOLeave:
			HandleSC_FOLeave(static_cast<const FT4PacketFOLeaveSC*>(InPacket));
			break;

		case ET4PacketStoC::ItemEnter: // #41
			HandleSC_ItemEnter(static_cast<const FT4PacketItemEnterSC*>(InPacket));
			break;

		case ET4PacketStoC::ItemLeave: // #41
			HandleSC_ItemLeave(static_cast<const FT4PacketItemLeaveSC*>(InPacket));
			break;

		case ET4PacketStoC::MoveTo:
			HandleSC_MoveTo(static_cast<const FT4PacketMoveToSC*>(InPacket));
			break;

		case ET4PacketStoC::JumpTo:
			HandleSC_JumpTo(static_cast<const FT4PacketJumpToSC*>(InPacket));
			break;

		case ET4PacketStoC::RollTo: // #46
			HandleSC_RollTo(static_cast<const FT4PacketRollToSC*>(InPacket));
			break;

		case ET4PacketStoC::TurnTo: // #40
			HandleSC_TurnTo(static_cast<const FT4PacketTurnToSC*>(InPacket));
			break;

		case ET4PacketStoC::TeleportTo:
			HandleSC_TeleportTo(static_cast<const FT4PacketTeleportToSC*>(InPacket));
			break;

		case ET4PacketStoC::LockOn:
			HandleSC_LockOn(static_cast<const FT4PacketLockOnSC*>(InPacket));
			break;

		case ET4PacketStoC::LockOff:
			HandleSC_LockOff(static_cast<const FT4PacketLockOffSC*>(InPacket));
			break;

		case ET4PacketStoC::Equip:
			HandleSC_Equip(static_cast<const FT4PacketEquipSC*>(InPacket));
			break;

		case ET4PacketStoC::UnEquip:
			HandleSC_UnEquip(static_cast<const FT4PacketUnEquipSC*>(InPacket));
			break;

		case ET4PacketStoC::Exchange:
			HandleSC_Exchange(static_cast<const FT4PacketExchangeSC*>(InPacket)); // #37
			break;

		case ET4PacketStoC::Attack:
			HandleSC_Attack(static_cast<const FT4PacketAttackSC*>(InPacket));
			break;

		case ET4PacketStoC::Effect:
			HandleSC_Effect(static_cast<const FT4PacketEffectSC*>(InPacket));
			break;

		default:
			{
				UE_LOG(
					LogT4Gameplay,
					Error,
					TEXT("[SL:%u] OnRecvPacket '%s' failed. no implementation."),
					uint32(LayerType),
					*(InPacket->ToString())
				);
				bResult = false;
			}
			break;
	}
	return true;
}
