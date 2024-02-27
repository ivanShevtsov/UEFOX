// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Unit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYUNREALPROJECT_Unit_generated_h
#error "Unit.generated.h already included, missing '#pragma once' in Unit.h"
#endif
#define MYUNREALPROJECT_Unit_generated_h

#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_SPARSE_DATA
#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnUnit);


#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnUnit);


#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_ACCESSORS
#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnit(); \
	friend struct Z_Construct_UClass_AUnit_Statics; \
public: \
	DECLARE_CLASS(AUnit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyUnrealProject"), NO_API) \
	DECLARE_SERIALIZER(AUnit) \
	virtual UObject* _getUObject() const override { return const_cast<AUnit*>(this); }


#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUnit(); \
	friend struct Z_Construct_UClass_AUnit_Statics; \
public: \
	DECLARE_CLASS(AUnit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyUnrealProject"), NO_API) \
	DECLARE_SERIALIZER(AUnit) \
	virtual UObject* _getUObject() const override { return const_cast<AUnit*>(this); }


#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit(AUnit&&); \
	NO_API AUnit(const AUnit&); \
public: \
	NO_API virtual ~AUnit();


#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit(AUnit&&); \
	NO_API AUnit(const AUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnit) \
	NO_API virtual ~AUnit();


#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_12_PROLOG
#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_RPC_WRAPPERS \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_INCLASS \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYUNREALPROJECT_API UClass* StaticClass<class AUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyUnrealProject_Source_MyUnrealProject_Unit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
