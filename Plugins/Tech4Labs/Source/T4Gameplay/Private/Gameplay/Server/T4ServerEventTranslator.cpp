// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4ServerEventTranslator.h"

#include "GameDB/T4GameDB.h"

#include "Classes/Player/T4GameplayPlayerController.h"
#include "Classes/AI/T4GameplayCharacterAIController.h"

#include "T4GameplayInternal.h"

/**
  *
 */
FT4ServerEventTranslator::FT4ServerEventTranslator()
{
}

FT4ServerEventTranslator::~FT4ServerEventTranslator()
{
}

void FT4ServerEventTranslator::EventTakeEffectDamage(
	AController* InController,
	const FT4GameEffectDataID& InEffectDataID,
	const FT4ObjectID& InAttackerObjectID
) // #49
{
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameEffectData* EffectData = GameDB.GetGameData<FT4GameEffectData>(InEffectDataID);
	if (nullptr == EffectData)
	{
		return;
	}
	AT4GameplayCharacterAIController* NPCAIController = Cast<AT4GameplayCharacterAIController>(InController);
	if (nullptr != NPCAIController)
	{
		NPCAIController->TakeEffectDamage(InEffectDataID, InAttackerObjectID);
		return;
	}
	AT4GameplayPlayerController* PlayerController = Cast<AT4GameplayPlayerController>(InController);
	if (nullptr != PlayerController)
	{
		PlayerController->TakeEffectDamage(InEffectDataID, InAttackerObjectID);
		return;
	}
}

static FT4ServerEventTranslator GServerEventTranslator;
FT4ServerEventTranslator& GetServerEventTranslator()
{
	return GServerEventTranslator;
}