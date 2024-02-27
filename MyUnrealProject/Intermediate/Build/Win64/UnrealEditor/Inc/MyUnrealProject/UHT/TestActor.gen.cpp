// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/TestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_ATestActor();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UMyAmmoConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	DEFINE_FUNCTION(ATestActor::execCreateAmmoConfigObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAmmoConfigObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestActor::execPrintFloatParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintFloatParameter();
		P_NATIVE_END;
	}
	void ATestActor::StaticRegisterNativesATestActor()
	{
		UClass* Class = ATestActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAmmoConfigObject", &ATestActor::execCreateAmmoConfigObject },
			{ "PrintFloatParameter", &ATestActor::execPrintFloatParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Functions" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "CreateAmmoConfigObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestActor_PrintFloatParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestActor_PrintFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Functions" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_PrintFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "PrintFloatParameter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestActor_PrintFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_PrintFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestActor_PrintFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_PrintFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestActor);
	UClass* Z_Construct_UClass_ATestActor_NoRegister()
	{
		return ATestActor::StaticClass();
	}
	struct Z_Construct_UClass_ATestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoConfigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AmmoConfigClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestActor_CreateAmmoConfigObject, "CreateAmmoConfigObject" }, // 391086190
		{ &Z_Construct_UFunction_ATestActor_PrintFloatParameter, "PrintFloatParameter" }, // 3061840830
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestActor.h" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloatParameter_MetaData[] = {
		{ "Category", "Custom Properties" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloatParameter = { "MyFloatParameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyFloatParameter), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloatParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloatParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_AmmoConfigClass_MetaData[] = {
		{ "Category", "Custom Properties" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_AmmoConfigClass = { "AmmoConfigClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, AmmoConfigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMyAmmoConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_AmmoConfigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_AmmoConfigClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloatParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_AmmoConfigClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
		&ATestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestActor()
	{
		if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<ATestActor>()
	{
		return ATestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
	ATestActor::~ATestActor() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 3565314310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_1345843607(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
