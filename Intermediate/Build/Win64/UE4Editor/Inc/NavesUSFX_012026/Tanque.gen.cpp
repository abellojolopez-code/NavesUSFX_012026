// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/Tanque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanque() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ATanque_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ATanque();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoTerrestre();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void ATanque::StaticRegisterNativesATanque()
	{
	}
	UClass* Z_Construct_UClass_ATanque_NoRegister()
	{
		return ATanque::StaticClass();
	}
	struct Z_Construct_UClass_ATanque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blindaje_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Blindaje;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATanque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATanque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tanque.h" },
		{ "ModuleRelativePath", "Tanque.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATanque_Statics::NewProp_Blindaje_MetaData[] = {
		{ "Category", "Tanque" },
		{ "ModuleRelativePath", "Tanque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATanque_Statics::NewProp_Blindaje = { "Blindaje", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATanque, Blindaje), METADATA_PARAMS(Z_Construct_UClass_ATanque_Statics::NewProp_Blindaje_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATanque_Statics::NewProp_Blindaje_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATanque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATanque_Statics::NewProp_Blindaje,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATanque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATanque_Statics::ClassParams = {
		&ATanque::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATanque_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATanque_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATanque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATanque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATanque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATanque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATanque, 905069010);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ATanque>()
	{
		return ATanque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATanque(Z_Construct_UClass_ATanque, &ATanque::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ATanque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATanque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
