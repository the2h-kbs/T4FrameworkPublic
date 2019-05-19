// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4CORE_T4ActorEntityAsset_generated_h
#error "T4ActorEntityAsset.generated.h already included, missing '#pragma once' in T4ActorEntityAsset.h"
#endif
#define T4CORE_T4ActorEntityAsset_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> T4CORE_API UScriptStruct* StaticStruct<struct FT4EntityActorAnimationData>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> T4CORE_API UScriptStruct* StaticStruct<struct FT4EntityActorCompositeMeshData>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> T4CORE_API UScriptStruct* StaticStruct<struct FT4EntityActorCompositePartMeshData>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> T4CORE_API UScriptStruct* StaticStruct<struct FT4EntityActorFullBodyMeshData>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FT4EntityBaseRenderingAttribute Super;


template<> T4CORE_API UScriptStruct* StaticStruct<struct FT4EntityActorRenderingAttribute>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FT4EntityBasePhysicalAttribute Super;


template<> T4CORE_API UScriptStruct* StaticStruct<struct FT4EntityActorPhysicalAttribute>();

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_RPC_WRAPPERS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_RPC_WRAPPERS_NO_PURE_DECLS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ActorEntityAsset, NO_API)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4ActorEntityAsset(); \
	friend struct Z_Construct_UClass_UT4ActorEntityAsset_Statics; \
public: \
	DECLARE_CLASS(UT4ActorEntityAsset, UT4EntityAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Core"), NO_API) \
	DECLARE_SERIALIZER(UT4ActorEntityAsset) \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_ARCHIVESERIALIZER


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_INCLASS \
private: \
	static void StaticRegisterNativesUT4ActorEntityAsset(); \
	friend struct Z_Construct_UClass_UT4ActorEntityAsset_Statics; \
public: \
	DECLARE_CLASS(UT4ActorEntityAsset, UT4EntityAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Core"), NO_API) \
	DECLARE_SERIALIZER(UT4ActorEntityAsset) \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_ARCHIVESERIALIZER


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4ActorEntityAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4ActorEntityAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4ActorEntityAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4ActorEntityAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4ActorEntityAsset(UT4ActorEntityAsset&&); \
	NO_API UT4ActorEntityAsset(const UT4ActorEntityAsset&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4ActorEntityAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4ActorEntityAsset(UT4ActorEntityAsset&&); \
	NO_API UT4ActorEntityAsset(const UT4ActorEntityAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4ActorEntityAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4ActorEntityAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4ActorEntityAsset)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_PRIVATE_PROPERTY_OFFSET
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_156_PROLOG
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h_159_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4ActorEntityAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4CORE_API UClass* StaticClass<class UT4ActorEntityAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Classes_Entity_T4ActorEntityAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
