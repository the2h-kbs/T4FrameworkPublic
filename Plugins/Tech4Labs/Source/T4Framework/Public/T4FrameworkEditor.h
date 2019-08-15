// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h" // #63
#include "T4FrameworkEditor.generated.h"

/**
  * #60 : Only Editor
 */
enum ET4EditorGameDataType
{
	EdData_PC,
	EdData_NPC,
	EdData_Weapon,
	EdData_Costume,
	EdData_Skill,
	EdData_Effect,
};

UENUM()
enum class ET4EditorPlayRole : uint8
{
	Attacker,
	Defender,

	None UMETA(Hidden),
};

// #T4_ADD_SKILL_CONTENT_TAG 

class UT4ContiAsset;
USTRUCT()
struct FT4EditorSkillDataInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Name;

	UPROPERTY(VisibleAnywhere)
	ET4AttackType AttackType; // #63

	UPROPERTY(EditAnywhere)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere)
	float DurationSec;

	UPROPERTY(EditAnywhere)
	float ProjectileSpeed; // #63

	UPROPERTY(EditAnywhere)
	bool bMoveable;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;

public:
	FT4EditorSkillDataInfo()
	{
		Reset();
	}

	void Reset()
	{
		Name = NAME_None;
		AttackType = ET4AttackType::Melee;
		HitDelayTimeSec = 0.0f;
		DurationSec = 0.0f;;
		ProjectileSpeed = 0.0f; // #63
		bMoveable = false;
	}
};

USTRUCT()
struct FT4EditorEffectDataInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Name;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;

public:
	FT4EditorEffectDataInfo()
	{
		Reset();
	}

	void Reset()
	{
		Name = NAME_None;
	}
};


#if WITH_EDITOR
class FViewport;
class IT4EditorViewportClient
{
public:
	virtual ~IT4EditorViewportClient() {}

	virtual FViewport* GetViewport() const = 0; // #68

	virtual bool IsPreviewMode() const = 0;

	virtual void SetMouseLocation(const int InX, const int InY) = 0;
	virtual bool GetMousePosition(float& InLocationX, float& InLocationY) = 0;
	virtual bool GetMousePositionToWorldRay(FVector& OutStartPosition, FVector& OutStartDirection) = 0;

	virtual void ShowMouseCursor(bool InShow) = 0;
	virtual void SetMouseCursorType(EMouseCursor::Type InMouseCursorType) = 0;
};

class T4FRAMEWORK_API IT4EditorGameData // #60
{
public:
	virtual ~IT4EditorGameData() {}

	virtual void GetNameIDList(ET4EditorGameDataType InEditorGameDataType, TArray<FName>& OutDataNameIDs) = 0;

	virtual class UT4EntityAsset* GetEntityAsset(
		ET4EditorGameDataType InEditorGameDataType,
		const FName& InDataNameID
	) = 0;

	virtual bool GetSkillDataInfo(const FName& InSkillDataNameID, FT4EditorSkillDataInfo& OutSkillData) = 0;
	virtual bool GetEffectDataInfo(const FName& InEffectDataNameID, FT4EditorEffectDataInfo& OutEffectData) = 0;

	virtual bool DoNPCSpawn(const FName& InNPCDataNameID, const FVector& InSpawnLocation) = 0; // #60 : to player
	virtual bool DoEquipWeaponItem(const FName& InWeaponDataNameID, bool bInUnEquip) = 0; // #60 : to player
	virtual bool DoExchangeCostumeItem(const FName& InCostumeDataNameID) = 0; // #60 : to player
};

static const FName EditorSkillDataNameID = TEXT("EditorSkillDataNameID");
static const FName EditorEffectDataNameID = TEXT("EditorEffectDataNameID");

// #60 : 좀 더 일반화 할 것!
class UT4ContiAsset;
class T4FRAMEWORK_API IT4EditorGameplayAIHandler
{
public:
	virtual ~IT4EditorGameplayAIHandler() {}
	
	virtual bool IsAISystemDisabled() const = 0;

	virtual bool IsPlayerOverrideSkillData() const = 0; // #63

	virtual bool IsSandbackAttackable() const = 0;
	virtual bool IsSandbackOverrideSkillData() const = 0; // #63

	virtual FName GetOverrideSkillDataNameID() const = 0;
	virtual FName GetOverrideEffectDataNameID() const = 0;

	virtual const FT4EditorSkillDataInfo& GetOverrideSkillDataInfo() const = 0;
	virtual const FT4EditorEffectDataInfo& GetOverrideEffectDataInfo() const = 0;

	virtual const FSoftObjectPath& GetOverridePlayContiPath() const = 0;
};
#endif
