// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/AVehicleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAVehicleBase() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AVehicleBase_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AVehicleBase();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AVehicleBase::StaticRegisterNativesAVehicleBase()
	{
	}
	UClass* Z_Construct_UClass_AVehicleBase_NoRegister()
	{
		return AVehicleBase::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AVehicleBase.h" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Adding Transform component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AVehicleBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack_MetaData[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Current health" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack = { UE4CodeGen_Private::EPropertyClass::Int, "attack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVehicleBase, attack), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Public Variables\nThis will make it editable on the editor (i.e. Unity's inspector)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_health = { UE4CodeGen_Private::EPropertyClass::Int, "health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVehicleBase, health), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicleBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleBase_Statics::ClassParams = {
		&AVehicleBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AVehicleBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleBase, 771454469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleBase(Z_Construct_UClass_AVehicleBase, &AVehicleBase::StaticClass, TEXT("/Script/TwistedMario"), TEXT("AVehicleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
