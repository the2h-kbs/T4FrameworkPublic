// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/T4RehearsalEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4RehearsalEditorSettings() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4RehearsalEditorSettings_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4RehearsalEditorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
// End Cross Module References
	void UT4RehearsalEditorSettings::StaticRegisterNativesUT4RehearsalEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4RehearsalEditorSettings_NoRegister()
	{
		return UT4RehearsalEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4RehearsalEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4RehearsalEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4RehearsalEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "T4Rehearsal" },
		{ "IncludePath", "T4RehearsalEditorSettings.h" },
		{ "ModuleRelativePath", "Private/T4RehearsalEditorSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4RehearsalEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4RehearsalEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4RehearsalEditorSettings_Statics::ClassParams = {
		&UT4RehearsalEditorSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4RehearsalEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4RehearsalEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4RehearsalEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4RehearsalEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4RehearsalEditorSettings, 2709887911);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<UT4RehearsalEditorSettings>()
	{
		return UT4RehearsalEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4RehearsalEditorSettings(Z_Construct_UClass_UT4RehearsalEditorSettings, &UT4RehearsalEditorSettings::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("UT4RehearsalEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4RehearsalEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
