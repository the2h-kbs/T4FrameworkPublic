// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "Public/T4GameplayDataTypes.h"
#include "Public/T4Gameplay.h"

/**
  *
 */
class AController;
class FT4ServerEventTranslator
{
public:
	explicit FT4ServerEventTranslator();
	~FT4ServerEventTranslator();

	void EventTakeEffectDamage(
		AController* InController,
		const FT4GameEffectDataID& InEffectDataID,
		const FT4ObjectID& InAttackerObjectID
	); // #49
};

FT4ServerEventTranslator& GetServerEventTranslator();