// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Controller/PlayerViewMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerViewMode() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UPlayerViewMode_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UPlayerViewMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void UPlayerViewMode::StaticRegisterNativesUPlayerViewMode()
	{
	}
	UClass* Z_Construct_UClass_UPlayerViewMode_NoRegister()
	{
		return UPlayerViewMode::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerViewMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerViewMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Controller/PlayerViewMode.h" },
		{ "ModuleRelativePath", "Public/Controller/PlayerViewMode.h" },
		{ "ToolTip", "Define different ViewModes of the scene\nProvide functions for vset /viewmode" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerViewMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerViewMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerViewMode_Statics::ClassParams = {
		&UPlayerViewMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerViewMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerViewMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerViewMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerViewMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerViewMode, 3212452884);
	template<> UNREALCV_API UClass* StaticClass<UPlayerViewMode>()
	{
		return UPlayerViewMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerViewMode(Z_Construct_UClass_UPlayerViewMode, &UPlayerViewMode::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UPlayerViewMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerViewMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
