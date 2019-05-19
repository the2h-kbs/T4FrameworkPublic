// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4Action_Common.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Action_Common() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StopAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContiAction();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ContiAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FT4StopAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4StopAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4StopAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4StopAction"), sizeof(FT4StopAction), Get_Z_Construct_UScriptStruct_FT4StopAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4StopAction>()
{
	return FT4StopAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4StopAction(FT4StopAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4StopAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4StopAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4StopAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4StopAction")),new UScriptStruct::TCppStructOps<FT4StopAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4StopAction;
	struct Z_Construct_UScriptStruct_FT4StopAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoPrimaryKeyDestroy_MetaData[];
#endif
		static void NewProp_bNoPrimaryKeyDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoPrimaryKeyDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StopAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Common.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4StopAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4StopAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StopAction_Statics::NewProp_bNoPrimaryKeyDestroy_MetaData[] = {
		{ "Category", "T4StopAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StopAction_Statics::NewProp_bNoPrimaryKeyDestroy_SetBit(void* Obj)
	{
		((FT4StopAction*)Obj)->bNoPrimaryKeyDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StopAction_Statics::NewProp_bNoPrimaryKeyDestroy = { "bNoPrimaryKeyDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StopAction), &Z_Construct_UScriptStruct_FT4StopAction_Statics::NewProp_bNoPrimaryKeyDestroy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StopAction_Statics::NewProp_bNoPrimaryKeyDestroy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StopAction_Statics::NewProp_bNoPrimaryKeyDestroy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4StopAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StopAction_Statics::NewProp_bNoPrimaryKeyDestroy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4StopAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4StopAction",
		sizeof(FT4StopAction),
		alignof(FT4StopAction),
		Z_Construct_UScriptStruct_FT4StopAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StopAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StopAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StopAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4StopAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4StopAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4StopAction"), sizeof(FT4StopAction), Get_Z_Construct_UScriptStruct_FT4StopAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4StopAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4StopAction_Hash() { return 3288158281U; }
class UScriptStruct* FT4ContiAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ContiAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContiAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ContiAction"), sizeof(FT4ContiAction), Get_Z_Construct_UScriptStruct_FT4ContiAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ContiAction>()
{
	return FT4ContiAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContiAction(FT4ContiAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ContiAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ContiAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ContiAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContiAction")),new UScriptStruct::TCppStructOps<FT4ContiAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ContiAction;
	struct Z_Construct_UScriptStruct_FT4ContiAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePreloading_MetaData[];
#endif
		static void NewProp_bUsePreloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePreloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContiAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ContiAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContiAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Common.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContiAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_bUsePreloading_MetaData[] = {
		{ "Category", "T4ContiAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Common.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_bUsePreloading_SetBit(void* Obj)
	{
		((FT4ContiAction*)Obj)->bUsePreloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_bUsePreloading = { "bUsePreloading", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContiAction), &Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_bUsePreloading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_bUsePreloading_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_bUsePreloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_ContiAsset_MetaData[] = {
		{ "Category", "T4ContiAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Common.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_ContiAsset = { "ContiAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContiAction, ContiAsset), Z_Construct_UClass_UT4ContiAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_ContiAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_ContiAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContiAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_bUsePreloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContiAction_Statics::NewProp_ContiAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContiAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4ContiAction",
		sizeof(FT4ContiAction),
		alignof(FT4ContiAction),
		Z_Construct_UScriptStruct_FT4ContiAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContiAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContiAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContiAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContiAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContiAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContiAction"), sizeof(FT4ContiAction), Get_Z_Construct_UScriptStruct_FT4ContiAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContiAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContiAction_Hash() { return 2678294049U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
