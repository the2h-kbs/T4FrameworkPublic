// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/Viewport/T4RehearsalFloorMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4RehearsalFloorMeshActor() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_AT4RehearsalFloorMeshActor_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_AT4RehearsalFloorMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AT4RehearsalFloorMeshActor::StaticRegisterNativesAT4RehearsalFloorMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AT4RehearsalFloorMeshActor_NoRegister()
	{
		return AT4RehearsalFloorMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Viewport/T4RehearsalFloorMeshActor.h" },
		{ "ModuleRelativePath", "Private/Viewport/T4RehearsalFloorMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::NewProp_FloorMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Viewport/T4RehearsalFloorMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::NewProp_FloorMeshComponent = { "FloorMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4RehearsalFloorMeshActor, FloorMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::NewProp_FloorMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::NewProp_FloorMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::NewProp_FloorMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4RehearsalFloorMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::ClassParams = {
		&AT4RehearsalFloorMeshActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4RehearsalFloorMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4RehearsalFloorMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4RehearsalFloorMeshActor, 2756219334);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<AT4RehearsalFloorMeshActor>()
	{
		return AT4RehearsalFloorMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4RehearsalFloorMeshActor(Z_Construct_UClass_AT4RehearsalFloorMeshActor, &AT4RehearsalFloorMeshActor::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("AT4RehearsalFloorMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4RehearsalFloorMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
