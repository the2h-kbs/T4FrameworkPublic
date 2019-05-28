// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_CS.h"

#include "Network/Protocol/T4PacketCS.h"
#include "Network/Component/T4NetGameplayComponent.h" // #42

#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Classes/Player/T4PlayerController.h"

#if (WITH_EDITOR || WITH_SERVER_CODE) // #41
#include "Engine/World.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#endif

#include "T4GameplayInternal.h"

/**
  *
 */
FT4PacketHandlerCS::FT4PacketHandlerCS(ET4LayerType InLayerType)
	: LayerType(InLayerType)
{
	check(ET4LayerType::Max != LayerType);
}

FT4PacketHandlerCS::~FT4PacketHandlerCS()
{
}

void FT4PacketHandlerCS::Reset()
{
}

UWorld* FT4PacketHandlerCS::GetWorld() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	return GameWorld->GetWorld();
}

IT4PlayerController* FT4PacketHandlerCS::GetPlayerController() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	return GameFramework->GetPlayerController();
}

IT4GameObject* FT4PacketHandlerCS::GetGameObject(const FT4ObjectID& InObjectID) const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	return GameWorld->FindObject(InObjectID);
}

#if (WITH_EDITOR || WITH_SERVER_CODE)
AAIController* FT4PacketHandlerCS::DoStartSpawnAIController(
	TSubclassOf<AAIController> InNPCControllerClass,
	const FVector& InSpawnLocation,
	const FRotator& InSpawnRotation
)
{
	// #31, #41
	UWorld* UnrealWorld = GetWorld();
	if (nullptr == UnrealWorld)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.ObjectFlags |= RF_Transient;	// We never want to save AI controllers into a map
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnInfo.bDeferConstruction = true;
	AAIController* NewAI = UnrealWorld->SpawnActor<AAIController>(
		InNPCControllerClass,
		InSpawnLocation,
		InSpawnRotation,
		SpawnInfo
	);
	if (nullptr == NewAI)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("FT4PacketHandlerCS : Failed to spawn AAIController. LayerType '%u'"),
			uint32(LayerType)
		);
		return nullptr;
	}

	NewAI->SetReplicates(false); // #34 : PC와 달리 NPC는 서버만 AIController 를 가지도록 설계한다.
	return NewAI;
}

void FT4PacketHandlerCS::DoFinishSpawningAIController(
	AAIController* InAIController,
	const FVector& InSpawnLocation,
	const FRotator& InSpawnRotation
)
{
	// #31, #41
	const FTransform SpawnTransform(InSpawnRotation, InSpawnLocation);
	UGameplayStatics::FinishSpawningActor(InAIController, SpawnTransform);
}
#endif

IT4PacketHandlerSC* FT4PacketHandlerCS::GetPacketHandlerSC() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	FT4GameplayInstance* GameplayInstance = FT4GameplayInstance::CastGameplayInstance(
		GameFramework->GetGameplayHandler()
	);
	if (nullptr == GameplayInstance)
	{
		return nullptr;
	}
	return GameplayInstance->GetPacketHandlerSC();
}

bool FT4PacketHandlerCS::DoSendPacketForServer(FT4PacketStoC* InSendPacket)
{
	FString OutString;
	if (!InSendPacket->Validate(OutString))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] DoSendPacket '%s' failed. error msg '%s'"),
			uint32(LayerType),
			*(InSendPacket->ToString()),
			*OutString
		);
		return false;
	}
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	check(nullptr != PacketHandlerSC);
	if (T4CoreLayer::IsServer(LayerType))
	{
		PacketHandlerSC->OnRecvPacket(InSendPacket); // #15 : 서버 World 로 전달
	}
	GetPacketHandlerSC()->OnBroadcastPacket(InSendPacket);
	return true;
}

bool FT4PacketHandlerCS::OnSendPacket(FT4PacketCtoS* InPacket) 
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

	bool bResult = true;

	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);

