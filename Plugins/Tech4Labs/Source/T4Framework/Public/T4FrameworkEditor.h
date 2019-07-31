// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
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
enum class ET4EditorPlayerRole : uint8
{
	Attacker,
	Defender,

	None UMETA(Hidden),
};

class UT4ContiAsset;
USTRUCT()
struct FT4EditorSkillDataInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Name;

	UPROPERTY(EditAnywhere)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere)
	float DurationSec;

	UPROPERTY(EditAnywhere)
	bool bMoveable;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;

public:
	FT4EditorSkillDataInfo()
		: Name(NAME_None)
		, HitDelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, bMoveable(false)
	{
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
		: Name(NAME_None)
	{
	}
};


#if WITH_EDITOR
class IT4EditorViewportClient
{
public:
	virtual ~IT4EditorViewportClient() {}

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
	virtual bool IsSandbackAttackable() const = 0;

	virtual FName GetOverrideSkillDataNameID() const = 0;
	virtual FName GetOverrideEffectDataNameID() const = 0;

	virtual const FT4EditorSkillDataInfo& GetOverrideSkillDataInfo() const = 0;
	virtual const FT4EditorEffectDataInfo& GetOverrideEffectDataInfo() const = 0;

	virtual const FSoftObjectPath& GetOverridePlayContiPath() const = 0;
};
#endif
