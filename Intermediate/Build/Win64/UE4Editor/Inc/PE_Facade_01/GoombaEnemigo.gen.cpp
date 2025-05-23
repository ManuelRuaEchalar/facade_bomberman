// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PE_Facade_01/GoombaEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoombaEnemigo() {}
// Cross Module References
	PE_FACADE_01_API UClass* Z_Construct_UClass_AGoombaEnemigo_NoRegister();
	PE_FACADE_01_API UClass* Z_Construct_UClass_AGoombaEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PE_Facade_01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PE_FACADE_01_API UClass* Z_Construct_UClass_UGoombaPrototype_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGoombaEnemigo::execGetPatrolRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPatrolRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoombaEnemigo::execSetPatrolRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatrolRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoombaEnemigo::execGetMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoombaEnemigo::execSetMovementSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoombaEnemigo::execStopPatrol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPatrol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoombaEnemigo::execStartPatrol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPatrol();
		P_NATIVE_END;
	}
	void AGoombaEnemigo::StaticRegisterNativesAGoombaEnemigo()
	{
		UClass* Class = AGoombaEnemigo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovementSpeed", &AGoombaEnemigo::execGetMovementSpeed },
			{ "GetPatrolRadius", &AGoombaEnemigo::execGetPatrolRadius },
			{ "SetMovementSpeed", &AGoombaEnemigo::execSetMovementSpeed },
			{ "SetPatrolRadius", &AGoombaEnemigo::execSetPatrolRadius },
			{ "StartPatrol", &AGoombaEnemigo::execStartPatrol },
			{ "StopPatrol", &AGoombaEnemigo::execStopPatrol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics
	{
		struct GoombaEnemigo_eventGetMovementSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoombaEnemigo_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "GetMovementSpeed", nullptr, nullptr, sizeof(GoombaEnemigo_eventGetMovementSpeed_Parms), Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics
	{
		struct GoombaEnemigo_eventGetPatrolRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoombaEnemigo_eventGetPatrolRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "GetPatrolRadius", nullptr, nullptr, sizeof(GoombaEnemigo_eventGetPatrolRadius_Parms), Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics
	{
		struct GoombaEnemigo_eventSetMovementSpeed_Parms
		{
			float Speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoombaEnemigo_eventSetMovementSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Getter y Setter para las propiedades\n" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
		{ "ToolTip", "Getter y Setter para las propiedades" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "SetMovementSpeed", nullptr, nullptr, sizeof(GoombaEnemigo_eventSetMovementSpeed_Parms), Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics
	{
		struct GoombaEnemigo_eventSetPatrolRadius_Parms
		{
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoombaEnemigo_eventSetPatrolRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "SetPatrolRadius", nullptr, nullptr, sizeof(GoombaEnemigo_eventSetPatrolRadius_Parms), Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "// M\xc3\xa9todo para iniciar el movimiento de patrulla\n" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
		{ "ToolTip", "M\xc3\xa9todo para iniciar el movimiento de patrulla" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "StartPatrol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoombaEnemigo_StartPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "// M\xc3\xa9todo para detener el movimiento de patrulla\n" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
		{ "ToolTip", "M\xc3\xa9todo para detener el movimiento de patrulla" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "StopPatrol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoombaEnemigo_StopPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGoombaEnemigo_NoRegister()
	{
		return AGoombaEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AGoombaEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoombaEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PE_Facade_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoombaEnemigo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed, "GetMovementSpeed" }, // 3338803937
		{ &Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius, "GetPatrolRadius" }, // 734728913
		{ &Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed, "SetMovementSpeed" }, // 1106131631
		{ &Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius, "SetPatrolRadius" }, // 3281575412
		{ &Z_Construct_UFunction_AGoombaEnemigo_StartPatrol, "StartPatrol" }, // 2344501856
		{ &Z_Construct_UFunction_AGoombaEnemigo_StopPatrol, "StopPatrol" }, // 1914022992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoombaEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoombaEnemigo.h" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Componentes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
		{ "ToolTip", "Componentes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoombaEnemigo, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoombaEnemigo, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_RootComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoombaEnemigo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_RootComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGoombaEnemigo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGoombaPrototype_NoRegister, (int32)VTABLE_OFFSET(AGoombaEnemigo, IGoombaPrototype), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoombaEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoombaEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoombaEnemigo_Statics::ClassParams = {
		&AGoombaEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGoombaEnemigo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGoombaEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoombaEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoombaEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoombaEnemigo, 869417893);
	template<> PE_FACADE_01_API UClass* StaticClass<AGoombaEnemigo>()
	{
		return AGoombaEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoombaEnemigo(Z_Construct_UClass_AGoombaEnemigo, &AGoombaEnemigo::StaticClass, TEXT("/Script/PE_Facade_01"), TEXT("AGoombaEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoombaEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
