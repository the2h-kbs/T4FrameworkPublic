// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "T4NPCDefaultPawn.generated.h"

/**
  *
 */
UCLASS()
class T4FRAMEWORK_API AT4NPCDefaultPawn : public APawn
{
	GENERATED_UCLASS_BODY()

public:
	void Tick(float InDeltaSeconds) override;

	/** If true, actor is ticked even if TickType==LEVELTICK_ViewportsOnly	 */
	bool ShouldTickIfViewportsOnly() const override; // #17

	void EndPlay(const EEndPlayReason::Type InEndPlayReason) override;

protected:
	void BeginPlay() override;

protected:
	ET4SceneLayer SceneLayer;
};
