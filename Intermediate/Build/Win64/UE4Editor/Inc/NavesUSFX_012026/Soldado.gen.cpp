// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/Soldado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoldado() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ASoldado_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ASoldado();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoTerrestre();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void ASoldado::StaticRegisterNativesASoldado()
	{
	}
	UClass* Z_Construct_UClass_ASoldado_NoRegister()
	{
		return ASoldado::StaticClass();
	}
	struct Z_Construct_UClass_ASoldado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Municion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Municion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoldado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoldado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Soldado.h" },
		{ "ModuleRelativePath", "Soldado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoldado_Statics::NewProp_Municion_MetaData[] = {
		{ "Category", "Soldado" },
		{ "ModuleRelativePath", "Soldado.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASoldado_Statics::NewProp_Municion = { "Municion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoldado, Municion), METADATA_PARAMS(Z_Construct_UClass_ASoldado_Statics::NewProp_Municion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoldado_Statics::NewProp_Municion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoldado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoldado_Statics::NewProp_Municion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoldado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoldado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoldado_Statics::ClassParams = {
		&ASoldado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASoldado_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASoldado_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASoldado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASoldado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoldado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoldado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoldado, 3961012191);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ASoldado>()
	{
		return ASoldado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoldado(Z_Construct_UClass_ASoldado, &ASoldado::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ASoldado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoldado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
