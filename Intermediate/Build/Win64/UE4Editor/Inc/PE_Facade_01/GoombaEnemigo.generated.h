// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PE_FACADE_01_GoombaEnemigo_generated_h
#error "GoombaEnemigo.generated.h already included, missing '#pragma once' in GoombaEnemigo.h"
#endif
#define PE_FACADE_01_GoombaEnemigo_generated_h

#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_SPARSE_DATA
#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPatrolRadius); \
	DECLARE_FUNCTION(execSetPatrolRadius); \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execStopPatrol); \
	DECLARE_FUNCTION(execStartPatrol);


#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPatrolRadius); \
	DECLARE_FUNCTION(execSetPatrolRadius); \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execStopPatrol); \
	DECLARE_FUNCTION(execStartPatrol);


#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoombaEnemigo(); \
	friend struct Z_Construct_UClass_AGoombaEnemigo_Statics; \
public: \
	DECLARE_CLASS(AGoombaEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PE_Facade_01"), NO_API) \
	DECLARE_SERIALIZER(AGoombaEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<AGoombaEnemigo*>(this); }


#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGoombaEnemigo(); \
	friend struct Z_Construct_UClass_AGoombaEnemigo_Statics; \
public: \
	DECLARE_CLASS(AGoombaEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PE_Facade_01"), NO_API) \
	DECLARE_SERIALIZER(AGoombaEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<AGoombaEnemigo*>(this); }


#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoombaEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoombaEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoombaEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoombaEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoombaEnemigo(AGoombaEnemigo&&); \
	NO_API AGoombaEnemigo(const AGoombaEnemigo&); \
public:


#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoombaEnemigo(AGoombaEnemigo&&); \
	NO_API AGoombaEnemigo(const AGoombaEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoombaEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoombaEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoombaEnemigo)


#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_PRIVATE_PROPERTY_OFFSET
#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_12_PROLOG
#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_PRIVATE_PROPERTY_OFFSET \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_SPARSE_DATA \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_RPC_WRAPPERS \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_INCLASS \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_PRIVATE_PROPERTY_OFFSET \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_SPARSE_DATA \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_INCLASS_NO_PURE_DECLS \
	PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PE_FACADE_01_API UClass* StaticClass<class AGoombaEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PE_Facade_Source_PE_Facade_01_GoombaEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
