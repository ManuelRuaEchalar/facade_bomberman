// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PE_Facade_01/PE_Facade_01GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePE_Facade_01GameMode() {}
// Cross Module References
	PE_FACADE_01_API UClass* Z_Construct_UClass_APE_Facade_01GameMode_NoRegister();
	PE_FACADE_01_API UClass* Z_Construct_UClass_APE_Facade_01GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PE_Facade_01();
// End Cross Module References
	void APE_Facade_01GameMode::StaticRegisterNativesAPE_Facade_01GameMode()
	{
	}
	UClass* Z_Construct_UClass_APE_Facade_01GameMode_NoRegister()
	{
		return APE_Facade_01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APE_Facade_01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APE_Facade_01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PE_Facade_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APE_Facade_01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PE_Facade_01GameMode.h" },
		{ "ModuleRelativePath", "PE_Facade_01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APE_Facade_01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APE_Facade_01GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APE_Facade_01GameMode_Statics::ClassParams = {
		&APE_Facade_01GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APE_Facade_01GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APE_Facade_01GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APE_Facade_01GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APE_Facade_01GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APE_Facade_01GameMode, 3041288998);
	template<> PE_FACADE_01_API UClass* StaticClass<APE_Facade_01GameMode>()
	{
		return APE_Facade_01GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APE_Facade_01GameMode(Z_Construct_UClass_APE_Facade_01GameMode, &APE_Facade_01GameMode::StaticClass, TEXT("/Script/PE_Facade_01"), TEXT("APE_Facade_01GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APE_Facade_01GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
