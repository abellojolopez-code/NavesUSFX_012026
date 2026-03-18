// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/EAAvion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAAvion() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEAAvion_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEAAvion();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoAereo();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void AEAAvion::StaticRegisterNativesAEAAvion()
	{
	}
	UClass* Z_Construct_UClass_AEAAvion_NoRegister()
	{
		return AEAAvion::StaticClass();
	}
	struct Z_Construct_UClass_AEAAvion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlturaMaxima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlturaMaxima;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEAAvion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAereo,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEAAvion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EAAvion.h" },
		{ "ModuleRelativePath", "EAAvion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEAAvion_Statics::NewProp_AlturaMaxima_MetaData[] = {
		{ "Category", "Avion" },
		{ "ModuleRelativePath", "EAAvion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEAAvion_Statics::NewProp_AlturaMaxima = { "AlturaMaxima", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEAAvion, AlturaMaxima), METADATA_PARAMS(Z_Construct_UClass_AEAAvion_Statics::NewProp_AlturaMaxima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEAAvion_Statics::NewProp_AlturaMaxima_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEAAvion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEAAvion_Statics::NewProp_AlturaMaxima,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEAAvion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEAAvion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEAAvion_Statics::ClassParams = {
		&AEAAvion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEAAvion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEAAvion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEAAvion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEAAvion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEAAvion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEAAvion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEAAvion, 3654390574);
	template<> NAVESUSFX_012026_API UClass* StaticClass<AEAAvion>()
	{
		return AEAAvion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEAAvion(Z_Construct_UClass_AEAAvion, &AEAAvion::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("AEAAvion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEAAvion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
