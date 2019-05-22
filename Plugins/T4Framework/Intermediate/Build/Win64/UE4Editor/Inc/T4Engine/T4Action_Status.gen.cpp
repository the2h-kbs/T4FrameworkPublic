// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4Action_Status.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Action_Status() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ExchangeCostumeAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectAction();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EquipWeaponAction();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4LockOnAction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4PossessAction();
// End Cross Module References
class UScriptStruct* FT4ExchangeCostumeAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ExchangeCostumeAction"), sizeof(FT4ExchangeCostumeAction), Get_Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ExchangeCostumeAction>()
{
	return FT4ExchangeCostumeAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ExchangeCostumeAction(FT4ExchangeCostumeAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ExchangeCostumeAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ExchangeCostumeAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ExchangeCostumeAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ExchangeCostumeAction")),new UScriptStruct::TCppStructOps<FT4ExchangeCostumeAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ExchangeCostumeAction;
	struct Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPartsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetPartsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CostumeEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
		{ "ToolTip", "#37" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ExchangeCostumeAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_TargetPartsName_MetaData[] = {
		{ "Category", "T4ExchangeCostumeAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_TargetPartsName = { "TargetPartsName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ExchangeCostumeAction, TargetPartsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_TargetPartsName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_TargetPartsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_CostumeEntityAsset_MetaData[] = {
		{ "Category", "T4ExchangeCostumeAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_CostumeEntityAsset = { "CostumeEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ExchangeCostumeAction, CostumeEntityAsset), Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_CostumeEntityAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_CostumeEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_TargetPartsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::NewProp_CostumeEntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4ExchangeCostumeAction",
		sizeof(FT4ExchangeCostumeAction),
		alignof(FT4ExchangeCostumeAction),
		Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ExchangeCostumeAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ExchangeCostumeAction"), sizeof(FT4ExchangeCostumeAction), Get_Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ExchangeCostumeAction_Hash() { return 3596796465U; }
class UScriptStruct* FT4EquipWeaponAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EquipWeaponAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4EquipWeaponAction"), sizeof(FT4EquipWeaponAction), Get_Z_Construct_UScriptStruct_FT4EquipWeaponAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4EquipWeaponAction>()
{
	return FT4EquipWeaponAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EquipWeaponAction(FT4EquipWeaponAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4EquipWeaponAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EquipWeaponAction")),new UScriptStruct::TCppStructOps<FT4EquipWeaponAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponAction;
	struct Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneOrSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneOrSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EquipWeaponAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_bUsePreloading_MetaData[] = {
		{ "Category", "T4EquipWeaponAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_bUsePreloading_SetBit(void* Obj)
	{
		((FT4EquipWeaponAction*)Obj)->bUsePreloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_bUsePreloading = { "bUsePreloading", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EquipWeaponAction), &Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_bUsePreloading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_bUsePreloading_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_bUsePreloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_BoneOrSocketName_MetaData[] = {
		{ "Category", "T4EquipWeaponAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_BoneOrSocketName = { "BoneOrSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EquipWeaponAction, BoneOrSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_BoneOrSocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_BoneOrSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_WeaponEntityAsset_MetaData[] = {
		{ "Category", "T4EquipWeaponAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_WeaponEntityAsset = { "WeaponEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EquipWeaponAction, WeaponEntityAsset), Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_WeaponEntityAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_WeaponEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_bUsePreloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_BoneOrSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::NewProp_WeaponEntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4EquipWeaponAction",
		sizeof(FT4EquipWeaponAction),
		alignof(FT4EquipWeaponAction),
		Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EquipWeaponAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EquipWeaponAction"), sizeof(FT4EquipWeaponAction), Get_Z_Construct_UScriptStruct_FT4EquipWeaponAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EquipWeaponAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponAction_Hash() { return 2096031987U; }
class UScriptStruct* FT4LockOnAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4LockOnAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4LockOnAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4LockOnAction"), sizeof(FT4LockOnAction), Get_Z_Construct_UScriptStruct_FT4LockOnAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4LockOnAction>()
{
	return FT4LockOnAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4LockOnAction(FT4LockOnAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4LockOnAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4LockOnAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4LockOnAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4LockOnAction")),new UScriptStruct::TCppStructOps<FT4LockOnAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4LockOnAction;
	struct Z_Construct_UScriptStruct_FT4LockOnAction_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetLocked_MetaData[];
#endif
		static void NewProp_bSetLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LockOnAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4LockOnAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_LockedRotation_MetaData[] = {
		{ "Category", "T4LockOnAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_LockedRotation = { "LockedRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LockOnAction, LockedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_LockedRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_LockedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_bSetLocked_MetaData[] = {
		{ "Category", "T4LockOnAction" },
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_bSetLocked_SetBit(void* Obj)
	{
		((FT4LockOnAction*)Obj)->bSetLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_bSetLocked = { "bSetLocked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4LockOnAction), &Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_bSetLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_bSetLocked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_bSetLocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4LockOnAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_LockedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LockOnAction_Statics::NewProp_bSetLocked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4LockOnAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4LockOnAction",
		sizeof(FT4LockOnAction),
		alignof(FT4LockOnAction),
		Z_Construct_UScriptStruct_FT4LockOnAction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LockOnAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4LockOnAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4LockOnAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4LockOnAction"), sizeof(FT4LockOnAction), Get_Z_Construct_UScriptStruct_FT4LockOnAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4LockOnAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4LockOnAction_Hash() { return 1832609264U; }
class UScriptStruct* FT4PossessAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4PossessAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PossessAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4PossessAction"), sizeof(FT4PossessAction), Get_Z_Construct_UScriptStruct_FT4PossessAction_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4PossessAction>()
{
	return FT4PossessAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PossessAction(FT4PossessAction::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4PossessAction"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4PossessAction
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4PossessAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PossessAction")),new UScriptStruct::TCppStructOps<FT4PossessAction>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4PossessAction;
	struct Z_Construct_UScriptStruct_FT4PossessAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PossessAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4Action_Status.h" },
		{ "ToolTip", "ET4ActionType::Possess\nET4ActionType::LockOn\nET4ActionType::EquipWeapon" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PossessAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PossessAction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PossessAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ObjectAction,
		&NewStructOps,
		"T4PossessAction",
		sizeof(FT4PossessAction),
		alignof(FT4PossessAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PossessAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PossessAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PossessAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PossessAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PossessAction"), sizeof(FT4PossessAction), Get_Z_Construct_UScriptStruct_FT4PossessAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PossessAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PossessAction_Hash() { return 693813243U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
