// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4Action_Move.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Action_Move() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RotationAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4RotationType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSpeedAction();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4MoveType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4TeleportToAction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4JumpToAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveToAction();
// End Cross Module References
class UScriptStruct* FT4RotationAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4RotationAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4RotationAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4RotationAction"), sizeof(FT4RotationAction), Get_Z_Construct_UScriptStruct_FT4RotationAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4RotationAction>()
{
	return FT4RotationAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4RotationAction(FT4RotationAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4RotationAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4RotationAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4RotationAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4RotationAction")),new UScriptStruct::TCppStructOps<FT4RotationAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4RotationAction;
	struct Z_Construct_UScriptStruct_FT4RotationAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4RotationAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewProp_RotationType_MetaData[] = {
		{ "Category", "T4RotationAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RotationAction, RotationType), Z_Construct_UEnum_T4Engine_ET4RotationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewProp_RotationType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewProp_RotationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4RotationAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewProp_RotationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RotationAction_Statics::NewProp_RotationType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4RotationAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4RotationAction",
		sizeof(FT4RotationAction),
		alignof(FT4RotationAction),
		Z_Construct_UScriptStruct_FT4RotationAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4RotationAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4RotationAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4RotationAction"), sizeof(FT4RotationAction), Get_Z_Construct_UScriptStruct_FT4RotationAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4RotationAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4RotationAction_Hash() { return 1983509685U; }
class UScriptStruct* FT4MoveSpeedAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveSpeedAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveSpeedAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveSpeedAction"), sizeof(FT4MoveSpeedAction), Get_Z_Construct_UScriptStruct_FT4MoveSpeedAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveSpeedAction>()
{
	return FT4MoveSpeedAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveSpeedAction(FT4MoveSpeedAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveSpeedAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSpeedAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSpeedAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveSpeedAction")),new UScriptStruct::TCppStructOps<FT4MoveSpeedAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSpeedAction;
	struct Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveSpeedAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "T4MoveSpeedAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSpeedAction, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveType_MetaData[] = {
		{ "Category", "T4MoveSpeedAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSpeedAction, MoveType), Z_Construct_UEnum_T4Engine_ET4MoveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::NewProp_MoveType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4MoveSpeedAction",
		sizeof(FT4MoveSpeedAction),
		alignof(FT4MoveSpeedAction),
		Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSpeedAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveSpeedAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveSpeedAction"), sizeof(FT4MoveSpeedAction), Get_Z_Construct_UScriptStruct_FT4MoveSpeedAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveSpeedAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveSpeedAction_Hash() { return 1572571951U; }
class UScriptStruct* FT4TeleportToAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4TeleportToAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4TeleportToAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4TeleportToAction"), sizeof(FT4TeleportToAction), Get_Z_Construct_UScriptStruct_FT4TeleportToAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4TeleportToAction>()
{
	return FT4TeleportToAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4TeleportToAction(FT4TeleportToAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4TeleportToAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4TeleportToAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4TeleportToAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4TeleportToAction")),new UScriptStruct::TCppStructOps<FT4TeleportToAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4TeleportToAction;
	struct Z_Construct_UScriptStruct_FT4TeleportToAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
		{ "ToolTip", "#34" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4TeleportToAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "T4TeleportToAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TeleportToAction, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::NewProp_TargetLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4TeleportToAction",
		sizeof(FT4TeleportToAction),
		alignof(FT4TeleportToAction),
		Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4TeleportToAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4TeleportToAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4TeleportToAction"), sizeof(FT4TeleportToAction), Get_Z_Construct_UScriptStruct_FT4TeleportToAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4TeleportToAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4TeleportToAction_Hash() { return 693018003U; }
class UScriptStruct* FT4JumpToAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4JumpToAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4JumpToAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4JumpToAction"), sizeof(FT4JumpToAction), Get_Z_Construct_UScriptStruct_FT4JumpToAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4JumpToAction>()
{
	return FT4JumpToAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4JumpToAction(FT4JumpToAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4JumpToAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4JumpToAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4JumpToAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4JumpToAction")),new UScriptStruct::TCppStructOps<FT4JumpToAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4JumpToAction;
	struct Z_Construct_UScriptStruct_FT4JumpToAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpToAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4JumpToAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4JumpToAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpToAction_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4JumpToAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4JumpToAction_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpToAction, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpToAction_Statics::NewProp_SectionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpToAction_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4JumpToAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4JumpToAction_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4JumpToAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4JumpToAction",
		sizeof(FT4JumpToAction),
		alignof(FT4JumpToAction),
		Z_Construct_UScriptStruct_FT4JumpToAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpToAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpToAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpToAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4JumpToAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4JumpToAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4JumpToAction"), sizeof(FT4JumpToAction), Get_Z_Construct_UScriptStruct_FT4JumpToAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4JumpToAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4JumpToAction_Hash() { return 3434337520U; }
class UScriptStruct* FT4MoveToAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveToAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveToAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveToAction"), sizeof(FT4MoveToAction), Get_Z_Construct_UScriptStruct_FT4MoveToAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveToAction>()
{
	return FT4MoveToAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveToAction(FT4MoveToAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveToAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveToAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveToAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveToAction")),new UScriptStruct::TCppStructOps<FT4MoveToAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveToAction;
	struct Z_Construct_UScriptStruct_FT4MoveToAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveToAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
		{ "ToolTip", "ET4ActionType::Rotation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveToAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "T4MoveToAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveToAction, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "T4MoveToAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveToAction, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveType_MetaData[] = {
		{ "Category", "T4MoveToAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveToAction, MoveType), Z_Construct_UEnum_T4Engine_ET4MoveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveToAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveToAction_Statics::NewProp_MoveType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveToAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4MoveToAction",
		sizeof(FT4MoveToAction),
		alignof(FT4MoveToAction),
		Z_Construct_UScriptStruct_FT4MoveToAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveToAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveToAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveToAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveToAction"), sizeof(FT4MoveToAction), Get_Z_Construct_UScriptStruct_FT4MoveToAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveToAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveToAction_Hash() { return 339286995U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
