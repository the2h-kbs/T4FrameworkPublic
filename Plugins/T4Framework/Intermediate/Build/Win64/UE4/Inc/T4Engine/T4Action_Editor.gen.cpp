// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4Action_Editor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Action_Editor() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorDirtyAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4EditorDirtyType();
// End Cross Module References
class UScriptStruct* FT4EditorDirtyAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorDirtyAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorDirtyAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4EditorDirtyAction"), sizeof(FT4EditorDirtyAction), Get_Z_Construct_UScriptStruct_FT4EditorDirtyAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4EditorDirtyAction>()
{
	return FT4EditorDirtyAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorDirtyAction(FT4EditorDirtyAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4EditorDirtyAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4EditorDirtyAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4EditorDirtyAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorDirtyAction")),new UScriptStruct::TCppStructOps<FT4EditorDirtyAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4EditorDirtyAction;
	struct Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DirtyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DirtyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Editor.h" },
		{ "ToolTip", "// #T4_ADD_ACTION_TAG" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorDirtyAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewProp_DirtyType_MetaData[] = {
		{ "Category", "T4EditorDirtyAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewProp_DirtyType = { "DirtyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorDirtyAction, DirtyType), Z_Construct_UEnum_T4Engine_ET4EditorDirtyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewProp_DirtyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewProp_DirtyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewProp_DirtyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewProp_DirtyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::NewProp_DirtyType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4EditorDirtyAction",
		sizeof(FT4EditorDirtyAction),
		alignof(FT4EditorDirtyAction),
		Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorDirtyAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorDirtyAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorDirtyAction"), sizeof(FT4EditorDirtyAction), Get_Z_Construct_UScriptStruct_FT4EditorDirtyAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorDirtyAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorDirtyAction_Hash() { return 2059747528U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
