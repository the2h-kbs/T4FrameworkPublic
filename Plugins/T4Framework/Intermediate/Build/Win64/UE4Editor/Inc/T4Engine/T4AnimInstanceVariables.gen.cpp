// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimInstanceVariables() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4IKAnimVariables();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementAnimVariables();
// End Cross Module References
class UScriptStruct* FT4IKAnimVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4IKAnimVariables, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4IKAnimVariables"), sizeof(FT4IKAnimVariables), Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4IKAnimVariables>()
{
	return FT4IKAnimVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4IKAnimVariables(FT4IKAnimVariables::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4IKAnimVariables"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4IKAnimVariables
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4IKAnimVariables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4IKAnimVariables")),new UScriptStruct::TCppStructOps<FT4IKAnimVariables>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4IKAnimVariables;
	struct Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_COMOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootJointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootJointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootJointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootJointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedFootIK_MetaData[];
#endif
		static void NewProp_bUsedFootIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedFootIK;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4IKAnimVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset = { "COMOffset", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, COMOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget = { "RightFootJointTarget", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, RightFootJointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget = { "LeftFootJointTarget", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, LeftFootJointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset = { "RightFootOffset", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, RightFootOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset = { "LeftFootOffset", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, LeftFootOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_SetBit(void* Obj)
	{
		((FT4IKAnimVariables*)Obj)->bUsedFootIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK = { "bUsedFootIK", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4IKAnimVariables), &Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4IKAnimVariables",
		sizeof(FT4IKAnimVariables),
		alignof(FT4IKAnimVariables),
		Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4IKAnimVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4IKAnimVariables"), sizeof(FT4IKAnimVariables), Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash() { return 4126968452U; }
class UScriptStruct* FT4MovementAnimVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovementAnimVariables, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MovementAnimVariables"), sizeof(FT4MovementAnimVariables), Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MovementAnimVariables>()
{
	return FT4MovementAnimVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovementAnimVariables(FT4MovementAnimVariables::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MovementAnimVariables"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MovementAnimVariables
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MovementAnimVariables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovementAnimVariables")),new UScriptStruct::TCppStructOps<FT4MovementAnimVariables>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MovementAnimVariables;
	struct Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedLockOn_MetaData[];
#endif
		static void NewProp_bUsedLockOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedLockOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAngleYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAngleYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
		{ "ToolTip", "https://docs.unrealengine.com/ko-kr/Engine/Animation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovementAnimVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_bUsedLockOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_bUsedLockOn_SetBit(void* Obj)
	{
		((FT4MovementAnimVariables*)Obj)->bUsedLockOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_bUsedLockOn = { "bUsedLockOn", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4MovementAnimVariables), &Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_bUsedLockOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_bUsedLockOn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_bUsedLockOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentAngleYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentAngleYaw = { "CurrentAngleYaw", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, CurrentAngleYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentAngleYaw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentAngleYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4AnimInstanceVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, CurrentSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_bUsedLockOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentAngleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_CurrentSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4MovementAnimVariables",
		sizeof(FT4MovementAnimVariables),
		alignof(FT4MovementAnimVariables),
		Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovementAnimVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovementAnimVariables"), sizeof(FT4MovementAnimVariables), Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash() { return 3993931794U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
