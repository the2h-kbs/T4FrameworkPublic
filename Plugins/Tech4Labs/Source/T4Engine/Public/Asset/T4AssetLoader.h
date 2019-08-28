// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * http://api.unrealengine.com/KOR/Programming/Assets/AsyncLoading/
 */
class IT4AssetHandle;
class T4ENGINE_API FT4AssetLoader
{
public:
	explicit FT4AssetLoader();
	virtual ~FT4AssetLoader();

	virtual void Reset();

	void Load(
		const FSoftObjectPath& InAssetPath,
		bool bInSyncLoad,
		const TCHAR* InDebugString
	);

	bool IsLoadStarted() const { return bLoadStart; }
	bool IsLoadFailed() const;
	bool IsLoadCompleted() const;
	bool IsBinded() const;
	
	void SetBinded();
	bool CheckReset() const;

protected:
	bool bLoadStart;
	bool bSyncLoad;
	bool bBindComplated;
	IT4AssetHandle* LoadHandle;
	FName DebugToken;
};

class T4ENGINE_API FT4StaticMeshLoader : public FT4AssetLoader
{
public:
	explicit FT4StaticMeshLoader() {}
	virtual ~FT4StaticMeshLoader() { Reset(); }

	bool Process(UStaticMeshComponent* InMeshComponent);
};

class T4ENGINE_API FT4SkeletalMeshLoader : public FT4AssetLoader
{
public:
	explicit FT4SkeletalMeshLoader() {}
	virtual ~FT4SkeletalMeshLoader() { Reset(); }

	virtual bool Process(USkinnedMeshComponent* InMeshComponent);
};

class T4ENGINE_API FT4ParticleSystemLoader : public FT4AssetLoader
{
public:
	explicit FT4ParticleSystemLoader() {}
	virtual ~FT4ParticleSystemLoader() { Reset(); }

	bool Process(class UParticleSystemComponent* InParticleSystemComponent);

	class UParticleSystem* GetParticleSystem(); // #56
};

class T4ENGINE_API FT4MaterialLoader : public FT4AssetLoader // #54
{
public:
	explicit FT4MaterialLoader() {}
	virtual ~FT4MaterialLoader() { Reset(); }

	bool Process(class UDecalComponent* InDecalComponent);

	class UMaterialInterface* GetMaterialInterface();
};

class T4ENGINE_API FT4AnimBlueprintClassLoader : public FT4AssetLoader
{
public:
	explicit FT4AnimBlueprintClassLoader() {}
	virtual ~FT4AnimBlueprintClassLoader() { Reset(); }

	bool Process(USkeletalMeshComponent* InMeshComponent);
};

class T4ENGINE_API FT4AnimMontageLoader : public FT4AssetLoader
{
public:
	explicit FT4AnimMontageLoader() {}
	virtual ~FT4AnimMontageLoader() { Reset(); }

	class UAnimMontage* GetAnimMontage() const;
};

class T4ENGINE_API FT4BlendSpaceLoader : public FT4AssetLoader
{
public:
	explicit FT4BlendSpaceLoader() {}
	virtual ~FT4BlendSpaceLoader() { Reset(); }

	class UBlendSpaceBase* GetBlendSpace() const;
};

// #24
class T4ENGINE_API FT4ContiAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4ContiAssetLoader() {}
	virtual ~FT4ContiAssetLoader() { Reset(); }

	class UT4ContiAsset* GetContiAsset() const;
};

// #39
class T4ENGINE_API FT4AnimSetAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4AnimSetAssetLoader() {}
	virtual ~FT4AnimSetAssetLoader() { Reset(); }

	bool Process();

	class UT4AnimSetAsset* GetAnimSetAsset() const;
};

// #50
class T4ENGINE_API FT4BlackboardAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4BlackboardAssetLoader() {}
	~FT4BlackboardAssetLoader() { Reset(); }

	class UBlackboardData* GetBlackboardData() const;
};

// #50
class T4ENGINE_API FT4BehaviorTreeAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4BehaviorTreeAssetLoader() {}
	~FT4BehaviorTreeAssetLoader() { Reset(); }

	class UBehaviorTree* GetBehaviorTree() const;
};
