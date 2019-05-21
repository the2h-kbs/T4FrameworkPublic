// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameplayMain.h"

#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "Network/Protocol/T4PacketSC_Move.h"

#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  *
 */
bool FT4GameplayMain::Initialize()
{
	// #42
	FT4FrameworkDelegates::OnRegisterDefaultGameplay.BindRaw(
		this, 
		&FT4GameplayMain::HandleRegisterDefaultGameplay
	);

	// #42
	FT4FrameworkDelegates::OnCallbackMoveTo.BindRaw(
		this, 
		&FT4GameplayMain::HandleCallbackMoveTo
	);

	return true;
}

void FT4GameplayMain::Finalize()
{
}

void FT4GameplayMain::HandleRegisterDefaultGameplay(IT4GameFramework* InGameFramework)
{
	// #42
	FT4GameplayInstance* NewGameplayMain = new FT4GameplayInstance;
	check(nullptr != NewGameplayMain);
	InGameFramework->RegisterGameplayHandler(NewGameplayMain); // #42 : GameFramework 소멸 시 인스턴스가 소멸된다!!
}

void FT4GameplayMain::HandleCallbackMoveTo(
	ET4LayerType InLayerType,
	const FT4ObjectID& InObjectID,
	const FVector& InMoveVelocity
)
{
	// #42, #34
	IT4GameFramework* GameFramework = T4FrameworkGet(InLayerType);
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
	check(nullptr != PacketHandlerSC);
	float MoveSpeed = 0.0f;
	if (!InMoveVelocity.IsNearlyZero())
	{
		MoveSpeed = InMoveVelocity.Size();
	}
	FT4PacketMoveToSC NewPacketSC;
	NewPacketSC.ObjectID = InObjectID;
	NewPacketSC.MoveSpeed = MoveSpeed;
	NewPacketSC.MoveDirection = InMoveVelocity / MoveSpeed;
	PacketHandlerSC->OnBroadcastPacket(&NewPacketSC);
}

static FT4GameplayMain GT4GameplayMain;
FT4GameplayMain& GetGameplayMain()
{
	return GT4GameplayMain;
}