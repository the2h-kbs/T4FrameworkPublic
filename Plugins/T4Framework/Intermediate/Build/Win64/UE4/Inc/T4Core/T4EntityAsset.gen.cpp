// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4EntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EntityAsset() {}
// Cross Module References
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityDefaultAttribute();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4CORE_API UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4EntityAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FT4EntityBaseRenderingAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityBaseRenderingAttribute"), sizeof(FT4EntityBaseRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityBaseRenderingAttribute>()
{
	return FT4EntityBaseRenderingAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityBaseRenderingAttribute(FT4EntityBaseRenderingAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityBaseRenderingAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityBaseRenderingAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityBaseRenderingAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityBaseRenderingAttribute")),new UScriptStruct::TCppStructOps<FT4EntityBaseRenderingAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityBaseRenderingAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImportRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityBaseRenderingAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_ImportRotationYaw_MetaData[] = {
		{ "Category", "Property" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "-360.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_ImportRotationYaw = { "ImportRotationYaw", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityBaseRenderingAttribute, ImportRotationYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_ImportRotationYaw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_ImportRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Property" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityBaseRenderingAttribute, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_ImportRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityBaseRenderingAttribute",
		sizeof(FT4EntityBaseRenderingAttribute),
		alignof(FT4EntityBaseRenderingAttribute),
		Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityBaseRenderingAttribute"), sizeof(FT4EntityBaseRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute_Hash() { return 1916770640U; }
class UScriptStruct* FT4EntityBasePhysicalAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityBasePhysicalAttribute"), sizeof(FT4EntityBasePhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityBasePhysicalAttribute>()
{
	return FT4EntityBasePhysicalAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityBasePhysicalAttribute(FT4EntityBasePhysicalAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityBasePhysicalAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityBasePhysicalAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityBasePhysicalAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityBasePhysicalAttribute")),new UScriptStruct::TCppStructOps<FT4EntityBasePhysicalAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityBasePhysicalAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityBasePhysicalAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "500" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityBasePhysicalAttribute, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityBasePhysicalAttribute, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::NewProp_Height,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityBasePhysicalAttribute",
		sizeof(FT4EntityBasePhysicalAttribute),
		alignof(FT4EntityBasePhysicalAttribute),
		Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityBasePhysicalAttribute"), sizeof(FT4EntityBasePhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute_Hash() { return 37597745U; }
class UScriptStruct* FT4EntityDefaultAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityDefaultAttribute"), sizeof(FT4EntityDefaultAttribute), Get_Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityDefaultAttribute>()
{
	return FT4EntityDefaultAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityDefaultAttribute(FT4EntityDefaultAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityDefaultAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityDefaultAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityDefaultAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityDefaultAttribute")),new UScriptStruct::TCppStructOps<FT4EntityDefaultAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityDefaultAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailRotation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#35" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityDefaultAttribute>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailLocation_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailLocation = { "ThumbnailLocation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityDefaultAttribute, ThumbnailLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailRotation_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailRotation = { "ThumbnailRotation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityDefaultAttribute, ThumbnailRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailRotation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_UniqueName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityDefaultAttribute, UniqueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_UniqueName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_UniqueName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_ThumbnailRotation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::NewProp_UniqueName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityDefaultAttribute",
		sizeof(FT4EntityDefaultAttribute),
		alignof(FT4EntityDefaultAttribute),
		Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityDefaultAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityDefaultAttribute"), sizeof(FT4EntityDefaultAttribute), Get_Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityDefaultAttribute_Hash() { return 2890020570U; }
	void UT4EntityAsset::StaticRegisterNativesUT4EntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister()
	{
		return UT4EntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4EntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Entity/T4EntityAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EntityAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EntityAsset, Default), Z_Construct_UScriptStruct_FT4EntityDefaultAttribute, METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_Default_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4EntityAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EntityAsset_Statics::ClassParams = {
		&UT4EntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4EntityAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EntityAsset, 1847823032);
	template<> T4CORE_API UClass* StaticClass<UT4EntityAsset>()
	{
		return UT4EntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EntityAsset(Z_Construct_UClass_UT4EntityAsset, &UT4EntityAsset::StaticClass, TEXT("/Script/T4Core"), TEXT("UT4EntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4EntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
