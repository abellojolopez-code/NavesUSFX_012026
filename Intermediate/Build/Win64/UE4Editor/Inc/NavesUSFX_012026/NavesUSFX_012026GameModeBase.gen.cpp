// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/NavesUSFX_012026GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesUSFX_012026GameModeBase() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ANavesUSFX_012026GameModeBase_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ANavesUSFX_012026GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void ANavesUSFX_012026GameModeBase::StaticRegisterNativesANavesUSFX_012026GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ANavesUSFX_012026GameModeBase_NoRegister()
	{
		return ANavesUSFX_012026GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesUSFX_012026GameModeBase.h" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesUSFX_012026GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics::ClassParams = {
		&ANavesUSFX_012026GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesUSFX_012026GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesUSFX_012026GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesUSFX_012026GameModeBase, 1419065275);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ANavesUSFX_012026GameModeBase>()
	{
		return ANavesUSFX_012026GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesUSFX_012026GameModeBase(Z_Construct_UClass_ANavesUSFX_012026GameModeBase, &ANavesUSFX_012026GameModeBase::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ANavesUSFX_012026GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesUSFX_012026GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
