// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef TWISTEDMARIO_UIBase_generated_h
#error "UIBase.generated.h already included, missing '#pragma once' in UIBase.h"
#endif
#define TWISTEDMARIO_UIBase_generated_h

#define TwistedMario_Source_TwistedMario_UIBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define TwistedMario_Source_TwistedMario_UIBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define TwistedMario_Source_TwistedMario_UIBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIBase(); \
	friend struct Z_Construct_UClass_AUIBase_Statics; \
public: \
	DECLARE_CLASS(AUIBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(AUIBase)


#define TwistedMario_Source_TwistedMario_UIBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAUIBase(); \
	friend struct Z_Construct_UClass_AUIBase_Statics; \
public: \
	DECLARE_CLASS(AUIBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(AUIBase)


#define TwistedMario_Source_TwistedMario_UIBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIBase(AUIBase&&); \
	NO_API AUIBase(const AUIBase&); \
public:


#define TwistedMario_Source_TwistedMario_UIBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIBase(AUIBase&&); \
	NO_API AUIBase(const AUIBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIBase)


#define TwistedMario_Source_TwistedMario_UIBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AUIBase, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AUIBase, CurrentWidget); }


#define TwistedMario_Source_TwistedMario_UIBase_h_13_PROLOG
#define TwistedMario_Source_TwistedMario_UIBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_UIBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_UIBase_h_16_RPC_WRAPPERS \
	TwistedMario_Source_TwistedMario_UIBase_h_16_INCLASS \
	TwistedMario_Source_TwistedMario_UIBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwistedMario_Source_TwistedMario_UIBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_UIBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_UIBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_UIBase_h_16_INCLASS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_UIBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwistedMario_Source_TwistedMario_UIBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
