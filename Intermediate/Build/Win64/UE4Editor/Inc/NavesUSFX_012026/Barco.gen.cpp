// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/Barco.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarco() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ABarco_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ABarco();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoAcuatico();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void ABarco::StaticRegisterNativesABarco()
	{
	}
	UClass* Z_Construct_UClass_ABarco_NoRegister()
	{
		return ABarco::StaticClass();
	}
	struct Z_Construct_UClass_ABarco_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumeroTripulantes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumeroTripulantes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarco_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAcuatico,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barco.h" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarco_Statics::NewProp_NumeroTripulantes_MetaData[] = {
		{ "Category", "Barco" },
		{ "ModuleRelativePath", "Barco.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABarco_Statics::NewProp_NumeroTripulantes = { "NumeroTripulantes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarco, NumeroTripulantes), METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::NewProp_NumeroTripulantes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::NewProp_NumeroTripulantes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarco_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarco_Statics::NewProp_NumeroTripulantes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarco_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarco>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarco_Statics::ClassParams = {
		&ABarco::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABarco_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarco_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarco_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarco()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarco_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarco, 3198396773);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ABarco>()
	{
		return ABarco::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarco(Z_Construct_UClass_ABarco, &ABarco::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ABarco"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarco);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
