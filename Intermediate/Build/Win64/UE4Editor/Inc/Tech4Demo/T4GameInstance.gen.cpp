// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech4Demo/T4GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameInstance() {}
// Cross Module References
	TECH4DEMO_API UClass* Z_Construct_UClass_UT4GameInstance_NoRegister();
	TECH4DEMO_API UClass* Z_Construct_UClass_UT4GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Tech4Demo();
// End Cross Module References
	void UT4GameInstance::StaticRegisterNativesUT4GameInstance()
	{
	}
	UClass* Z_Construct_UClass_UT4GameInstance_NoRegister()
	{
		return UT4GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech4Demo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "T4GameInstance.h" },
		{ "ModuleRelativePath", "T4GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameInstance_Statics::ClassParams = {
		&UT4GameInstance::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameInstance, 484152046);
	template<> TECH4DEMO_API UClass* StaticClass<UT4GameInstance>()
	{
		return UT4GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameInstance(Z_Construct_UClass_UT4GameInstance, &UT4GameInstance::StaticClass, TEXT("/Script/Tech4Demo"), TEXT("UT4GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
