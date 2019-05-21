// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Framework/Public/T4Framework.h"
#include "Public/T4Gameplay.h"

/**
  * 
 */
class UT4GameplayControl;
class FT4GameplayCommand;
class FT4PacketHandlerSC;
class FT4PacketHandlerCS;
class FT4GameplayMain : public IT4GameplayHandler
{
public:
	explicit FT4GameplayMain();
	~FT4GameplayMain();

	// IT4GameplayHandler
	bool OnInitialize(ET4LayerType InLayerType) override;
	void OnFinalize() override;

	void OnReset() override;
	void OnStartPlay() override;
	void OnPlayerSpawned(IT4PlayerController* InOwnerPC) override;

	void OnProcess(float InDeltaTime) override;

	IT4PacketHandlerSC* GetPacketHandlerSC() override; // #27
	IT4PacketHandlerCS* GetPacketHandlerCS() override; // #27

#if WITH_EDITOR
	void SetInputControlLock(bool bLock) override; // #30
#endif

private:
	ET4LayerType LayerType;

	FT4GameplayCommand* GameplayCommand;
	TWeakObjectPtr<UT4GameplayControl> GameplayControl;

	FT4PacketHandlerSC* PacketHandlerSC; // #27
	FT4PacketHandlerCS* PacketHandlerCS; // #27

#if WITH_EDITOR
	bool bInputControlLocked; // #30
#endif
};
