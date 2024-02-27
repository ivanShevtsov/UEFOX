// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnrealProject/Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UDamage();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_UDamage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyUnrealProject();
// End Cross Module References
	DEFINE_FUNCTION(IDamage::execOnDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamage_Implementation(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	struct Damage_eventOnDamage_Parms
	{
		float DamageAmount;
	};
	void IDamage::OnDamage(float DamageAmount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDamage instead.");
	}
	void UDamage::StaticRegisterNativesUDamage()
	{
		UClass* Class = UDamage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamage", &IDamage::execOnDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamage_OnDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamage_OnDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Damage_eventOnDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamage_OnDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamage_OnDamage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamage_OnDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Damage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamage_OnDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamage, nullptr, "OnDamage", nullptr, nullptr, sizeof(Damage_eventOnDamage_Parms), Z_Construct_UFunction_UDamage_OnDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamage_OnDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamage_OnDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamage_OnDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamage_OnDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamage_OnDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamage);
	UClass* Z_Construct_UClass_UDamage_NoRegister()
	{
		return UDamage::StaticClass();
	}
	struct Z_Construct_UClass_UDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnrealProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamage_OnDamage, "OnDamage" }, // 3890993707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamage_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Damage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamage_Statics::ClassParams = {
		&UDamage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamage()
	{
		if (!Z_Registration_Info_UClass_UDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamage.OuterSingleton, Z_Construct_UClass_UDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamage.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<UDamage>()
	{
		return UDamage::StaticClass();
	}
	UDamage::UDamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamage);
	UDamage::~UDamage() {}
	static FName NAME_UDamage_OnDamage = FName(TEXT("OnDamage"));
	void IDamage::Execute_OnDamage(UObject* O, float DamageAmount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamage::StaticClass()));
		Damage_eventOnDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamage_OnDamage);
		if (Func)
		{
			Parms.DamageAmount=DamageAmount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamage*)(O->GetNativeInterfaceAddress(UDamage::StaticClass())))
		{
			I->OnDamage_Implementation(DamageAmount);
		}
	}
	struct Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamage, UDamage::StaticClass, TEXT("UDamage"), &Z_Registration_Info_UClass_UDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamage), 2243925497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_3991806306(TEXT("/Script/MyUnrealProject"),
		Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnrealProject_Source_MyUnrealProject_Damage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
