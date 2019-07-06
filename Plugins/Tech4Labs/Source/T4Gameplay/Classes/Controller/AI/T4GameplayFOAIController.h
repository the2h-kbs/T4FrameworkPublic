// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayTypes.h"
#include "T4Framework/Classes/Controller/AI/T4NPCAIController.h"
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4GameplayFOAIController.generated.h"

/**
  * WARN : AI Controller 는 서버에서만 사용하고, 클라리언트에서는 사용하지 않음에 유의할 것!
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
UCLASS()
class T4GAMEPLAY_API AT4GameplayFOAIController : public AT4NPCAIController
{
	GENERATED_UCLASS_BODY()

public:
	void TickActor(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

public:
	bool Bind(const FT4GameDataID& InFOGameDataID); // #31, #50

protected:
	void NotifyAIStart() override; // #50
	void NotifyAIEnd() override; // #50

private:
	FT4GameDataID FOGameDataID;

	ET4AIDataLoadState AIDataLoadState; // #50
};
