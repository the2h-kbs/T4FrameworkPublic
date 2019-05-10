// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "Engine/GameInstance.h"
#include "T4GameInstance.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameFlow/index.html
 */
class IT4GameFramework;

UCLASS()
class TECH4DEMO_API UT4GameInstance : public UGameInstance
{
	GENERATED_UCLASS_BODY()

public:
	void Init() override;
	void Shutdown() override;

#if WITH_EDITOR
	FGameInstancePIEResult StartPlayInEditorGameInstance(
		ULocalPlayer* LocalPlayer, 
		const FGameInstancePIEParameters& Params
	) override;
#endif

private:
	ET4SceneLayer SceneLayer;
	IT4GameFramework* GameFramework;
};
