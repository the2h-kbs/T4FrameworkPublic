// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Framework/Classes//AI/T4AIController.h"
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4GameplayItemAIController.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
UCLASS()
class T4GAMEPLAY_API AT4GameplayItemAIController : public AT4AIController
{
	GENERATED_UCLASS_BODY()

public:
	void TickActor(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

public:
	// IT4GameController
	ET4ControllerType GetType() const override { return ET4ControllerType::Item; }

public:
	bool Bind(const FT4GameDataID& InItemGameDataID); // #31, #50

protected:
	void Reset() override; // #50
	void AIStart() override; // #50

private:
	FT4GameDataID ItemGameDataID;

	ET4AIDataLoadState AIDataLoadState; // #50
};
