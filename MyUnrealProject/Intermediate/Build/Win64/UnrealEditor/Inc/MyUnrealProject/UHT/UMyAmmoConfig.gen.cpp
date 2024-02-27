// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/UMyAmmoConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMyAmmoConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UMyAmmoConfig();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UMyAmmoConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	void UMyAmmoConfig::StaticRegisterNativesUMyAmmoConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAmmoConfig);
	UClass* Z_Construct_UClass_UMyAmmoConfig_NoRegister()
	{
		return UMyAmmoConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMyAmmoConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmmoDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmmoSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAmmoConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAmmoConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMyAmmoConfig.h" },
		{ "ModuleRelativePath", "UMyAmmoConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoDamage_MetaData[] = {
		{ "Category", "Ammo Configuration" },
		{ "ModuleRelativePath", "UMyAmmoConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoDamage = { "AmmoDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyAmmoConfig, AmmoDamage), METADATA_PARAMS(Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoSpeed_MetaData[] = {
		{ "Category", "Ammo Configuration" },
		{ "ModuleRelativePath", "UMyAmmoConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoSpeed = { "AmmoSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyAmmoConfig, AmmoSpeed), METADATA_PARAMS(Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAmmoConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAmmoConfig_Statics::NewProp_AmmoSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAmmoConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAmmoConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAmmoConfig_Statics::ClassParams = {
		&UMyAmmoConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyAmmoConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyAmmoConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyAmmoConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAmmoConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAmmoConfig()
	{
		if (!Z_Registration_Info_UClass_UMyAmmoConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAmmoConfig.OuterSingleton, Z_Construct_UClass_UMyAmmoConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAmmoConfig.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<UMyAmmoConfig>()
	{
		return UMyAmmoConfig::StaticClass();
	}
	UMyAmmoConfig::UMyAmmoConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAmmoConfig);
	UMyAmmoConfig::~UMyAmmoConfig() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_UMyAmmoConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_UMyAmmoConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAmmoConfig, UMyAmmoConfig::StaticClass, TEXT("UMyAmmoConfig"), &Z_Registration_Info_UClass_UMyAmmoConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAmmoConfig), 1777927422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_UMyAmmoConfig_h_395862412(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_UMyAmmoConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_UMyAmmoConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
