// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/Protocol/T4PacketCS_Move.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketCS_Move() {}
// Cross Module References
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnLockedCS();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCtoS();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketLockedCS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS();
// End Cross Module References
class UScriptStruct* FT4PacketUnLockedCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketUnLockedCS, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketUnLockedCS"), sizeof(FT4PacketUnLockedCS), Get_Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketUnLockedCS>()
{
	return FT4PacketUnLockedCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketUnLockedCS(FT4PacketUnLockedCS::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketUnLockedCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnLockedCS
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnLockedCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketUnLockedCS")),new UScriptStruct::TCppStructOps<FT4PacketUnLockedCS>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnLockedCS;
	struct Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketUnLockedCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketUnLockedCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketUnLockedCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketUnLockedCS",
		sizeof(FT4PacketUnLockedCS),
		alignof(FT4PacketUnLockedCS),
		Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnLockedCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketUnLockedCS"), sizeof(FT4PacketUnLockedCS), Get_Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnLockedCS_Hash() { return 3806752587U; }
class UScriptStruct* FT4PacketLockedCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketLockedCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketLockedCS, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketLockedCS"), sizeof(FT4PacketLockedCS), Get_Z_Construct_UScriptStruct_FT4PacketLockedCS_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketLockedCS>()
{
	return FT4PacketLockedCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketLockedCS(FT4PacketLockedCS::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketLockedCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketLockedCS
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketLockedCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketLockedCS")),new UScriptStruct::TCppStructOps<FT4PacketLockedCS>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketLockedCS;
	struct Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketLockedCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_LockedRotation_MetaData[] = {
		{ "Category", "T4PacketLockedCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_LockedRotation = { "LockedRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketLockedCS, LockedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_LockedRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_LockedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketLockedCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketLockedCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_LockedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketLockedCS",
		sizeof(FT4PacketLockedCS),
		alignof(FT4PacketLockedCS),
		Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketLockedCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketLockedCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketLockedCS"), sizeof(FT4PacketLockedCS), Get_Z_Construct_UScriptStruct_FT4PacketLockedCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketLockedCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketLockedCS_Hash() { return 2194878371U; }
class UScriptStruct* FT4PacketJumpWarmupCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketJumpWarmupCS"), sizeof(FT4PacketJumpWarmupCS), Get_Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketJumpWarmupCS>()
{
	return FT4PacketJumpWarmupCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketJumpWarmupCS(FT4PacketJumpWarmupCS::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketJumpWarmupCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketJumpWarmupCS
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketJumpWarmupCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketJumpWarmupCS")),new UScriptStruct::TCppStructOps<FT4PacketJumpWarmupCS>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketJumpWarmupCS;
	struct Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketJumpWarmupCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_JumpDirection_MetaData[] = {
		{ "Category", "T4PacketJumpWarmupCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_JumpDirection = { "JumpDirection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketJumpWarmupCS, JumpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_JumpDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_JumpDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketJumpWarmupCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketJumpWarmupCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_JumpDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketJumpWarmupCS",
		sizeof(FT4PacketJumpWarmupCS),
		alignof(FT4PacketJumpWarmupCS),
		Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketJumpWarmupCS"), sizeof(FT4PacketJumpWarmupCS), Get_Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketJumpWarmupCS_Hash() { return 3814541820U; }
class UScriptStruct* FT4PacketMoveWarmupCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketMoveWarmupCS"), sizeof(FT4PacketMoveWarmupCS), Get_Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketMoveWarmupCS>()
{
	return FT4PacketMoveWarmupCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketMoveWarmupCS(FT4PacketMoveWarmupCS::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketMoveWarmupCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketMoveWarmupCS
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketMoveWarmupCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketMoveWarmupCS")),new UScriptStruct::TCppStructOps<FT4PacketMoveWarmupCS>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketMoveWarmupCS;
	struct Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
		{ "ToolTip", "// #T4_ADD_PACKET_TAG\n// ET4PacketCtoS::MoveWarmup\n// ET4PacketCtoS::JumpWarmup\n// ET4PacketCtoS::Locked\n// ET4PacketCtoS::UnLocked" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketMoveWarmupCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "T4PacketMoveWarmupCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMoveWarmupCS, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_MoveDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_MoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketMoveWarmupCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMoveWarmupCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_MoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketMoveWarmupCS",
		sizeof(FT4PacketMoveWarmupCS),
		alignof(FT4PacketMoveWarmupCS),
		Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketMoveWarmupCS"), sizeof(FT4PacketMoveWarmupCS), Get_Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketMoveWarmupCS_Hash() { return 704202728U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
