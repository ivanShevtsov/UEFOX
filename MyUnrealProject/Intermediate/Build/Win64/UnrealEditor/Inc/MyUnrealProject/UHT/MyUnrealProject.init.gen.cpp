// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUnrealProject_init() {}
	MYUNREALPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyUnrealProject_OnHealthChangedDelegate__DelegateSignature();
	MYUNREALPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyUnrealProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyUnrealProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MyUnrealProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyUnrealProject_OnHealthChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MyUnrealProject_SpawnEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyUnrealProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC2481102,
				0xF1E36ECD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyUnrealProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyUnrealProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyUnrealProject(Z_Construct_UPackage__Script_MyUnrealProject, TEXT("/Script/MyUnrealProject"), Z_Registration_Info_UPackage__Script_MyUnrealProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC2481102, 0xF1E36ECD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
