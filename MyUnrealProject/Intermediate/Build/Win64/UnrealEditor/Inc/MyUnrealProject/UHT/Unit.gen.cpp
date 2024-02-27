// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_AUnit();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_AUnit_NoRegister();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UDamage_NoRegister();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	DEFINE_FUNCTION(AUnit::execSpawnUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnUnit();
		P_NATIVE_END;
	}
	void AUnit::StaticRegisterNativesAUnit()
	{
		UClass* Class = AUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnUnit", &AUnit::execSpawnUnit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnit_SpawnUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_SpawnUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_SpawnUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "SpawnUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_SpawnUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_SpawnUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_SpawnUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_SpawnUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnit);
	UClass* Z_Construct_UClass_AUnit_NoRegister()
	{
		return AUnit::StaticClass();
	}
	struct Z_Construct_UClass_AUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnit_SpawnUnit, "SpawnUnit" }, // 95426818
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Unit.h" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUnit, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUnit, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_HealthComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_HealthComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUnit_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamage_NoRegister, (int32)VTABLE_OFFSET(AUnit, IDamage), false },  // 2243925497
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnit_Statics::ClassParams = {
		&AUnit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnit_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnit()
	{
		if (!Z_Registration_Info_UClass_AUnit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnit.OuterSingleton, Z_Construct_UClass_AUnit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnit.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<AUnit>()
	{
		return AUnit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnit);
	AUnit::~AUnit() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnit, AUnit::StaticClass, TEXT("AUnit"), &Z_Registration_Info_UClass_AUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnit), 28588681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_2221570678(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Unit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
