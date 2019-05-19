// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "GameFramework/GameModeBase.h"
#include "T4GameMode.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */

UCLASS()
class TECH4DEMO_API AT4GameMode : public AGameModeBase
{
	GENERATED_UCLASS_BODY()
	
public:
	void InitGame(
		const FString& MapName, 
		const FString& Options, 
		FString& ErrorMessage
	) override;

	void StartPlay() override;
	void StartToLeaveMap() override;

	void PreLogin(
		const FString& Options, 
		const FString& Address, 
		const FUniqueNetIdRepl& UniqueId, 
		FString& ErrorMessage
	) override;

	APlayerController* Login(
		UPlayer* NewPlayer, 
		ENetRole InRemoteRole, 
		const FString& Portal, 
		const FString& Options, 
		const FUniqueNetIdRepl& UniqueId, 
		FString& ErrorMessage
	) override;

	void Logout(AController* Exiting) override;

	void Reset() override;

public:
	ET4LayerType GetLayerType() const { return LayerType; }

private:
	ET4LayerType LayerType;
};
