// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PE_Facade_01/GestorDificil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorDificil() {}
// Cross Module References
	PE_FACADE_01_API UClass* Z_Construct_UClass_AGestorDificil_NoRegister();
	PE_FACADE_01_API UClass* Z_Construct_UClass_AGestorDificil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PE_Facade_01();
	PE_FACADE_01_API UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister();
// End Cross Module References
	void AGestorDificil::StaticRegisterNativesAGestorDificil()
	{
	}
	UClass* Z_Construct_UClass_AGestorDificil_NoRegister()
	{
		return AGestorDificil::StaticClass();
	}
	struct Z_Construct_UClass_AGestorDificil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGestorDificil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PE_Facade_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGestorDificil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GestorDificil.h" },
		{ "ModuleRelativePath", "GestorDificil.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGestorDificil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConfiguracionNivel_NoRegister, (int32)VTABLE_OFFSET(AGestorDificil, IConfiguracionNivel), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGestorDificil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorDificil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGestorDificil_Statics::ClassParams = {
		&AGestorDificil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGestorDificil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDificil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGestorDificil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGestorDificil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGestorDificil, 705623284);
	template<> PE_FACADE_01_API UClass* StaticClass<AGestorDificil>()
	{
		return AGestorDificil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGestorDificil(Z_Construct_UClass_AGestorDificil, &AGestorDificil::StaticClass, TEXT("/Script/PE_Facade_01"), TEXT("AGestorDificil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorDificil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
