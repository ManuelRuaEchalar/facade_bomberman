// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PE_Facade_01/ConfiguracionNivel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfiguracionNivel() {}
// Cross Module References
	PE_FACADE_01_API UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister();
	PE_FACADE_01_API UClass* Z_Construct_UClass_UConfiguracionNivel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PE_Facade_01();
// End Cross Module References
	void UConfiguracionNivel::StaticRegisterNativesUConfiguracionNivel()
	{
	}
	UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister()
	{
		return UConfiguracionNivel::StaticClass();
	}
	struct Z_Construct_UClass_UConfiguracionNivel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfiguracionNivel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PE_Facade_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfiguracionNivel_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConfiguracionNivel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfiguracionNivel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IConfiguracionNivel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConfiguracionNivel_Statics::ClassParams = {
		&UConfiguracionNivel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConfiguracionNivel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfiguracionNivel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfiguracionNivel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConfiguracionNivel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConfiguracionNivel, 1497685667);
	template<> PE_FACADE_01_API UClass* StaticClass<UConfiguracionNivel>()
	{
		return UConfiguracionNivel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConfiguracionNivel(Z_Construct_UClass_UConfiguracionNivel, &UConfiguracionNivel::StaticClass, TEXT("/Script/PE_Facade_01"), TEXT("UConfiguracionNivel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfiguracionNivel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
