// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MovieSceneActionTrack() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4MovieSceneActionTrack_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4MovieSceneActionTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActionType();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UT4MovieSceneActionTrack::StaticRegisterNativesUT4MovieSceneActionTrack()
	{
	}
	UClass* Z_Construct_UClass_UT4MovieSceneActionTrack_NoRegister()
	{
		return UT4MovieSceneActionTrack::StaticClass();
	}
	struct Z_Construct_UClass_UT4MovieSceneActionTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionHierarchyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionHierarchyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrack.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MovieSceneActionTrack, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionHierarchyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionHierarchyIndex = { "ActionHierarchyIndex", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MovieSceneActionTrack, ActionHierarchyIndex), METADATA_PARAMS(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionHierarchyIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionHierarchyIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MovieSceneActionTrack, ActionType), Z_Construct_UEnum_T4Engine_ET4ActionType, METADATA_PARAMS(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MovieSceneActionTrack, Sections), METADATA_PARAMS(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_Sections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionHierarchyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_ActionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::NewProp_Sections_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4MovieSceneActionTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::ClassParams = {
		&UT4MovieSceneActionTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4MovieSceneActionTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4MovieSceneActionTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4MovieSceneActionTrack, 820306770);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<UT4MovieSceneActionTrack>()
	{
		return UT4MovieSceneActionTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4MovieSceneActionTrack(Z_Construct_UClass_UT4MovieSceneActionTrack, &UT4MovieSceneActionTrack::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("UT4MovieSceneActionTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4MovieSceneActionTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
