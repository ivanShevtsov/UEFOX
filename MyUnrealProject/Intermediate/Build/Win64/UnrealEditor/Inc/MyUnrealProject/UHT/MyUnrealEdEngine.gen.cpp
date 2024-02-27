// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/MyUnrealEdEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUnrealEdEngine() {}
// Cross Module References
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UMyUnrealEdEngine();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UMyUnrealEdEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	void UMyUnrealEdEngine::StaticRegisterNativesUMyUnrealEdEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUnrealEdEngine);
	UClass* Z_Construct_UClass_UMyUnrealEdEngine_NoRegister()
	{
		return UMyUnrealEdEngine::StaticClass();
	}
	struct Z_Construct_UClass_UMyUnrealEdEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUnrealEdEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUnrealEdEngine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyUnrealEdEngine.h" },
		{ "ModuleRelativePath", "MyUnrealEdEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUnrealEdEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUnrealEdEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUnrealEdEngine_Statics::ClassParams = {
		&UMyUnrealEdEngine::StaticClass,
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
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UMyUnrealEdEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUnrealEdEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyUnrealEdEngine()
	{
		if (!Z_Registration_Info_UClass_UMyUnrealEdEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUnrealEdEngine.OuterSingleton, Z_Construct_UClass_UMyUnrealEdEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyUnrealEdEngine.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<UMyUnrealEdEngine>()
	{
		return UMyUnrealEdEngine::StaticClass();
	}
	UMyUnrealEdEngine::UMyUnrealEdEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUnrealEdEngine);
	UMyUnrealEdEngine::~UMyUnrealEdEngine() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyUnrealEdEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyUnrealEdEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyUnrealEdEngine, UMyUnrealEdEngine::StaticClass, TEXT("UMyUnrealEdEngine"), &Z_Registration_Info_UClass_UMyUnrealEdEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUnrealEdEngine), 1421047842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyUnrealEdEngine_h_549428971(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyUnrealEdEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_MyUnrealEdEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
