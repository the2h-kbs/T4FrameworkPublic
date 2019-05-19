// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Component/Movement/T4MovementStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MovementStructs() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4FindFloorResult();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGroundMovementInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FT4FindFloorResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4FindFloorResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4FindFloorResult, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4FindFloorResult"), sizeof(FT4FindFloorResult), Get_Z_Construct_UScriptStruct_FT4FindFloorResult_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4FindFloorResult>()
{
	return FT4FindFloorResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4FindFloorResult(FT4FindFloorResult::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4FindFloorResult"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4FindFloorResult
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4FindFloorResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4FindFloorResult")),new UScriptStruct::TCppStructOps<FT4FindFloorResult>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4FindFloorResult;
	struct Z_Construct_UScriptStruct_FT4FindFloorResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLineTrace_MetaData[];
#endif
		static void NewProp_bLineTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLineTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWalkableFloor_MetaData[];
#endif
		static void NewProp_bWalkableFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWalkableFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[];
#endif
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4FindFloorResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000020801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4FindFloorResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_LineDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "The distance to the floor, computed from the trace. Only valid if bLineTrace is true." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_LineDist = { "LineDist", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4FindFloorResult, LineDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_LineDist_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_LineDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_FloorDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "The distance to the floor, computed from the swept capsule trace." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_FloorDist = { "FloorDist", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4FindFloorResult, FloorDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_FloorDist_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_FloorDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bLineTrace_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface)." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bLineTrace_SetBit(void* Obj)
	{
		((FT4FindFloorResult*)Obj)->bLineTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bLineTrace = { "bLineTrace", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FT4FindFloorResult), &Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bLineTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bLineTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bLineTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bWalkableFloor_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bWalkableFloor_SetBit(void* Obj)
	{
		((FT4FindFloorResult*)Obj)->bWalkableFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bWalkableFloor = { "bWalkableFloor", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FT4FindFloorResult), &Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bWalkableFloor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bWalkableFloor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bWalkableFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bBlockingHit_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "True if there was a blocking hit in the floor test that was NOT in initial penetration.\nThe HitResult can give more info about other circumstances." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((FT4FindFloorResult*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FT4FindFloorResult), &Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bBlockingHit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bBlockingHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_LineDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_FloorDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bLineTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bWalkableFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::NewProp_bBlockingHit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4FindFloorResult",
		sizeof(FT4FindFloorResult),
		alignof(FT4FindFloorResult),
		Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4FindFloorResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4FindFloorResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4FindFloorResult"), sizeof(FT4FindFloorResult), Get_Z_Construct_UScriptStruct_FT4FindFloorResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4FindFloorResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4FindFloorResult_Hash() { return 2281837821U; }
class UScriptStruct* FT4MovementComponentPostPhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MovementComponentPostPhysicsTickFunction"), sizeof(FT4MovementComponentPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MovementComponentPostPhysicsTickFunction>()
{
	return FT4MovementComponentPostPhysicsTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction(FT4MovementComponentPostPhysicsTickFunction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MovementComponentPostPhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MovementComponentPostPhysicsTickFunction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MovementComponentPostPhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovementComponentPostPhysicsTickFunction")),new UScriptStruct::TCppStructOps<FT4MovementComponentPostPhysicsTickFunction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MovementComponentPostPhysicsTickFunction;
	struct Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovementComponentPostPhysicsTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"T4MovementComponentPostPhysicsTickFunction",
		sizeof(FT4MovementComponentPostPhysicsTickFunction),
		alignof(FT4MovementComponentPostPhysicsTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovementComponentPostPhysicsTickFunction"), sizeof(FT4MovementComponentPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction_Hash() { return 1983380477U; }
class UScriptStruct* FGroundMovementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGroundMovementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroundMovementInfo, Z_Construct_UPackage__Script_T4Engine(), TEXT("GroundMovementInfo"), sizeof(FGroundMovementInfo), Get_Z_Construct_UScriptStruct_FGroundMovementInfo_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FGroundMovementInfo>()
{
	return FGroundMovementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroundMovementInfo(FGroundMovementInfo::StaticStruct, TEXT("/Script/T4Engine"), TEXT("GroundMovementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFGroundMovementInfo
{
	FScriptStruct_T4Engine_StaticRegisterNativesFGroundMovementInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GroundMovementInfo")),new UScriptStruct::TCppStructOps<FGroundMovementInfo>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFGroundMovementInfo;
	struct Z_Construct_UScriptStruct_FGroundMovementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerHasVelocity_MetaData[];
#endif
		static void NewProp_bServerHasVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerHasVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeRotation_MetaData[];
#endif
		static void NewProp_bRelativeRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerHasBaseComponent_MetaData[];
#endif
		static void NewProp_bServerHasBaseComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerHasBaseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Struct to hold information about the \"base\" object the character is standing on." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroundMovementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Whether there is a velocity on the server. Used for forcing replication when velocity goes to zero." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasVelocity_SetBit(void* Obj)
	{
		((FGroundMovementInfo*)Obj)->bServerHasVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasVelocity = { "bServerHasVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGroundMovementInfo), &Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bRelativeRotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Whether rotation is relative to the base or absolute. It can only be relative if location is also relative." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bRelativeRotation_SetBit(void* Obj)
	{
		((FGroundMovementInfo*)Obj)->bRelativeRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bRelativeRotation = { "bRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGroundMovementInfo), &Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bRelativeRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bRelativeRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasBaseComponent_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Whether the server says that there is a base. On clients, the component may not have resolved yet." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasBaseComponent_SetBit(void* Obj)
	{
		((FGroundMovementInfo*)Obj)->bServerHasBaseComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasBaseComponent = { "bServerHasBaseComponent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGroundMovementInfo), &Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasBaseComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasBaseComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasBaseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Rotation: relative to MovementBase if HasRelativeRotation() is true, absolute otherwise." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroundMovementInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Location relative to MovementBase. Only valid if HasRelativeLocation() is true." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroundMovementInfo, Location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_BoneName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Bone name on component, for skeletal meshes. NAME_None if not a skeletal mesh or if bone is invalid." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroundMovementInfo, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Component/Movement/T4MovementStructs.h" },
		{ "ToolTip", "Component we are based on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroundMovementInfo, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_MovementBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_MovementBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bRelativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_bServerHasBaseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::NewProp_MovementBase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"GroundMovementInfo",
		sizeof(FGroundMovementInfo),
		alignof(FGroundMovementInfo),
		Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroundMovementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroundMovementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroundMovementInfo"), sizeof(FGroundMovementInfo), Get_Z_Construct_UScriptStruct_FGroundMovementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroundMovementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroundMovementInfo_Hash() { return 4118394654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
