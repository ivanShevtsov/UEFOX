// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/LevitateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevitateComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_ULevitateComponent();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_ULevitateComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	void ULevitateComponent::StaticRegisterNativesULevitateComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevitateComponent);
	UClass* Z_Construct_UClass_ULevitateComponent_NoRegister()
	{
		return ULevitateComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULevitateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevitateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevitateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LevitateComponent.h" },
		{ "ModuleRelativePath", "LevitateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevitateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevitateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevitateComponent_Statics::ClassParams = {
		&ULevitateComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevitateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevitateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevitateComponent()
	{
		if (!Z_Registration_Info_UClass_ULevitateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevitateComponent.OuterSingleton, Z_Construct_UClass_ULevitateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevitateComponent.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<ULevitateComponent>()
	{
		return ULevitateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevitateComponent);
	ULevitateComponent::~ULevitateComponent() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_LevitateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_LevitateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevitateComponent, ULevitateComponent::StaticClass, TEXT("ULevitateComponent"), &Z_Registration_Info_UClass_ULevitateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevitateComponent), 1236707608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_LevitateComponent_h_773032129(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_LevitateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_LevitateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
