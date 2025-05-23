// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PE_Facade_01/GoombaPrototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoombaPrototype() {}
// Cross Module References
	PE_FACADE_01_API UClass* Z_Construct_UClass_UGoombaPrototype_NoRegister();
	PE_FACADE_01_API UClass* Z_Construct_UClass_UGoombaPrototype();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PE_Facade_01();
// End Cross Module References
	void UGoombaPrototype::StaticRegisterNativesUGoombaPrototype()
	{
	}
	UClass* Z_Construct_UClass_UGoombaPrototype_NoRegister()
	{
		return UGoombaPrototype::StaticClass();
	}
	struct Z_Construct_UClass_UGoombaPrototype_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoombaPrototype_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PE_Facade_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoombaPrototype_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoombaPrototype.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoombaPrototype_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGoombaPrototype>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoombaPrototype_Statics::ClassParams = {
		&UGoombaPrototype::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGoombaPrototype_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoombaPrototype_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoombaPrototype()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoombaPrototype_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoombaPrototype, 4214893257);
	template<> PE_FACADE_01_API UClass* StaticClass<UGoombaPrototype>()
	{
		return UGoombaPrototype::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoombaPrototype(Z_Construct_UClass_UGoombaPrototype, &UGoombaPrototype::StaticClass, TEXT("/Script/PE_Facade_01"), TEXT("UGoombaPrototype"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoombaPrototype);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
