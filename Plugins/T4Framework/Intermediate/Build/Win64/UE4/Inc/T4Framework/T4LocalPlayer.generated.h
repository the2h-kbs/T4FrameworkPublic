// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4FRAMEWORK_T4LocalPlayer_generated_h
#error "T4LocalPlayer.generated.h already included, missing '#pragma once' in T4LocalPlayer.h"
#endif
#define T4FRAMEWORK_T4LocalPlayer_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_RPC_WRAPPERS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4LocalPlayer(); \
	friend struct Z_Construct_UClass_UT4LocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UT4LocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(UT4LocalPlayer)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUT4LocalPlayer(); \
	friend struct Z_Construct_UClass_UT4LocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UT4LocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(UT4LocalPlayer)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4LocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4LocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4LocalPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4LocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4LocalPlayer(UT4LocalPlayer&&); \
	NO_API UT4LocalPlayer(const UT4LocalPlayer&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4LocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4LocalPlayer(UT4LocalPlayer&&); \
	NO_API UT4LocalPlayer(const UT4LocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4LocalPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4LocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4LocalPlayer)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_PRIVATE_PROPERTY_OFFSET
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_12_PROLOG
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4LocalPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4FRAMEWORK_API UClass* StaticClass<class UT4LocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4LocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
