// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/AFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_AAFactory();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_AAFactory_NoRegister();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_AUnit_NoRegister();
	MYUNREALPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics
	{
		struct _Script_MyUnrealProject_eventSpawnEvent_Parms
		{
			AUnit* SpawnedUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::NewProp_SpawnedUnit = { "SpawnedUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MyUnrealProject_eventSpawnEvent_Parms, SpawnedUnit), Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::NewProp_SpawnedUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyUnrealProject, nullptr, "SpawnEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::_Script_MyUnrealProject_eventSpawnEvent_Parms), Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpawnEvent_DelegateWrapper(const FMulticastScriptDelegate& SpawnEvent, AUnit* SpawnedUnit)
{
	struct _Script_MyUnrealProject_eventSpawnEvent_Parms
	{
		AUnit* SpawnedUnit;
	};
	_Script_MyUnrealProject_eventSpawnEvent_Parms Parms;
	Parms.SpawnedUnit=SpawnedUnit;
	SpawnEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AAFactory::execSpawnUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnUnit();
		P_NATIVE_END;
	}
	void AAFactory::StaticRegisterNativesAAFactory()
	{
		UClass* Class = AAFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnUnit", &AAFactory::execSpawnUnit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAFactory_SpawnUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFactory_SpawnUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "AFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFactory_SpawnUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFactory, nullptr, "SpawnUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFactory_SpawnUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFactory_SpawnUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFactory_SpawnUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAFactory_SpawnUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAFactory);
	UClass* Z_Construct_UClass_AAFactory_NoRegister()
	{
		return AAFactory::StaticClass();
	}
	struct Z_Construct_UClass_AAFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UnitSpawned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAFactory_SpawnUnit, "SpawnUnit" }, // 845701324
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AFactory.h" },
		{ "ModuleRelativePath", "AFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFactory_Statics::NewProp_UnitSpawned_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "AFactory.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAFactory_Statics::NewProp_UnitSpawned = { "UnitSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAFactory, UnitSpawned), Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAFactory_Statics::NewProp_UnitSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFactory_Statics::NewProp_UnitSpawned_MetaData)) }; // 1125743417
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFactory_Statics::NewProp_UnitSpawned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAFactory_Statics::ClassParams = {
		&AAFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAFactory_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAFactory()
	{
		if (!Z_Registration_Info_UClass_AAFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAFactory.OuterSingleton, Z_Construct_UClass_AAFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAFactory.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<AAFactory>()
	{
		return AAFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAFactory);
	AAFactory::~AAFactory() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAFactory, AAFactory::StaticClass, TEXT("AAFactory"), &Z_Registration_Info_UClass_AAFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAFactory), 993667144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_4262831160(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_AFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
