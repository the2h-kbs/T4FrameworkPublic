// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEd/Private/T4RehearsalEdSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4RehearsalEdSettings() {}
// Cross Module References
	T4REHEARSALED_API UClass* Z_Construct_UClass_UT4RehearsalEdSettings_NoRegister();
	T4REHEARSALED_API UClass* Z_Construct_UClass_UT4RehearsalEdSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEd();
// End Cross Module References
	void UT4RehearsalEdSettings::StaticRegisterNativesUT4RehearsalEdSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4RehearsalEdSettings_NoRegister()
	{
		return UT4RehearsalEdSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4RehearsalEdSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4RehearsalEdSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4RehearsalEdSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "T4Rehearsal" },
		{ "IncludePath", "T4RehearsalEdSettings.h" },
		{ "ModuleRelativePath", "Private/T4RehearsalEdSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4RehearsalEdSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4RehearsalEdSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4RehearsalEdSettings_Statics::ClassParams = {
		&UT4RehearsalEdSettings::StaticClass,
		"T4Rehearsal",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UT4RehearsalEdSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4RehearsalEdSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4RehearsalEdSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4RehearsalEdSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4RehearsalEdSettings, 2941341432);
	template<> T4REHEARSALED_API UClass* StaticClass<UT4RehearsalEdSettings>()
	{
		return UT4RehearsalEdSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4RehearsalEdSettings(Z_Construct_UClass_UT4RehearsalEdSettings, &UT4RehearsalEdSettings::StaticClass, TEXT("/Script/T4RehearsalEd"), TEXT("UT4RehearsalEdSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4RehearsalEdSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
