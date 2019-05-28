// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_SC.h"

#include "Network/Protocol/T4PacketSC.h"
#include "Network/Component/T4NetGameplayComponent.h" // #42

#include "T4Framework/Classes/Player/T4PlayerController.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Core/Public/T4CoreMinimal.h"

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
	AT4PlayerController* InRecvPC
)
{
	check(nullptr != InRecvPC);

	UT4NetGameplayComponent* NetGameplayComponent = Cast<UT4NetGameplayComponent>(InRecvPC->GetNetGameplayComponent());
	if (nullptr == NetGameplayComponent)
	{
		return false; // #42
	}

	bool bResult = true;
	const ET4PacketStoC PacketSC = InPacket->PacketSC;
	switch (PacketSC)
	{
		// #27
		// #T4_ADD_PACKET_TAG
		case ET4PacketStoC::ChangeWorld:
			NetGameplayComponent->SC_RecvPacket_ChangeWorld(*(static_cast<const FT4PacketChangeWorldSC*>(InPacket)));
			break;

		case ET4PacketStoC::MyPCEnter:
			NetGameplayComponent->SC_RecvPacket_MyPCEnter(*(static_cast<const FT4PacketMyPCEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::PCEnter:
			NetGameplayComponent->SC_RecvPacket_PCEnter(*(static_cast<const FT4PacketPCEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::PCLeave:
			NetGameplayComponent->SC_RecvPacket_PCLeave(*(static_cast<const FT4PacketPCLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::NPCEnter:
			NetGameplayComponent->SC_RecvPacket_NPCEnter(*(static_cast<const FT4PacketNPCEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::NPCLeave:
			NetGameplayComponent->SC_RecvPacket_NPCLeave(*(static_cast<const FT4PacketNPCLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::FOEnter:
			NetGameplayComponent->SC_RecvPacket_FOEnter(*(static_cast<const FT4PacketFOEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::FOLeave:
			NetGameplayComponent->SC_RecvPacket_FOLeave(*(static_cast<const FT4PacketFOLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::ItemEnter: // #41
			NetGameplayComponent->SC_RecvPacket_ItemEnter(*(static_cast<const FT4PacketItemEnterSC*>(InPacket)));
			break;

		case ET4PacketStoC::ItemLeave: // #41
			NetGameplayComponent->SC_RecvPacket_ItemLeave(*(static_cast<const FT4PacketItemLeaveSC*>(InPacket)));
			break;

		case ET4PacketStoC::MoveTo:
			NetGameplayComponent->SC_RecvPacket_MoveTo(*(static_cast<const FT4PacketMoveToSC*>(InPacket)));
			break;

		case ET4PacketStoC::JumpTo:
			NetGameplayComponent->SC_RecvPacket_JumpTo(*(static_cast<const FT4PacketJumpToSC*>(InPacket)));
			break;

		case ET4PacketStoC::TeleportTo:
			NetGameplayComponent->SC_RecvPacket_TeleportTo(*(static_cast<const FT4PacketTeleportToSC*>(InPacket)));
			break;

		case ET4PacketStoC::Locked:
			NetGameplayComponent->SC_RecvPacket_Locked(*(static_cast<const FT4PacketLockedSC*>(InPacket)));
			break;

		case ET4PacketStoC::UnLocked:
			NetGameplayComponent->SC_RecvPacket_UnLocked(*(static_cast<const FT4PacketUnLockedSC*>(InPacket)));
			break;

		case ET4PacketStoC::Equip:
			NetGameplayComponent->SC_RecvPacket_Equip(*(static_cast<const FT4PacketEquipSC*>(InPacket)));
			break;

		case ET4PacketStoC::UnEquip:
			NetGameplayComponent->SC_RecvPacket_UnEquip(*(static_cast<const FT4PacketUnEquipSC*>(InPacket)));
			break;

		case ET4PacketStoC::Exchange: // #37
			NetGameplayComponent->SC_RecvPacket_Exchange(*(static_cast<const FT4PacketExchangeSC*>(InPacket)));
			break;

		case ET4PacketStoC::Attack:
			NetGameplayComponent->SC_RecvPacket_Attack(*(static_cast<const FT4PacketAttackSC*>(InPacket)));
			break;

		case ET4PacketStoC::Effect:
			NetGameplayComponent->SC_RecvPacket_Effect(*(static_cast<const FT4PacketEffectSC*>(InPacket)));
			break;

		default:
			{
				UE_LOG(
					LogT4Gameplay,
					Error,
					TEXT("[SL:%u] SendPacketInternal '%' failed. no implementation."),
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
	AT4PlayerController* TargetPC = static_cast<AT4PlayerController*>(InRecvPC);
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
		AT4PlayerController* TargetPC = Cast<AT4PlayerController>(*It);
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

		case ET4PacketStoC::TeleportTo:
			HandleSC_TeleportTo(static_cast<const FT4PacketTeleportToSC*>(InPacket));
			break;

		case ET4PacketStoC::Locked:
			HandleSC_Locked(static_cast<const FT4PacketLockedSC*>(InPacket));
			break;

		case ET4PacketStoC::UnLocked:
			HandleSC_UnLocked(static_cast<const FT4PacketUnLockedSC*>(InPacket));
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
					TEXT("[SL:%u] OnRecvPacket '%' failed. no implementation."),
					uint32(LayerType),
					*(InPacket->ToString())
				);
				bResult = false;
			}
			break;
	}
	return true;
}
