// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4Action_World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Action_World() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectLeaveAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectEnterAction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ChangePlayerAction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ChangeWorldAction();
// End Cross Module References
class UScriptStruct* FT4ObjectLeaveAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ObjectLeaveAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ObjectLeaveAction"), sizeof(FT4ObjectLeaveAction), Get_Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ObjectLeaveAction>()
{
	return FT4ObjectLeaveAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ObjectLeaveAction(FT4ObjectLeaveAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ObjectLeaveAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectLeaveAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectLeaveAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ObjectLeaveAction")),new UScriptStruct::TCppStructOps<FT4ObjectLeaveAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectLeaveAction;
	struct Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ObjectLeaveAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4ObjectLeaveAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectLeaveAction, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4WorldAction,
		&NewStructOps,
		"T4ObjectLeaveAction",
		sizeof(FT4ObjectLeaveAction),
		alignof(FT4ObjectLeaveAction),
		Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectLeaveAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ObjectLeaveAction"), sizeof(FT4ObjectLeaveAction), Get_Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ObjectLeaveAction_Hash() { return 2662067177U; }
class UScriptStruct* FT4ObjectEnterAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ObjectEnterAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ObjectEnterAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ObjectEnterAction"), sizeof(FT4ObjectEnterAction), Get_Z_Construct_UScriptStruct_FT4ObjectEnterAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ObjectEnterAction>()
{
	return FT4ObjectEnterAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ObjectEnterAction(FT4ObjectEnterAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ObjectEnterAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectEnterAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectEnterAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ObjectEnterAction")),new UScriptStruct::TCppStructOps<FT4ObjectEnterAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectEnterAction;
	struct Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentUniqueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ContentUniqueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntityAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ObjectEnterAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4ObjectEnterAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectEnterAction, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4ObjectEnterAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectEnterAction, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ContentUniqueName_MetaData[] = {
		{ "Category", "T4ObjectEnterAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ContentUniqueName = { "ContentUniqueName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectEnterAction, ContentUniqueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ContentUniqueName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ContentUniqueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityAssetPath_MetaData[] = {
		{ "Category", "T4ObjectEnterAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityAssetPath = { "EntityAssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectEnterAction, EntityAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityType_MetaData[] = {
		{ "Category", "T4ObjectEnterAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectEnterAction, EntityType), Z_Construct_UEnum_T4Core_ET4EntityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "T4ObjectEnterAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectEnterAction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4ObjectEnterAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectEnterAction, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ContentUniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_EntityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4WorldAction,
		&NewStructOps,
		"T4ObjectEnterAction",
		sizeof(FT4ObjectEnterAction),
		alignof(FT4ObjectEnterAction),
		Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectEnterAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ObjectEnterAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ObjectEnterAction"), sizeof(FT4ObjectEnterAction), Get_Z_Construct_UScriptStruct_FT4ObjectEnterAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ObjectEnterAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ObjectEnterAction_Hash() { return 1978725157U; }
class UScriptStruct* FT4ChangePlayerAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ChangePlayerAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ChangePlayerAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ChangePlayerAction"), sizeof(FT4ChangePlayerAction), Get_Z_Construct_UScriptStruct_FT4ChangePlayerAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ChangePlayerAction>()
{
	return FT4ChangePlayerAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ChangePlayerAction(FT4ChangePlayerAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ChangePlayerAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ChangePlayerAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ChangePlayerAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ChangePlayerAction")),new UScriptStruct::TCppStructOps<FT4ChangePlayerAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ChangePlayerAction;
	struct Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ChangePlayerAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4ChangePlayerAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ChangePlayerAction, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4WorldAction,
		&NewStructOps,
		"T4ChangePlayerAction",
		sizeof(FT4ChangePlayerAction),
		alignof(FT4ChangePlayerAction),
		Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ChangePlayerAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ChangePlayerAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ChangePlayerAction"), sizeof(FT4ChangePlayerAction), Get_Z_Construct_UScriptStruct_FT4ChangePlayerAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ChangePlayerAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ChangePlayerAction_Hash() { return 4068243871U; }
class UScriptStruct* FT4ChangeWorldAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ChangeWorldAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ChangeWorldAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ChangeWorldAction"), sizeof(FT4ChangeWorldAction), Get_Z_Construct_UScriptStruct_FT4ChangeWorldAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ChangeWorldAction>()
{
	return FT4ChangeWorldAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ChangeWorldAction(FT4ChangeWorldAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ChangeWorldAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ChangeWorldAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ChangeWorldAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ChangeWorldAction")),new UScriptStruct::TCppStructOps<FT4ChangeWorldAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ChangeWorldAction;
	struct Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntityAssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
		{ "ToolTip", "// #T4_ADD_ACTION_TAG" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ChangeWorldAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::NewProp_EntityAssetPath_MetaData[] = {
		{ "Category", "T4ChangeWorldAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::NewProp_EntityAssetPath = { "EntityAssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ChangeWorldAction, EntityAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::NewProp_EntityAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::NewProp_EntityAssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::NewProp_EntityAssetPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4WorldAction,
		&NewStructOps,
		"T4ChangeWorldAction",
		sizeof(FT4ChangeWorldAction),
		alignof(FT4ChangeWorldAction),
		Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ChangeWorldAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ChangeWorldAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ChangeWorldAction"), sizeof(FT4ChangeWorldAction), Get_Z_Construct_UScriptStruct_FT4ChangeWorldAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ChangeWorldAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ChangeWorldAction_Hash() { return 1816067218U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
