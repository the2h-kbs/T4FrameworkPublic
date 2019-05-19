// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/MainFrame/Sequencer/T4ActionContiSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionContiSequence() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4ActionContiSequence_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4ActionContiSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	void UT4ActionContiSequence::StaticRegisterNativesUT4ActionContiSequence()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionContiSequence_NoRegister()
	{
		return UT4ActionContiSequence::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionContiSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionContiSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MainFrame/Sequencer/T4ActionContiSequence.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/T4ActionContiSequence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/T4ActionContiSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this sequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4ActionContiSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionContiSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiSequence_Statics::NewProp_MovieScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionContiSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionContiSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionContiSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionContiSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionContiSequence_Statics::ClassParams = {
		&UT4ActionContiSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionContiSequence_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiSequence_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionContiSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionContiSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionContiSequence, 2629754215);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<UT4ActionContiSequence>()
	{
		return UT4ActionContiSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionContiSequence(Z_Construct_UClass_UT4ActionContiSequence, &UT4ActionContiSequence::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("UT4ActionContiSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionContiSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
