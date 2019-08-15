// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "T4GameInstance.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameFlow/index.html
 */
class IT4GameFramework;

UCLASS()
class T4FRAMEWORK_API UT4GameInstance : public UGameInstance
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

protected:
	IT4GameFramework* GameFramework;
};
