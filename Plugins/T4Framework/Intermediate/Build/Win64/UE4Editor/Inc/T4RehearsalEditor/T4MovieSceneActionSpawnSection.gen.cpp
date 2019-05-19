// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionSpawnSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MovieSceneActionSpawnSection() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4MovieSceneActionSpawnSection_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4MovieSceneActionSpawnSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
// End Cross Module References
	void UT4MovieSceneActionSpawnSection::StaticRegisterNativesUT4MovieSceneActionSpawnSection()
	{
	}
	UClass* Z_Construct_UClass_UT4MovieSceneActionSpawnSection_NoRegister()
	{
		return UT4MovieSceneActionSpawnSection::StaticClass();
	}
	struct Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionHierarchyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionHierarchyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainFrame/Sequencer/MovieScene/T4MovieSceneActionSpawnSection.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionSpawnSection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::NewProp_ActionHierarchyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionSpawnSection.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::NewProp_ActionHierarchyIndex = { "ActionHierarchyIndex", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MovieSceneActionSpawnSection, ActionHierarchyIndex), METADATA_PARAMS(Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::NewProp_ActionHierarchyIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::NewProp_ActionHierarchyIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::NewProp_ActionHierarchyIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4MovieSceneActionSpawnSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::ClassParams = {
		&UT4MovieSceneActionSpawnSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4MovieSceneActionSpawnSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4MovieSceneActionSpawnSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4MovieSceneActionSpawnSection, 2185245904);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<UT4MovieSceneActionSpawnSection>()
	{
		return UT4MovieSceneActionSpawnSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4MovieSceneActionSpawnSection(Z_Construct_UClass_UT4MovieSceneActionSpawnSection, &UT4MovieSceneActionSpawnSection::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("UT4MovieSceneActionSpawnSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4MovieSceneActionSpawnSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
