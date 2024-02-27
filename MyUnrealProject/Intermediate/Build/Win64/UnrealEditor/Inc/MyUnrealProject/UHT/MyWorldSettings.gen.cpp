// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/MyWorldSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWorldSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UMyWorldSettings();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UMyWorldSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	void UMyWorldSettings::StaticRegisterNativesUMyWorldSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyWorldSettings);
	UClass* Z_Construct_UClass_UMyWorldSettings_NoRegister()
	{
		return UMyWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMyWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyWorldSettings.h" },
		{ "ModuleRelativePath", "MyWorldSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyWorldSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyWorldSettings_Statics::ClassParams = {
		&UMyWorldSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UMyWorldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyWorldSettings()
	{
		if (!Z_Registration_Info_UClass_UMyWorldSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyWorldSettings.OuterSingleton, Z_Construct_UClass_UMyWorldSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyWorldSettings.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<UMyWorldSettings>()
	{
		return UMyWorldSettings::StaticClass();
	}
	UMyWorldSettings::UMyWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyWorldSettings);
	UMyWorldSettings::~UMyWorldSettings() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyWorldSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyWorldSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyWorldSettings, UMyWorldSettings::StaticClass, TEXT("UMyWorldSettings"), &Z_Registration_Info_UClass_UMyWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyWorldSettings), 806414605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyWorldSettings_h_1679622669(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyWorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyWorldSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
