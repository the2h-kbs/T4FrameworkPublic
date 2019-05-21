// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Network/Protocol/T4PacketSC_Move.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketSC_Move() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnLockedSC();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketStoC();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketLockedSC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketTeleportToSC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketJumpToSC();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketMoveToSC();
// End Cross Module References
class UScriptStruct* FT4PacketUnLockedSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketUnLockedSC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketUnLockedSC"), sizeof(FT4PacketUnLockedSC), Get_Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketUnLockedSC>()
{
	return FT4PacketUnLockedSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketUnLockedSC(FT4PacketUnLockedSC::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketUnLockedSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketUnLockedSC
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketUnLockedSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketUnLockedSC")),new UScriptStruct::TCppStructOps<FT4PacketUnLockedSC>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketUnLockedSC;
	struct Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketUnLockedSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketUnLockedSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketUnLockedSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketUnLockedSC",
		sizeof(FT4PacketUnLockedSC),
		alignof(FT4PacketUnLockedSC),
		Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnLockedSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketUnLockedSC"), sizeof(FT4PacketUnLockedSC), Get_Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnLockedSC_Hash() { return 351558620U; }
class UScriptStruct* FT4PacketLockedSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketLockedSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketLockedSC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketLockedSC"), sizeof(FT4PacketLockedSC), Get_Z_Construct_UScriptStruct_FT4PacketLockedSC_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketLockedSC>()
{
	return FT4PacketLockedSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketLockedSC(FT4PacketLockedSC::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketLockedSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketLockedSC
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketLockedSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketLockedSC")),new UScriptStruct::TCppStructOps<FT4PacketLockedSC>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketLockedSC;
	struct Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketLockedSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_LockedRotation_MetaData[] = {
		{ "Category", "T4PacketLockedSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_LockedRotation = { "LockedRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketLockedSC, LockedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_LockedRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_LockedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketLockedSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketLockedSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_LockedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketLockedSC",
		sizeof(FT4PacketLockedSC),
		alignof(FT4PacketLockedSC),
		Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketLockedSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketLockedSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketLockedSC"), sizeof(FT4PacketLockedSC), Get_Z_Construct_UScriptStruct_FT4PacketLockedSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketLockedSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketLockedSC_Hash() { return 4270327702U; }
class UScriptStruct* FT4PacketTeleportToSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketTeleportToSC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketTeleportToSC"), sizeof(FT4PacketTeleportToSC), Get_Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketTeleportToSC>()
{
	return FT4PacketTeleportToSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketTeleportToSC(FT4PacketTeleportToSC::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketTeleportToSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketTeleportToSC
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketTeleportToSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketTeleportToSC")),new UScriptStruct::TCppStructOps<FT4PacketTeleportToSC>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketTeleportToSC;
	struct Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketTeleportToSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "T4PacketTeleportToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketTeleportToSC, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketTeleportToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketTeleportToSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketTeleportToSC",
		sizeof(FT4PacketTeleportToSC),
		alignof(FT4PacketTeleportToSC),
		Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketTeleportToSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketTeleportToSC"), sizeof(FT4PacketTeleportToSC), Get_Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketTeleportToSC_Hash() { return 3363502292U; }
class UScriptStruct* FT4PacketJumpToSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketJumpToSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketJumpToSC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketJumpToSC"), sizeof(FT4PacketJumpToSC), Get_Z_Construct_UScriptStruct_FT4PacketJumpToSC_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketJumpToSC>()
{
	return FT4PacketJumpToSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketJumpToSC(FT4PacketJumpToSC::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketJumpToSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketJumpToSC
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketJumpToSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketJumpToSC")),new UScriptStruct::TCppStructOps<FT4PacketJumpToSC>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketJumpToSC;
	struct Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketJumpToSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpSpeed_MetaData[] = {
		{ "Category", "T4PacketJumpToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpSpeed = { "JumpSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketJumpToSC, JumpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpDirection_MetaData[] = {
		{ "Category", "T4PacketJumpToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpDirection = { "JumpDirection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketJumpToSC, JumpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketJumpToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketJumpToSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_JumpDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketJumpToSC",
		sizeof(FT4PacketJumpToSC),
		alignof(FT4PacketJumpToSC),
		Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketJumpToSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketJumpToSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketJumpToSC"), sizeof(FT4PacketJumpToSC), Get_Z_Construct_UScriptStruct_FT4PacketJumpToSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketJumpToSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketJumpToSC_Hash() { return 2960973702U; }
class UScriptStruct* FT4PacketMoveToSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketMoveToSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketMoveToSC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketMoveToSC"), sizeof(FT4PacketMoveToSC), Get_Z_Construct_UScriptStruct_FT4PacketMoveToSC_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketMoveToSC>()
{
	return FT4PacketMoveToSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketMoveToSC(FT4PacketMoveToSC::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketMoveToSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketMoveToSC
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketMoveToSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketMoveToSC")),new UScriptStruct::TCppStructOps<FT4PacketMoveToSC>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketMoveToSC;
	struct Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
		{ "ToolTip", "ET4PacketStoC::Locked\nET4PacketStoC::UnLocked" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketMoveToSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "T4PacketMoveToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMoveToSC, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "T4PacketMoveToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMoveToSC, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketMoveToSC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketSC_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMoveToSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_MoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketMoveToSC",
		sizeof(FT4PacketMoveToSC),
		alignof(FT4PacketMoveToSC),
		Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketMoveToSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketMoveToSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketMoveToSC"), sizeof(FT4PacketMoveToSC), Get_Z_Construct_UScriptStruct_FT4PacketMoveToSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketMoveToSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketMoveToSC_Hash() { return 3510180128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
