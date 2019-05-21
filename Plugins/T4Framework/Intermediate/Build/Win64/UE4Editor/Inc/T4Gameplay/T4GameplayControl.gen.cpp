// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Gameplay/T4GameplayControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayControl() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameplayControl_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameplayControl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4GameplayControl::StaticRegisterNativesUT4GameplayControl()
	{
	}
	UClass* Z_Construct_UClass_UT4GameplayControl_NoRegister()
	{
		return UT4GameplayControl::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameplayControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameplayControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/T4GameplayControl.h" },
		{ "ModuleRelativePath", "Private/Gameplay/T4GameplayControl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameplayControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameplayControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameplayControl_Statics::ClassParams = {
		&UT4GameplayControl::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameplayControl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4GameplayControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameplayControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameplayControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameplayControl, 897746521);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4GameplayControl>()
	{
		return UT4GameplayControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameplayControl(Z_Construct_UClass_UT4GameplayControl, &UT4GameplayControl::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4GameplayControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameplayControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
