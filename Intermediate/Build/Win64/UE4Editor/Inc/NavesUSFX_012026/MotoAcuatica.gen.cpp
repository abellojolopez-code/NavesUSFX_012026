// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/MotoAcuatica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotoAcuatica() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AMotoAcuatica_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AMotoAcuatica();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigoAcuatico();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void AMotoAcuatica::StaticRegisterNativesAMotoAcuatica()
	{
	}
	UClass* Z_Construct_UClass_AMotoAcuatica_NoRegister()
	{
		return AMotoAcuatica::StaticClass();
	}
	struct Z_Construct_UClass_AMotoAcuatica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadTurbo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadTurbo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotoAcuatica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAcuatico,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotoAcuatica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotoAcuatica.h" },
		{ "ModuleRelativePath", "MotoAcuatica.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotoAcuatica_Statics::NewProp_VelocidadTurbo_MetaData[] = {
		{ "Category", "MotoAcuatica" },
		{ "ModuleRelativePath", "MotoAcuatica.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotoAcuatica_Statics::NewProp_VelocidadTurbo = { "VelocidadTurbo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotoAcuatica, VelocidadTurbo), METADATA_PARAMS(Z_Construct_UClass_AMotoAcuatica_Statics::NewProp_VelocidadTurbo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotoAcuatica_Statics::NewProp_VelocidadTurbo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotoAcuatica_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotoAcuatica_Statics::NewProp_VelocidadTurbo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotoAcuatica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotoAcuatica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotoAcuatica_Statics::ClassParams = {
		&AMotoAcuatica::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMotoAcuatica_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotoAcuatica_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotoAcuatica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotoAcuatica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotoAcuatica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotoAcuatica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotoAcuatica, 4073223565);
	template<> NAVESUSFX_012026_API UClass* StaticClass<AMotoAcuatica>()
	{
		return AMotoAcuatica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotoAcuatica(Z_Construct_UClass_AMotoAcuatica, &AMotoAcuatica::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("AMotoAcuatica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotoAcuatica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
