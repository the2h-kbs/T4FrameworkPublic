// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4FRAMEWORK_T4PlayerController_generated_h
#error "T4PlayerController.generated.h already included, missing '#pragma once' in T4PlayerController.h"
#endif
#define T4FRAMEWORK_T4PlayerController_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_RPC_WRAPPERS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4PlayerController(); \
	friend struct Z_Construct_UClass_AT4PlayerController_Statics; \
public: \
	DECLARE_CLASS(AT4PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(AT4PlayerController)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAT4PlayerController(); \
	friend struct Z_Construct_UClass_AT4PlayerController_Statics; \
public: \
	DECLARE_CLASS(AT4PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(AT4PlayerController)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4PlayerController(AT4PlayerController&&); \
	NO_API AT4PlayerController(const AT4PlayerController&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4PlayerController(AT4PlayerController&&); \
	NO_API AT4PlayerController(const AT4PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4PlayerController)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetReplicateComponent() { return STRUCT_OFFSET(AT4PlayerController, NetReplicateComponent); }


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_26_PROLOG
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4PlayerController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4FRAMEWORK_API UClass* StaticClass<class AT4PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
