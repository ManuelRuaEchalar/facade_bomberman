// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PE_Facade_01/GestorMedio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorMedio() {}
// Cross Module References
	PE_FACADE_01_API UClass* Z_Construct_UClass_AGestorMedio_NoRegister();
	PE_FACADE_01_API UClass* Z_Construct_UClass_AGestorMedio();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PE_Facade_01();
	PE_FACADE_01_API UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister();
// End Cross Module References
	void AGestorMedio::StaticRegisterNativesAGestorMedio()
	{
	}
	UClass* Z_Construct_UClass_AGestorMedio_NoRegister()
	{
		return AGestorMedio::StaticClass();
	}
	struct Z_Construct_UClass_AGestorMedio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGestorMedio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PE_Facade_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGestorMedio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GestorMedio.h" },
		{ "ModuleRelativePath", "GestorMedio.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGestorMedio_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConfiguracionNivel_NoRegister, (int32)VTABLE_OFFSET(AGestorMedio, IConfiguracionNivel), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGestorMedio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorMedio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGestorMedio_Statics::ClassParams = {
		&AGestorMedio::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGestorMedio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGestorMedio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGestorMedio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGestorMedio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGestorMedio, 472579760);
	template<> PE_FACADE_01_API UClass* StaticClass<AGestorMedio>()
	{
		return AGestorMedio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGestorMedio(Z_Construct_UClass_AGestorMedio, &AGestorMedio::StaticClass, TEXT("/Script/PE_Facade_01"), TEXT("AGestorMedio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorMedio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
