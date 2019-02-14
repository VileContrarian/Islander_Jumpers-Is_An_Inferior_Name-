// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/UIBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIBase() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AUIBase_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AUIBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AUIBase_ChangeMenuWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AUIBase::StaticRegisterNativesAUIBase()
	{
		UClass* Class = AUIBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AUIBase::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics
	{
		struct UIBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "NewWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(UIBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "I_J_UI" },
		{ "ModuleRelativePath", "UIBase.h" },
		{ "ToolTip", "Remove the current menu widget and create a new one from the specified class, if provided." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIBase, "ChangeMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UIBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUIBase_NoRegister()
	{
		return AUIBase::StaticClass();
	}
	struct Z_Construct_UClass_AUIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUIBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUIBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 4289492160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UIBase.h" },
		{ "ModuleRelativePath", "UIBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UIBase.h" },
		{ "ToolTip", "The widget instance that we are using as our menu." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIBase_Statics::NewProp_CurrentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AUIBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIBase_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUIBase_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIBase_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "I_J_UI" },
		{ "ModuleRelativePath", "UIBase.h" },
		{ "ToolTip", "The widget class we will use as our menu when the game starts." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUIBase_Statics::NewProp_StartingWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "StartingWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000015, 1, nullptr, STRUCT_OFFSET(AUIBase, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUIBase_Statics::NewProp_StartingWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUIBase_Statics::NewProp_StartingWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIBase_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIBase_Statics::NewProp_StartingWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIBase_Statics::ClassParams = {
		&AUIBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AUIBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AUIBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUIBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIBase, 253046019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIBase(Z_Construct_UClass_AUIBase, &AUIBase::StaticClass, TEXT("/Script/TwistedMario"), TEXT("AUIBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
