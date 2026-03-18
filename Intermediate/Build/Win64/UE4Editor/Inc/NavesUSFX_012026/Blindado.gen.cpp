// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/Blindado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindado() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ABlindado_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ABlindado();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoTerrestre();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void ABlindado::StaticRegisterNativesABlindado()
	{
	}
	UClass* Z_Construct_UClass_ABlindado_NoRegister()
	{
		return ABlindado::StaticClass();
	}
	struct Z_Construct_UClass_ABlindado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResistenciaExtra_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResistenciaExtra;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlindado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlindado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blindado.h" },
		{ "ModuleRelativePath", "Blindado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlindado_Statics::NewProp_ResistenciaExtra_MetaData[] = {
		{ "Category", "Blindado" },
		{ "ModuleRelativePath", "Blindado.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlindado_Statics::NewProp_ResistenciaExtra = { "ResistenciaExtra", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlindado, ResistenciaExtra), METADATA_PARAMS(Z_Construct_UClass_ABlindado_Statics::NewProp_ResistenciaExtra_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlindado_Statics::NewProp_ResistenciaExtra_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlindado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlindado_Statics::NewProp_ResistenciaExtra,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlindado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlindado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlindado_Statics::ClassParams = {
		&ABlindado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlindado_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlindado_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlindado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlindado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlindado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlindado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlindado, 3462265181);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ABlindado>()
	{
		return ABlindado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlindado(Z_Construct_UClass_ABlindado, &ABlindado::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ABlindado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlindado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
