// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayTypes.h"
#include "T4Framework/Classes//AI/T4NPCAIController.h"
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4GameplayItemAIController.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
UCLASS()
class T4GAMEPLAY_API AT4GameplayItemAIController : public AT4NPCAIController
{
	GENERATED_UCLASS_BODY()

public:
	void TickActor(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

public:
	bool Bind(const FT4GameDataID& InItemGameDataID); // #31, #50

protected:
	void NotifyAIStart() override; // #50
	void NotifyAIEnd() override; // #50

private:
	FT4GameDataID ItemGameDataID;

	ET4AIDataLoadState AIDataLoadState; // #50
};
