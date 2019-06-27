// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Core/Public/T4CoreTypes.h"
#include "T4Engine/Public/T4EngineTypes.h"

/**
  * 
 */
class IT4GameFramework;
class FT4GameplayMain
{
public:
	FT4GameplayMain() {}
	~FT4GameplayMain() {}

	bool Initialize();
	void Finalize();

	void HandleOnRegisterDefaultGameplay(IT4GameFramework* InGameFramework);
#if WITH_EDITOR
	void HandleOnCreatePlayerController(IT4GameFramework* InGameFramework); // #42
#endif
	void HandleOnCallbackMoveTo(
		ET4LayerType InLayerType,
		const FT4ObjectID& InObjectID,
		const FVector& InMoveVelocity,
		bool bInForceMaxSpeed // #50
	); // #42, #34
};

FT4GameplayMain& GetGameplayMain();