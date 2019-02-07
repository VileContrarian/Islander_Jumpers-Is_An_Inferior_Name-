// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/AFinishLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFinishLine() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AFinishLine_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AFinishLine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
// End Cross Module References
	void AFinishLine::StaticRegisterNativesAFinishLine()
	{
	}
	UClass* Z_Construct_UClass_AFinishLine_NoRegister()
	{
		return AFinishLine::StaticClass();
	}
	struct Z_Construct_UClass_AFinishLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinishLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinishLine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AFinishLine.h" },
		{ "ModuleRelativePath", "AFinishLine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinishLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinishLine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFinishLine_Statics::ClassParams = {
		&AFinishLine::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFinishLine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFinishLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinishLine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFinishLine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinishLine, 495174222);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinishLine(Z_Construct_UClass_AFinishLine, &AFinishLine::StaticClass, TEXT("/Script/TwistedMario"), TEXT("AFinishLine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinishLine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
