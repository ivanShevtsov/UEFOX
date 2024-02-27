// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/GravityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UGravityComponent();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UGravityComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	void UGravityComponent::StaticRegisterNativesUGravityComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGravityComponent);
	UClass* Z_Construct_UClass_UGravityComponent_NoRegister()
	{
		return UGravityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGravityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGravityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GravityComponent.h" },
		{ "ModuleRelativePath", "GravityComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGravityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGravityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGravityComponent_Statics::ClassParams = {
		&UGravityComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGravityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGravityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGravityComponent()
	{
		if (!Z_Registration_Info_UClass_UGravityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGravityComponent.OuterSingleton, Z_Construct_UClass_UGravityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGravityComponent.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<UGravityComponent>()
	{
		return UGravityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGravityComponent);
	UGravityComponent::~UGravityComponent() {}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_GravityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_GravityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGravityComponent, UGravityComponent::StaticClass, TEXT("UGravityComponent"), &Z_Registration_Info_UClass_UGravityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGravityComponent), 1308660569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_GravityComponent_h_4270404082(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_GravityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_GravityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
