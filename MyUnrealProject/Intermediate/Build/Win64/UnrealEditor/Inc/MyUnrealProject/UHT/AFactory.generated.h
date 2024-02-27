// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUnit;
#ifdef MYUNREALPROJECT_AFactory_generated_h
#error "AFactory.generated.h already included, missing '#pragma once' in AFactory.h"
#endif
#define MYUNREALPROJECT_AFactory_generated_h

#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_13_DELEGATE \
MYUNREALPROJECT_API void FSpawnEvent_DelegateWrapper(const FMulticastScriptDelegate& SpawnEvent, AUnit* SpawnedUnit);


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_SPARSE_DATA
#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnUnit);


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnUnit);


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_ACCESSORS
#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAFactory(); \
	friend struct Z_Construct_UClass_AAFactory_Statics; \
public: \
	DECLARE_CLASS(AAFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyUnrealProject"), NO_API) \
	DECLARE_SERIALIZER(AAFactory)


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAFactory(); \
	friend struct Z_Construct_UClass_AAFactory_Statics; \
public: \
	DECLARE_CLASS(AAFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyUnrealProject"), NO_API) \
	DECLARE_SERIALIZER(AAFactory)


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAFactory(AAFactory&&); \
	NO_API AAFactory(const AAFactory&); \
public: \
	NO_API virtual ~AAFactory();


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAFactory(AAFactory&&); \
	NO_API AAFactory(const AAFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAFactory) \
	NO_API virtual ~AAFactory();


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_14_PROLOG
#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_RPC_WRAPPERS \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_INCLASS \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYUNREALPROJECT_API UClass* StaticClass<class AAFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