#if WITH_EDITOR
	if (T4CoreLayer::IsToolSide(LayerType))
	{
		// WARN : #29, #17 : Only Editor LayerType
		if (OnRecvPacket_Validation(InPacket))
		{
			bResult = OnRecvPacket(InPacket, PlayerController);
		}
		return bResult;
	}
#endif

	AT4PlayerController* MyPC = static_cast<AT4PlayerController*>(PlayerController);
	check(nullptr != MyPC);

	UT4NetGameplayComponent* NetGameplayComponent = Cast<UT4NetGameplayComponent>(MyPC->GetNetGameplayComponent());
	if (nullptr == NetGameplayComponent)
	{
		return false; // #42
	}

	const ET4PacketCtoS PacketCS = InPacket->PacketCS;
	switch (PacketCS)
	{
		// #27
		// #T4_ADD_PACKET_TAG
		case ET4PacketCtoS::MoveWarmup:
			NetGameplayComponent->CS_RecvPacket_MoveWarmup(*(static_cast<const FT4PacketMoveWarmupCS*>(InPacket)));
			break;

		case ET4PacketCtoS::JumpWarmup:
			NetGameplayComponent->CS_RecvPacket_JumpWarmup(*(static_cast<const FT4PacketJumpWarmupCS*>(InPacket)));
			break;

		case ET4PacketCtoS::Locked:
			NetGameplayComponent->CS_RecvPacket_Locked(*(static_cast<const FT4PacketLockedCS*>(InPacket)));
			break;

		case ET4PacketCtoS::UnLocked:
			NetGameplayComponent->CS_RecvPacket_UnLocked(*(static_cast<const FT4PacketUnLockedCS*>(InPacket)));
			break;

		case ET4PacketCtoS::Equip:
			NetGameplayComponent->CS_RecvPacket_Equip(*(static_cast<const FT4PacketEquipCS*>(InPacket)));
			break;

		case ET4PacketCtoS::UnEquip:
			NetGameplayComponent->CS_RecvPacket_UnEquip(*(static_cast<const FT4PacketUnEquipCS*>(InPacket)));
			break;

		case ET4PacketCtoS::Exchange: // #37
			NetGameplayComponent->CS_RecvPacket_Exchange(*(static_cast<const FT4PacketExchangeCS*>(InPacket)));
			break;

		case ET4PacketCtoS::Attack:
			NetGameplayComponent->CS_RecvPacket_Attack(*(static_cast<const FT4PacketAttackCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdChangeWorld:
			NetGameplayComponent->CS_RecvPacket_CmdChangeWorld(*(static_cast<const FT4PacketCmdChangeWorldCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdPCEnter:
			NetGameplayComponent->CS_RecvPacket_CmdPCEnter(*(static_cast<const FT4PacketCmdPCEnterCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdPCLeave:
			NetGameplayComponent->CS_RecvPacket_CmdPCLeave(*(static_cast<const FT4PacketCmdPCLeaveCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdNPCEnter:
			NetGameplayComponent->CS_RecvPacket_CmdNPCEnter(*(static_cast<const FT4PacketCmdNPCEnterCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdNPCLeave:
			NetGameplayComponent->CS_RecvPacket_CmdNPCLeave(*(static_cast<const FT4PacketCmdNPCLeaveCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdFOEnter:
			NetGameplayComponent->CS_RecvPacket_CmdFOEnter(*(static_cast<const FT4PacketCmdFOEnterCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdFOLeave:
			NetGameplayComponent->CS_RecvPacket_CmdFOLeave(*(static_cast<const FT4PacketCmdFOLeaveCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdItemEnter: // #41
			NetGameplayComponent->CS_RecvPacket_CmdItemEnter(*(static_cast<const FT4PacketCmdItemEnterCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdItemLeave: // #41
			NetGameplayComponent->CS_RecvPacket_CmdItemLeave(*(static_cast<const FT4PacketCmdItemLeaveCS*>(InPacket)));
			break;

		case ET4PacketCtoS::CmdTeleport:
			NetGameplayComponent->CS_RecvPacket_CmdTeleport(*(static_cast<const FT4PacketCmdTeleportCS*>(InPacket)));
			break;

		default:
			{
				UE_LOG(
					LogT4Gameplay,
					Error,
					TEXT("[SL:%u] OnSendPacket '%' failed. no implementation."),
					uint32(LayerType),
					*(InPacket->ToString())
				);
				bResult = false;
			}
			break;
	}
	return bResult;
}

bool FT4PacketHandlerCS::OnRecvPacket_Validation(const FT4PacketCtoS* InPacket)
{
	check(ET4LayerType::Max != LayerType);
	check(nullptr != InPacket);

	// TODO

	return true;
}

bool FT4PacketHandlerCS::OnRecvPacket(
	const FT4PacketCtoS* InPacket,
	IT4PlayerController* InSenderPC
)
{
	check(ET4LayerType::Max != LayerType);
	check(nullptr != InSenderPC);
	check(nullptr != GetPacketHandlerSC());
	check(nullptr != InPacket);
	bool bResult = true;
	const ET4PacketCtoS PacketCS = InPacket->PacketCS;
	switch (PacketCS)
	{
		// #27
		// #T4_ADD_PACKET_TAG
		case ET4PacketCtoS::MoveWarmup:
			HandleCS_MoveWarmup(static_cast<const FT4PacketMoveWarmupCS*>(InPacket));
			break;

		case ET4PacketCtoS::JumpWarmup:
			HandleCS_JumpWarmup(static_cast<const FT4PacketJumpWarmupCS*>(InPacket));
			break;

		case ET4PacketCtoS::Locked:
			HandleCS_Locked(static_cast<const FT4PacketLockedCS*>(InPacket));
			break;

		case ET4PacketCtoS::UnLocked:
			HandleCS_UnLocked(static_cast<const FT4PacketUnLockedCS*>(InPacket));
			break;

		case ET4PacketCtoS::Equip:
			HandleCS_Equip(static_cast<const FT4PacketEquipCS*>(InPacket));
			break;

		case ET4PacketCtoS::UnEquip:
			HandleCS_UnEquip(static_cast<const FT4PacketUnEquipCS*>(InPacket));
			break;

		case ET4PacketCtoS::Exchange: // #37
			HandleCS_Exchange(static_cast<const FT4PacketExchangeCS*>(InPacket));
			break;

		case ET4PacketCtoS::Attack:
			HandleCS_Attack(static_cast<const FT4PacketAttackCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdChangeWorld:
			HandleCS_CmdChangeWorld(static_cast<const FT4PacketCmdChangeWorldCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdPCEnter:
			HandleCS_CmdPCEnter(static_cast<const FT4PacketCmdPCEnterCS*>(InPacket), InSenderPC);
			break;

		case ET4PacketCtoS::CmdPCLeave:
			HandleCS_CmdPCLeave(static_cast<const FT4PacketCmdPCLeaveCS*>(InPacket), InSenderPC);
			break;

		case ET4PacketCtoS::CmdNPCEnter:
			HandleCS_CmdNPCEnter(static_cast<const FT4PacketCmdNPCEnterCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdNPCLeave:
			HandleCS_CmdNPCLeave(static_cast<const FT4PacketCmdNPCLeaveCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdFOEnter:
			HandleCS_CmdFOEnter(static_cast<const FT4PacketCmdFOEnterCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdFOLeave:
			HandleCS_CmdFOLeave(static_cast<const FT4PacketCmdFOLeaveCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdItemEnter:
			HandleCS_CmdItemEnter(static_cast<const FT4PacketCmdItemEnterCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdItemLeave:
			HandleCS_CmdItemLeave(static_cast<const FT4PacketCmdItemLeaveCS*>(InPacket));
			break;

		case ET4PacketCtoS::CmdTeleport:
			HandleCS_CmdTeleport(static_cast<const FT4PacketCmdTeleportCS*>(InPacket));
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
	return bResult;
}
