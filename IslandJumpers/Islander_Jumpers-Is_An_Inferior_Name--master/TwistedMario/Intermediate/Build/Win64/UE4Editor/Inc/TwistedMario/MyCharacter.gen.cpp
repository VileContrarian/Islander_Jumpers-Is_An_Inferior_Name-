// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
// End Cross Module References
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UltProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHealthPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerHealthPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHealthAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerHealthAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_UltProgress_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "players max HP" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_UltProgress = { UE4CodeGen_Private::EPropertyClass::Float, "UltProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, UltProgress), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_UltProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_UltProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthPercent_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "Player health, set to 50 to show health bar change\nbrings the players health percentage into the blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthPercent = { UE4CodeGen_Private::EPropertyClass::Float, "playerHealthPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, playerHealthPercent), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthPercent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthAmount_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "brings the players health into the blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthAmount = { UE4CodeGen_Private::EPropertyClass::Float, "playerHealthAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, playerHealthAmount), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_UltProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_playerHealthAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacter, 2858191227);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/TwistedMario"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
