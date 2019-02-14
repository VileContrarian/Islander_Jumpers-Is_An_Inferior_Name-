// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWISTEDMARIO_Vehicle_generated_h
#error "Vehicle.generated.h already included, missing '#pragma once' in Vehicle.h"
#endif
#define TWISTEDMARIO_Vehicle_generated_h

#define TwistedMario_Source_TwistedMario_Vehicle_h_12_RPC_WRAPPERS
#define TwistedMario_Source_TwistedMario_Vehicle_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TwistedMario_Source_TwistedMario_Vehicle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicle(); \
	friend struct Z_Construct_UClass_AVehicle_Statics; \
public: \
	DECLARE_CLASS(AVehicle, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(AVehicle)


#define TwistedMario_Source_TwistedMario_Vehicle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVehicle(); \
	friend struct Z_Construct_UClass_AVehicle_Statics; \
public: \
	DECLARE_CLASS(AVehicle, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(AVehicle)


#define TwistedMario_Source_TwistedMario_Vehicle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicle(AVehicle&&); \
	NO_API AVehicle(const AVehicle&); \
public:


#define TwistedMario_Source_TwistedMario_Vehicle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicle(AVehicle&&); \
	NO_API AVehicle(const AVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehicle)


#define TwistedMario_Source_TwistedMario_Vehicle_h_12_PRIVATE_PROPERTY_OFFSET
#define TwistedMario_Source_TwistedMario_Vehicle_h_9_PROLOG
#define TwistedMario_Source_TwistedMario_Vehicle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_RPC_WRAPPERS \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_INCLASS \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwistedMario_Source_TwistedMario_Vehicle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_INCLASS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_Vehicle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwistedMario_Source_TwistedMario_Vehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
