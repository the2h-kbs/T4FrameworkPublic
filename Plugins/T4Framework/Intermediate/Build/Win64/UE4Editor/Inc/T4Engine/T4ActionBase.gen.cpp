// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4ActionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionBase() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4LifecyclePolicy();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActionType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldAction();
// End Cross Module References
class UScriptStruct* FT4ObjectAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ObjectAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ObjectAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ObjectAction"), sizeof(FT4ObjectAction), Get_Z_Construct_UScriptStruct_FT4ObjectAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ObjectAction>()
{
	return FT4ObjectAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ObjectAction(FT4ObjectAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ObjectAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ObjectAction")),new UScriptStruct::TCppStructOps<FT4ObjectAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectAction;
	struct Z_Construct_UScriptStruct_FT4ObjectAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HierarchyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifecyclePolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LifecyclePolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LifecyclePolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ObjectAction>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "T4ObjectAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectAction, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DisplayName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_HierarchyIndex_MetaData[] = {
		{ "Category", "T4ObjectAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
		{ "ToolTip", "#24 : Composite \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa8!" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_HierarchyIndex = { "HierarchyIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectAction, HierarchyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_HierarchyIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_HierarchyIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "T4ObjectAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectAction, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DurationSec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DelayTimeSec_MetaData[] = {
		{ "Category", "T4ObjectAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DelayTimeSec = { "DelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectAction, DelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DelayTimeSec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_LifecyclePolicy_MetaData[] = {
		{ "Category", "T4ObjectAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_LifecyclePolicy = { "LifecyclePolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectAction, LifecyclePolicy), Z_Construct_UEnum_T4Engine_ET4LifecyclePolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_LifecyclePolicy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_LifecyclePolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_LifecyclePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionKey_MetaData[] = {
		{ "Category", "T4ObjectAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectAction, ActionKey), Z_Construct_UScriptStruct_FT4ActionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "T4ObjectAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectAction, ActionType), Z_Construct_UEnum_T4Engine_ET4ActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ObjectAction_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DisplayName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_HierarchyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_DelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_LifecyclePolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_LifecyclePolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectAction_Statics::NewProp_ActionType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ObjectAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ObjectAction",
		sizeof(FT4ObjectAction),
		alignof(FT4ObjectAction),
		Z_Construct_UScriptStruct_FT4ObjectAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ObjectAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ObjectAction"), sizeof(FT4ObjectAction), Get_Z_Construct_UScriptStruct_FT4ObjectAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ObjectAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ObjectAction_Hash() { return 2262387404U; }
class UScriptStruct* FT4WorldAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4WorldAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WorldAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4WorldAction"), sizeof(FT4WorldAction), Get_Z_Construct_UScriptStruct_FT4WorldAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4WorldAction>()
{
	return FT4WorldAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WorldAction(FT4WorldAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4WorldAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WorldAction")),new UScriptStruct::TCppStructOps<FT4WorldAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4WorldAction;
	struct Z_Construct_UScriptStruct_FT4WorldAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WorldAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "T4WorldAction" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldAction, ActionType), Z_Construct_UEnum_T4Engine_ET4ActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewProp_ActionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewProp_ActionType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WorldAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewProp_ActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldAction_Statics::NewProp_ActionType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WorldAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4WorldAction",
		sizeof(FT4WorldAction),
		alignof(FT4WorldAction),
		Z_Construct_UScriptStruct_FT4WorldAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WorldAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WorldAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WorldAction"), sizeof(FT4WorldAction), Get_Z_Construct_UScriptStruct_FT4WorldAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WorldAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WorldAction_Hash() { return 2778695035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
