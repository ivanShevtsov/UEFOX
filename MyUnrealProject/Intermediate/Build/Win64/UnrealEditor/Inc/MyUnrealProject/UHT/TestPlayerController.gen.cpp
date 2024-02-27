// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/TestPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_ATestPlayerController();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_ATestPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	void ATestPlayerController::StaticRegisterNativesATestPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPlayerController);
	UClass* Z_Construct_UClass_ATestPlayerController_NoRegister()
	{
		return ATestPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATestPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TestPlayerController.h" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPlayerController_Statics::ClassParams = {
		&ATestPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestPlayerController()
	{
		if (!Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton, Z_Construct_UClass_ATestPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<ATestPlayerController>()
	{
		return ATestPlayerController::StaticClass();
	}
	ATestPlayerController::ATestPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPlayerController);
	ATestPlayerController::~ATestPlayerController() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayerController, ATestPlayerController::StaticClass, TEXT("ATestPlayerController"), &Z_Registration_Info_UClass_ATestPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayerController), 4235740922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestPlayerController_h_3464647491(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_TestPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
