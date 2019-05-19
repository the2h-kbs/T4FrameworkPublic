// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/MainFrame/Tabs/T4ActionContiParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionContiParameter() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4ActionContiParameter_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4ActionContiParameter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionParameters();
// End Cross Module References
	void UT4ActionContiParameter::StaticRegisterNativesUT4ActionContiParameter()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionContiParameter_NoRegister()
	{
		return UT4ActionContiParameter::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionContiParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContiParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContiParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionContiParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiParameter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MainFrame/Tabs/T4ActionContiParameter.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Tabs/T4ActionContiParameter.h" },
		{ "ToolTip", "#30" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiParameter_Statics::NewProp_ContiParameter_MetaData[] = {
		{ "Category", "T4ActionContiParameter" },
		{ "ModuleRelativePath", "Private/MainFrame/Tabs/T4ActionContiParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActionContiParameter_Statics::NewProp_ContiParameter = { "ContiParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionContiParameter, ContiParameter), Z_Construct_UScriptStruct_FT4ActionParameters, METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiParameter_Statics::NewProp_ContiParameter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiParameter_Statics::NewProp_ContiParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionContiParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionContiParameter_Statics::NewProp_ContiParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionContiParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionContiParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionContiParameter_Statics::ClassParams = {
		&UT4ActionContiParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionContiParameter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiParameter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiParameter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionContiParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionContiParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionContiParameter, 2218864203);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<UT4ActionContiParameter>()
	{
		return UT4ActionContiParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionContiParameter(Z_Construct_UClass_UT4ActionContiParameter, &UT4ActionContiParameter::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("UT4ActionContiParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionContiParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
