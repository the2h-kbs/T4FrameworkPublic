// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4Action_Root.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Action_Root() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RootAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RotationAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionHierarchyInfo();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActionType();
// End Cross Module References
class UScriptStruct* FT4RootAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4RootAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4RootAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4RootAction"), sizeof(FT4RootAction), Get_Z_Construct_UScriptStruct_FT4RootAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4RootAction>()
{
	return FT4RootAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4RootAction(FT4RootAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4RootAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4RootAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4RootAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4RootAction")),new UScriptStruct::TCppStructOps<FT4RootAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4RootAction;
	struct Z_Construct_UScriptStruct_FT4RootAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotationActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchyMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HierarchyMap;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HierarchyMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HierarchyMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RootAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4RootAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4RootAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_ParticleActions_MetaData[] = {
		{ "Category", "T4RootAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_ParticleActions = { "ParticleActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RootAction, ParticleActions), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_ParticleActions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_ParticleActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_ParticleActions_Inner = { "ParticleActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ParticleAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_AnimationActions_MetaData[] = {
		{ "Category", "T4RootAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_AnimationActions = { "AnimationActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RootAction, AnimationActions), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_AnimationActions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_AnimationActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_AnimationActions_Inner = { "AnimationActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimationAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_RotationActions_MetaData[] = {
		{ "Category", "T4RootAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_RotationActions = { "RotationActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RootAction, RotationActions), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_RotationActions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_RotationActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_RotationActions_Inner = { "RotationActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4RotationAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap_MetaData[] = {
		{ "Category", "T4RootAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap = { "HierarchyMap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RootAction, HierarchyMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap_Key_KeyProp = { "HierarchyMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap_ValueProp = { "HierarchyMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4ActionHierarchyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4RootAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_ParticleActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_ParticleActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_AnimationActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_AnimationActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_RotationActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_RotationActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RootAction_Statics::NewProp_HierarchyMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4RootAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4RootAction",
		sizeof(FT4RootAction),
		alignof(FT4RootAction),
		Z_Construct_UScriptStruct_FT4RootAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RootAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RootAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RootAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4RootAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4RootAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4RootAction"), sizeof(FT4RootAction), Get_Z_Construct_UScriptStruct_FT4RootAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4RootAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4RootAction_Hash() { return 1239455119U; }
class UScriptStruct* FT4ActionHierarchyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionHierarchyInfo"), sizeof(FT4ActionHierarchyInfo), Get_Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionHierarchyInfo>()
{
	return FT4ActionHierarchyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionHierarchyInfo(FT4ActionHierarchyInfo::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionHierarchyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionHierarchyInfo
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionHierarchyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionHierarchyInfo")),new UScriptStruct::TCppStructOps<FT4ActionHierarchyInfo>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionHierarchyInfo;
	struct Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentHierarchyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentHierarchyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
		{ "ToolTip", "#24" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionHierarchyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionArrayIndex_MetaData[] = {
		{ "Category", "T4ActionHierarchyInfo" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionArrayIndex = { "ActionArrayIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionHierarchyInfo, ActionArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionArrayIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "T4ActionHierarchyInfo" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionHierarchyInfo, ActionType), Z_Construct_UEnum_T4Engine_ET4ActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ParentHierarchyIndex_MetaData[] = {
		{ "Category", "T4ActionHierarchyInfo" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ParentHierarchyIndex = { "ParentHierarchyIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionHierarchyInfo, ParentHierarchyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ParentHierarchyIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ParentHierarchyIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ActionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::NewProp_ParentHierarchyIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionHierarchyInfo",
		sizeof(FT4ActionHierarchyInfo),
		alignof(FT4ActionHierarchyInfo),
		Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionHierarchyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionHierarchyInfo"), sizeof(FT4ActionHierarchyInfo), Get_Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionHierarchyInfo_Hash() { return 1975502636U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
