// Copyright 2019 Tech4 Labs. All Rights Reserved.

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

	void HandleRegisterDefaultGameplay(IT4GameFramework* InGameFramework);
	void HandleCallbackMoveTo(
		ET4LayerType InLayerType,
		const FT4ObjectID& InObjectID,
		const FVector& InMoveVelocity
	); // #42, #34
};

FT4GameplayMain& GetGameplayMain();