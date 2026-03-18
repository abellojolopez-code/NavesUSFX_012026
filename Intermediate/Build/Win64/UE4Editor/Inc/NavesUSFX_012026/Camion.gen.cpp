// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/Camion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamion() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ACamion_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ACamion();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoTerrestre();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void ACamion::StaticRegisterNativesACamion()
	{
	}
	UClass* Z_Construct_UClass_ACamion_NoRegister()
	{
		return ACamion::StaticClass();
	}
	struct Z_Construct_UClass_ACamion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapacidadCarga_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapacidadCarga;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camion.h" },
		{ "ModuleRelativePath", "Camion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamion_Statics::NewProp_CapacidadCarga_MetaData[] = {
		{ "Category", "Camion" },
		{ "ModuleRelativePath", "Camion.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACamion_Statics::NewProp_CapacidadCarga = { "CapacidadCarga", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamion, CapacidadCarga), METADATA_PARAMS(Z_Construct_UClass_ACamion_Statics::NewProp_CapacidadCarga_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamion_Statics::NewProp_CapacidadCarga_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamion_Statics::NewProp_CapacidadCarga,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamion_Statics::ClassParams = {
		&ACamion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACamion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACamion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamion, 782181290);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ACamion>()
	{
		return ACamion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamion(Z_Construct_UClass_ACamion, &ACamion::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ACamion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
