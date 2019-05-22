// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEd/Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrackTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MovieSceneActionTrackTemplate() {}
// Cross Module References
	T4REHEARSALED_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEd();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
	T4REHEARSALED_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
// End Cross Module References
class UScriptStruct* FT4MovieSceneActionTrackImplementation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4REHEARSALED_API uint32 Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation, Z_Construct_UPackage__Script_T4RehearsalEd(), TEXT("T4MovieSceneActionTrackImplementation"), sizeof(FT4MovieSceneActionTrackImplementation), Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Hash());
	}
	return Singleton;
}
template<> T4REHEARSALED_API UScriptStruct* StaticStruct<FT4MovieSceneActionTrackImplementation>()
{
	return FT4MovieSceneActionTrackImplementation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovieSceneActionTrackImplementation(FT4MovieSceneActionTrackImplementation::StaticStruct, TEXT("/Script/T4RehearsalEd"), TEXT("T4MovieSceneActionTrackImplementation"), false, nullptr, nullptr);
static struct FScriptStruct_T4RehearsalEd_StaticRegisterNativesFT4MovieSceneActionTrackImplementation
{
	FScriptStruct_T4RehearsalEd_StaticRegisterNativesFT4MovieSceneActionTrackImplementation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovieSceneActionTrackImplementation")),new UScriptStruct::TCppStructOps<FT4MovieSceneActionTrackImplementation>);
	}
} ScriptStruct_T4RehearsalEd_StaticRegisterNativesFT4MovieSceneActionTrackImplementation;
	struct Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrackTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovieSceneActionTrackImplementation>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEd,
		Z_Construct_UScriptStruct_FMovieSceneTrackImplementation,
		&NewStructOps,
		"T4MovieSceneActionTrackImplementation",
		sizeof(FT4MovieSceneActionTrackImplementation),
		alignof(FT4MovieSceneActionTrackImplementation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4RehearsalEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovieSceneActionTrackImplementation"), sizeof(FT4MovieSceneActionTrackImplementation), Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackImplementation_Hash() { return 2437669783U; }
class UScriptStruct* FT4MovieSceneActionTrackTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4REHEARSALED_API uint32 Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate, Z_Construct_UPackage__Script_T4RehearsalEd(), TEXT("T4MovieSceneActionTrackTemplate"), sizeof(FT4MovieSceneActionTrackTemplate), Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Hash());
	}
	return Singleton;
}
template<> T4REHEARSALED_API UScriptStruct* StaticStruct<FT4MovieSceneActionTrackTemplate>()
{
	return FT4MovieSceneActionTrackTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovieSceneActionTrackTemplate(FT4MovieSceneActionTrackTemplate::StaticStruct, TEXT("/Script/T4RehearsalEd"), TEXT("T4MovieSceneActionTrackTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_T4RehearsalEd_StaticRegisterNativesFT4MovieSceneActionTrackTemplate
{
	FScriptStruct_T4RehearsalEd_StaticRegisterNativesFT4MovieSceneActionTrackTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovieSceneActionTrackTemplate")),new UScriptStruct::TCppStructOps<FT4MovieSceneActionTrackTemplate>);
	}
} ScriptStruct_T4RehearsalEd_StaticRegisterNativesFT4MovieSceneActionTrackTemplate;
	struct Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MainFrame/Sequencer/MovieScene/T4MovieSceneActionTrackTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovieSceneActionTrackTemplate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEd,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"T4MovieSceneActionTrackTemplate",
		sizeof(FT4MovieSceneActionTrackTemplate),
		alignof(FT4MovieSceneActionTrackTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4RehearsalEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovieSceneActionTrackTemplate"), sizeof(FT4MovieSceneActionTrackTemplate), Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovieSceneActionTrackTemplate_Hash() { return 4227155200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
