// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4HumanAnimInstance() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4HumanAnimInstance_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4HumanAnimInstance();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4BaseAnimInstance();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UFunction* Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	T4ENGINE_API UFunction* Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4IKAnimVariables();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementAnimVariables();
// End Cross Module References
	void UT4HumanAnimInstance::StaticRegisterNativesUT4HumanAnimInstance()
	{
		UClass* Class = UT4HumanAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMovementMontageEnded", &UT4HumanAnimInstance::execOnMovementMontageEnded },
			{ "OnSkillMontageEnded", &UT4HumanAnimInstance::execOnSkillMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics
	{
		struct T4HumanAnimInstance_eventOnMovementMontageEnded_Parms
		{
			UAnimMontage* InMontage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((T4HumanAnimInstance_eventOnMovementMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4HumanAnimInstance_eventOnMovementMontageEnded_Parms), &Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::NewProp_InMontage = { "InMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HumanAnimInstance_eventOnMovementMontageEnded_Parms, InMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::NewProp_InMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HumanAnimInstance, nullptr, "OnMovementMontageEnded", sizeof(T4HumanAnimInstance_eventOnMovementMontageEnded_Parms), Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics
	{
		struct T4HumanAnimInstance_eventOnSkillMontageEnded_Parms
		{
			UAnimMontage* InMontage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((T4HumanAnimInstance_eventOnSkillMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4HumanAnimInstance_eventOnSkillMontageEnded_Parms), &Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::NewProp_InMontage = { "InMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HumanAnimInstance_eventOnSkillMontageEnded_Parms, InMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::NewProp_InMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HumanAnimInstance, nullptr, "OnSkillMontageEnded", sizeof(T4HumanAnimInstance_eventOnSkillMontageEnded_Parms), Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UT4HumanAnimInstance_NoRegister()
	{
		return UT4HumanAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4HumanAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockOnBlendspace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockOnBlendspace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveBlendspace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveBlendspace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4HumanAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4BaseAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4HumanAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4HumanAnimInstance_OnMovementMontageEnded, "OnMovementMontageEnded" }, // 2165797146
		{ &Z_Construct_UFunction_UT4HumanAnimInstance_OnSkillMontageEnded, "OnSkillMontageEnded" }, // 2438459832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_LockOnBlendspace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Blandspace" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_LockOnBlendspace = { "LockOnBlendspace", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanAnimInstance, LockOnBlendspace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_LockOnBlendspace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_LockOnBlendspace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MoveBlendspace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Blandspace" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MoveBlendspace = { "MoveBlendspace", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanAnimInstance, MoveBlendspace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MoveBlendspace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MoveBlendspace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementMontage = { "MovementMontage", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanAnimInstance, MovementMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_SkillMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_SkillMontage = { "SkillMontage", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanAnimInstance, SkillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_SkillMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_SkillMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_IKVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_IKVariables = { "IKVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanAnimInstance, IKVariables), Z_Construct_UScriptStruct_FT4IKAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_IKVariables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_IKVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementVariables = { "MovementVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanAnimInstance, MovementVariables), Z_Construct_UScriptStruct_FT4MovementAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementVariables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4HumanAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_LockOnBlendspace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MoveBlendspace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_SkillMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_IKVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanAnimInstance_Statics::NewProp_MovementVariables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4HumanAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4HumanAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4HumanAnimInstance_Statics::ClassParams = {
		&UT4HumanAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UT4HumanAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4HumanAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4HumanAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4HumanAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4HumanAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4HumanAnimInstance, 2867218);
	template<> T4ENGINE_API UClass* StaticClass<UT4HumanAnimInstance>()
	{
		return UT4HumanAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4HumanAnimInstance(Z_Construct_UClass_UT4HumanAnimInstance, &UT4HumanAnimInstance::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4HumanAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4HumanAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
