// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4Action_Visual.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Action_Visual() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationAction();
// End Cross Module References
class UScriptStruct* FT4ParticleAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ParticleAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ParticleAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ParticleAction"), sizeof(FT4ParticleAction), Get_Z_Construct_UScriptStruct_FT4ParticleAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ParticleAction>()
{
	return FT4ParticleAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ParticleAction(FT4ParticleAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ParticleAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ParticleAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ParticleAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ParticleAction")),new UScriptStruct::TCppStructOps<FT4ParticleAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ParticleAction;
	struct Z_Construct_UScriptStruct_FT4ParticleAction_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParticleAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneOrSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneOrSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Visual.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ParticleAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_bUsePreloading_MetaData[] = {
		{ "Category", "T4ParticleAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Visual.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_bUsePreloading_SetBit(void* Obj)
	{
		((FT4ParticleAction*)Obj)->bUsePreloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_bUsePreloading = { "bUsePreloading", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ParticleAction), &Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_bUsePreloading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_bUsePreloading_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_bUsePreloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_ParticleAsset_MetaData[] = {
		{ "Category", "T4ParticleAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Visual.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_ParticleAsset = { "ParticleAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleAction, ParticleAsset), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_ParticleAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_ParticleAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_BoneOrSocketName_MetaData[] = {
		{ "Category", "T4ParticleAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Visual.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_BoneOrSocketName = { "BoneOrSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleAction, BoneOrSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_BoneOrSocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_BoneOrSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ParticleAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_bUsePreloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_ParticleAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleAction_Statics::NewProp_BoneOrSocketName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ParticleAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4ParticleAction",
		sizeof(FT4ParticleAction),
		alignof(FT4ParticleAction),
		Z_Construct_UScriptStruct_FT4ParticleAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ParticleAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ParticleAction"), sizeof(FT4ParticleAction), Get_Z_Construct_UScriptStruct_FT4ParticleAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ParticleAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ParticleAction_Hash() { return 2422773956U; }
class UScriptStruct* FT4AnimationAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimationAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimationAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4AnimationAction"), sizeof(FT4AnimationAction), Get_Z_Construct_UScriptStruct_FT4AnimationAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4AnimationAction>()
{
	return FT4AnimationAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimationAction(FT4AnimationAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4AnimationAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4AnimationAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4AnimationAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimationAction")),new UScriptStruct::TCppStructOps<FT4AnimationAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4AnimationAction;
	struct Z_Construct_UScriptStruct_FT4AnimationAction_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Visual.h" },
		{ "ToolTip", "ET4ActionType::Animation\nET4ActionType::Particle" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimationAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimationAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationAction_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4AnimationAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Visual.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimationAction_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationAction, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationAction_Statics::NewProp_SectionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAction_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimationAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationAction_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimationAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4AnimationAction",
		sizeof(FT4AnimationAction),
		alignof(FT4AnimationAction),
		Z_Construct_UScriptStruct_FT4AnimationAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimationAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimationAction"), sizeof(FT4AnimationAction), Get_Z_Construct_UScriptStruct_FT4AnimationAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimationAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimationAction_Hash() { return 1322358018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
