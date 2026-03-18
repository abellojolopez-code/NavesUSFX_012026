// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/EnemigoAereo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAereo() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoAereo_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoAereo();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void AEnemigoAereo::StaticRegisterNativesAEnemigoAereo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAereo_NoRegister()
	{
		return AEnemigoAereo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAereo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadVuelo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadVuelo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAereo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAereo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoAereo.h" },
		{ "ModuleRelativePath", "EnemigoAereo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAereo_Statics::NewProp_VelocidadVuelo_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoAereo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoAereo_Statics::NewProp_VelocidadVuelo = { "VelocidadVuelo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAereo, VelocidadVuelo), METADATA_PARAMS(Z_Construct_UClass_AEnemigoAereo_Statics::NewProp_VelocidadVuelo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo_Statics::NewProp_VelocidadVuelo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoAereo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAereo_Statics::NewProp_VelocidadVuelo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAereo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAereo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAereo_Statics::ClassParams = {
		&AEnemigoAereo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoAereo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAereo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAereo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAereo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAereo, 373521830);
	template<> NAVESUSFX_012026_API UClass* StaticClass<AEnemigoAereo>()
	{
		return AEnemigoAereo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAereo(Z_Construct_UClass_AEnemigoAereo, &AEnemigoAereo::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("AEnemigoAereo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAereo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
