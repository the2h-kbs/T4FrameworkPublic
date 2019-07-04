// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/Player/T4GameplayPlayerController.h"

#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "GameDB/T4GameDB.h"

#include "Gameplay/Server/T4ServerEventTranslator.h" // #49

#include "T4Core/Public/T4CoreLayer.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html
 */
AT4GameplayPlayerController::AT4GameplayPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
#if (WITH_EDITOR || WITH_SERVER_CODE)
	, bHitOverlapEventStarted(false)
	, HitOverlapEventDelayTimeSec(0.0f)
	, HitOverlapEventClearTimeLeft(0.0f)
#endif
{
	bReplicates = true;
}

void AT4GameplayPlayerController::NotifyAdvance(float InDeltaTime) // #49
{
#if (WITH_EDITOR || WITH_SERVER_CODE)
	if (bHitOverlapEventStarted)
	{
		IT4GameObject* OwnerGameObject = GetGameObject();
		if (nullptr != OwnerGameObject)
		{
			HitOverlapEventDelayTimeSec -= InDeltaTime;
			if (!OwnerGameObject->IsWeaponHitOverlapEventEnabled() && HitOverlapEventDelayTimeSec <= 0.0f)
			{
				GetGameObject()->BeginWeaponHitOverlapEvent(UseSkillDataID.RowName);
			}
			HitOverlapEventClearTimeLeft -= InDeltaTime;
			if (HitOverlapEventClearTimeLeft <= 0.0f)
			{
				OwnerGameObject->EndWeaponHitOverlapEvent();
				bHitOverlapEventStarted = false;
			}
		}
		else
		{
			bHitOverlapEventStarted = false;
		}
	}
#endif
}

bool AT4GameplayPlayerController::DoAttack(const FT4PacketAttackCS& InPacket) // #49
{
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameSkillData* SkillData = GameDB.GetGameData<FT4GameSkillData>(InPacket.SkillDataID);
	if (nullptr == SkillData)
	{
		return false;
	}
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	if (nullptr == PacketHandlerSC)
	{
		return false;
	}
	FT4PacketAttackSC NewPacketSC;
	NewPacketSC.ObjectID = GetGameObjectID();
	NewPacketSC.SkillDataID = InPacket.SkillDataID;
	NewPacketSC.UseDirection = InPacket.UseDirection; // #49
	check(NewPacketSC.ObjectID.IsValid());
	PacketHandlerSC->DoBroadcastPacketForServer(&NewPacketSC);

	bHitOverlapEventStarted = true;
	UseSkillDataID = InPacket.SkillDataID;
	HitOverlapEventDelayTimeSec = SkillData->RawData.HitDelayTimeSec;
	HitOverlapEventClearTimeLeft = SkillData->RawData.DurationSec;
	if (0.0f >= HitOverlapEventDelayTimeSec)
	{
		GetGameObject()->BeginWeaponHitOverlapEvent(UseSkillDataID.RowName);
	}
	return true;
}

bool AT4GameplayPlayerController::TakeEffectDamage(
	const FT4GameEffectDataID& InEffectDataID,
	const FT4ObjectID& InAttackerObjectID
) // #50
{
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	if (nullptr == PacketHandlerSC)
	{
		return false;
	}

	FT4PacketEffectSC NewPacketSC;
	NewPacketSC.ObjectID = GetGameObjectID();
	NewPacketSC.EffectDataID = InEffectDataID; // #48
	NewPacketSC.AttackerObjectID = InAttackerObjectID;
	check(NewPacketSC.ObjectID.IsValid());
	PacketHandlerSC->DoBroadcastPacketForServer(&NewPacketSC);

	return true;
}

void AT4GameplayPlayerController::NotifyPossess(
	IT4GameObject* InNewGameObject
) // #49
{
	if (nullptr == InNewGameObject)
	{
		return;
	}
#if (WITH_EDITOR || WITH_SERVER_CODE)
	FT4ServerGameObjectDelegates& GameObjectDelegates = InNewGameObject->GetServerDelegates();
	HitOverlapDelegateHandle = GameObjectDelegates.OnHitOverlap.AddUObject(
		this, 
		&AT4GameplayPlayerController::HandleOnHitOverlap
	);
#endif
}

void AT4GameplayPlayerController::NotifyUnPossess(
	IT4GameObject* InOldGameObject
) // #49
{
	if (nullptr == InOldGameObject)
	{
		return;
	}
#if (WITH_EDITOR || WITH_SERVER_CODE)
	if (HitOverlapDelegateHandle.IsValid())
	{
		HitOverlapDelegateHandle.Reset();
	}
#endif
}

void AT4GameplayPlayerController::HandleOnHitOverlap(
	const FName& InEventName,
	IT4GameObject* InHitGameObject,
	const FHitResult& InSweepResult
) // #49
{
#if (WITH_EDITOR || WITH_SERVER_CODE)
	if (nullptr == InHitGameObject)
	{
		return;
	}
	FT4GameSkillDataID SkillDataID(InEventName);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameSkillData* SkillData = GameDB.GetGameData<FT4GameSkillData>(SkillDataID);
	if (nullptr == SkillData)
	{
		return;
	}
	if (!SkillData->RawData.ResultEffectDataID.IsValid())
	{
		return;
	}
	GetServerEventTranslator().EventTakeEffectDamage(
		InHitGameObject->GetAController(),
		SkillData->RawData.ResultEffectDataID,
		GetGameObjectID()
	);
#endif
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
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
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

IT4PacketHandlerSC* AT4GameplayPlayerController::GetPacketHandlerSC() const // #49
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