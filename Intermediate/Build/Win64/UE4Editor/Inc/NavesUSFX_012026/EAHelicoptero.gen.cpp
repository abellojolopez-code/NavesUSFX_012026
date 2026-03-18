// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/EAHelicoptero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAHelicoptero() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEAHelicoptero_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEAHelicoptero();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoAereo();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void AEAHelicoptero::StaticRegisterNativesAEAHelicoptero()
	{
	}
	UClass* Z_Construct_UClass_AEAHelicoptero_NoRegister()
	{
		return AEAHelicoptero::StaticClass();
	}
	struct Z_Construct_UClass_AEAHelicoptero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadRotor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadRotor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEAHelicoptero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAereo,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEAHelicoptero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EAHelicoptero.h" },
		{ "ModuleRelativePath", "EAHelicoptero.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEAHelicoptero_Statics::NewProp_VelocidadRotor_MetaData[] = {
		{ "Category", "Helicoptero" },
		{ "ModuleRelativePath", "EAHelicoptero.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEAHelicoptero_Statics::NewProp_VelocidadRotor = { "VelocidadRotor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEAHelicoptero, VelocidadRotor), METADATA_PARAMS(Z_Construct_UClass_AEAHelicoptero_Statics::NewProp_VelocidadRotor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEAHelicoptero_Statics::NewProp_VelocidadRotor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEAHelicoptero_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEAHelicoptero_Statics::NewProp_VelocidadRotor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEAHelicoptero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEAHelicoptero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEAHelicoptero_Statics::ClassParams = {
		&AEAHelicoptero::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEAHelicoptero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEAHelicoptero_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEAHelicoptero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEAHelicoptero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEAHelicoptero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEAHelicoptero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEAHelicoptero, 1177994446);
	template<> NAVESUSFX_012026_API UClass* StaticClass<AEAHelicoptero>()
	{
		return AEAHelicoptero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEAHelicoptero(Z_Construct_UClass_AEAHelicoptero, &AEAHelicoptero::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("AEAHelicoptero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEAHelicoptero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
