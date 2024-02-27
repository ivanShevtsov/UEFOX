// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYUNREALPROJECT_TestActor_generated_h
#error "TestActor.generated.h already included, missing '#pragma once' in TestActor.h"
#endif
#define MYUNREALPROJECT_TestActor_generated_h

#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_SPARSE_DATA
#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateAmmoConfigObject); \
	DECLARE_FUNCTION(execPrintFloatParameter);


#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateAmmoConfigObject); \
	DECLARE_FUNCTION(execPrintFloatParameter);


#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_ACCESSORS
#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct Z_Construct_UClass_ATestActor_Statics; \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyUnrealProject"), NO_API) \
	DECLARE_SERIALIZER(ATestActor)


#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct Z_Construct_UClass_ATestActor_Statics; \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyUnrealProject"), NO_API) \
	DECLARE_SERIALIZER(ATestActor)


#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestActor(ATestActor&&); \
	NO_API ATestActor(const ATestActor&); \
public: \
	NO_API virtual ~ATestActor();


#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestActor(ATestActor&&); \
	NO_API ATestActor(const ATestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestActor) \
	NO_API virtual ~ATestActor();


#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_10_PROLOG
#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_RPC_WRAPPERS \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_INCLASS \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYUNREALPROJECT_API UClass* StaticClass<class ATestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
