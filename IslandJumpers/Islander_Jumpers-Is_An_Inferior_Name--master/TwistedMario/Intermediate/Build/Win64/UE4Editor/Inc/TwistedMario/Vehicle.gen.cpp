// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/Vehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicle() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AVehicle_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
// End Cross Module References
	void AVehicle::StaticRegisterNativesAVehicle()
	{
	}
	UClass* Z_Construct_UClass_AVehicle_NoRegister()
	{
		return AVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicle.h" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicle_Statics::ClassParams = {
		&AVehicle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicle, 790732851);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicle(Z_Construct_UClass_AVehicle, &AVehicle::StaticClass, TEXT("/Script/TwistedMario"), TEXT("AVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
