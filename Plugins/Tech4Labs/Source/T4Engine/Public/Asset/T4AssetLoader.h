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

class UMaterialInterface;
class UDecalComponent;
class UAnimMontage;
class UBlendSpaceBase;
class UPhysicsAsset;
class UParticleSystem;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class UT4ContiAsset;
class UT4AnimSetAsset;
class UBlackboardData;
class UBehaviorTree;

class T4ENGINE_API FT4MaterialLoader : public FT4AssetLoader // #54
{
public:
	explicit FT4MaterialLoader() {}
	virtual ~FT4MaterialLoader() { Reset(); }

	bool Process(UDecalComponent* InDecalComponent);

	UMaterialInterface* GetMaterialInterface();
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

	UAnimMontage* GetAnimMontage() const;
};

class T4ENGINE_API FT4BlendSpaceLoader : public FT4AssetLoader
{
public:
	explicit FT4BlendSpaceLoader() {}
	virtual ~FT4BlendSpaceLoader() { Reset(); }

	UBlendSpaceBase* GetBlendSpace() const;
};

// #76
class T4ENGINE_API FT4PhysicsAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4PhysicsAssetLoader() {}
	virtual ~FT4PhysicsAssetLoader() { Reset(); }

	bool Process(USkeletalMeshComponent* InMeshComponent);

	UPhysicsAsset* GetPhysicsAsset();
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

	bool Process(UParticleSystemComponent* InParticleSystemComponent);

	UParticleSystem* GetParticleSystem(); // #56
};

// #24
class T4ENGINE_API FT4ContiAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4ContiAssetLoader() {}
	virtual ~FT4ContiAssetLoader() { Reset(); }

	UT4ContiAsset* GetContiAsset() const;
};

// #39
class T4ENGINE_API FT4AnimSetAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4AnimSetAssetLoader() {}
	virtual ~FT4AnimSetAssetLoader() { Reset(); }

	bool Process();

	UT4AnimSetAsset* GetAnimSetAsset() const;
};

// #50
class T4ENGINE_API FT4BlackboardAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4BlackboardAssetLoader() {}
	~FT4BlackboardAssetLoader() { Reset(); }

	UBlackboardData* GetBlackboardData() const;
};

// #50
class T4ENGINE_API FT4BehaviorTreeAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4BehaviorTreeAssetLoader() {}
	~FT4BehaviorTreeAssetLoader() { Reset(); }

	UBehaviorTree* GetBehaviorTree() const;
};
