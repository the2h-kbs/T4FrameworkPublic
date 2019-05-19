// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Subobject/T4CharacterObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CharacterObject() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4CharacterObject_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4CharacterObject();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4GameObject();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkinnedMeshComponent_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGroundMovementInfo();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4MovementComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CapsuleComponent_NoRegister();
// End Cross Module References
	void AT4CharacterObject::StaticRegisterNativesAT4CharacterObject()
	{
	}
	UClass* Z_Construct_UClass_AT4CharacterObject_NoRegister()
	{
		return AT4CharacterObject::StaticClass();
	}
	struct Z_Construct_UClass_AT4CharacterObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositePartsMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CompositePartsMeshes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CompositePartsMeshes_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompositePartsMeshes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasedMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasedMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4CharacterObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4CharacterObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Object/Subobject/T4CharacterObject.h" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4CharacterObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4CharacterObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes = { "CompositePartsMeshes", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4CharacterObject, CompositePartsMeshes), METADATA_PARAMS(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes_Key_KeyProp = { "CompositePartsMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes_ValueProp = { "CompositePartsMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UT4SkinnedMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_BasedMovement_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Subobject/T4CharacterObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_BasedMovement = { "BasedMovement", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4CharacterObject, BasedMovement), Z_Construct_UScriptStruct_FGroundMovementInfo, METADATA_PARAMS(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_BasedMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_BasedMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4CharacterObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4CharacterObject, SkeletalMeshComponent), Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4CharacterObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4CharacterObject, MovementComponent), Z_Construct_UClass_UT4MovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_MovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4CharacterObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4CharacterObject, CapsuleComponent), Z_Construct_UClass_UT4CapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4CharacterObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CompositePartsMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_BasedMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4CharacterObject_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4CharacterObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4CharacterObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4CharacterObject_Statics::ClassParams = {
		&AT4CharacterObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4CharacterObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AT4CharacterObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT4CharacterObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4CharacterObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4CharacterObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4CharacterObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4CharacterObject, 3050550304);
	template<> T4ENGINE_API UClass* StaticClass<AT4CharacterObject>()
	{
		return AT4CharacterObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4CharacterObject(Z_Construct_UClass_AT4CharacterObject, &AT4CharacterObject::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4CharacterObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4CharacterObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
