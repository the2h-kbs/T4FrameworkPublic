// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/AnimControl/AnimInstance/T4BaseAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BaseAnimInstance() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4BaseAnimInstance_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4BaseAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4BaseAnimInstance::StaticRegisterNativesUT4BaseAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UT4BaseAnimInstance_NoRegister()
	{
		return UT4BaseAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4BaseAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BaseAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BaseAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Object/AnimControl/AnimInstance/T4BaseAnimInstance.h" },
		{ "ModuleRelativePath", "Private/Object/AnimControl/AnimInstance/T4BaseAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BaseAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BaseAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BaseAnimInstance_Statics::ClassParams = {
		&UT4BaseAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BaseAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4BaseAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BaseAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BaseAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BaseAnimInstance, 4284636974);
	template<> T4ENGINE_API UClass* StaticClass<UT4BaseAnimInstance>()
	{
		return UT4BaseAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BaseAnimInstance(Z_Construct_UClass_UT4BaseAnimInstance, &UT4BaseAnimInstance::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4BaseAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BaseAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
