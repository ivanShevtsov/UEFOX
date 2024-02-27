// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Damage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYUNREALPROJECT_Damage_generated_h
#error "Damage.generated.h already included, missing '#pragma once' in Damage.h"
#endif
#define MYUNREALPROJECT_Damage_generated_h

#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_SPARSE_DATA
#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_RPC_WRAPPERS \
	virtual void OnDamage_Implementation(float DamageAmount) {}; \
 \
	DECLARE_FUNCTION(execOnDamage);


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDamage_Implementation(float DamageAmount) {}; \
 \
	DECLARE_FUNCTION(execOnDamage);


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_ACCESSORS
#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_CALLBACK_WRAPPERS
#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYUNREALPROJECT_API UDamage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYUNREALPROJECT_API, UDamage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYUNREALPROJECT_API UDamage(UDamage&&); \
	MYUNREALPROJECT_API UDamage(const UDamage&); \
public: \
	MYUNREALPROJECT_API virtual ~UDamage();


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYUNREALPROJECT_API UDamage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYUNREALPROJECT_API UDamage(UDamage&&); \
	MYUNREALPROJECT_API UDamage(const UDamage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYUNREALPROJECT_API, UDamage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamage); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamage) \
	MYUNREALPROJECT_API virtual ~UDamage();


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamage(); \
	friend struct Z_Construct_UClass_UDamage_Statics; \
public: \
	DECLARE_CLASS(UDamage, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyUnrealProject"), MYUNREALPROJECT_API) \
	DECLARE_SERIALIZER(UDamage)


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamage() {} \
public: \
	typedef UDamage UClassType; \
	typedef IDamage ThisClass; \
	static void Execute_OnDamage(UObject* O, float DamageAmount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamage() {} \
public: \
	typedef UDamage UClassType; \
	typedef IDamage ThisClass; \
	static void Execute_OnDamage(UObject* O, float DamageAmount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_10_PROLOG
#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_RPC_WRAPPERS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_CALLBACK_WRAPPERS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_SPARSE_DATA \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_ACCESSORS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_CALLBACK_WRAPPERS \
	FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYUNREALPROJECT_API UClass* StaticClass<class UDamage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyUnrealProject_Source_MyUnrealProject_Damage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
