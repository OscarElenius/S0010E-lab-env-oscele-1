// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "oscele_1_Lab1_Task4/oscele_1_Lab1_Task4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeoscele_1_Lab1_Task4GameModeBase() {}
// Cross Module References
	OSCELE_1_LAB1_TASK4_API UClass* Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_NoRegister();
	OSCELE_1_LAB1_TASK4_API UClass* Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_oscele_1_Lab1_Task4();
// End Cross Module References
	void Aoscele_1_Lab1_Task4GameModeBase::StaticRegisterNativesAoscele_1_Lab1_Task4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_NoRegister()
	{
		return Aoscele_1_Lab1_Task4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_oscele_1_Lab1_Task4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "oscele_1_Lab1_Task4GameModeBase.h" },
		{ "ModuleRelativePath", "oscele_1_Lab1_Task4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aoscele_1_Lab1_Task4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics::ClassParams = {
		&Aoscele_1_Lab1_Task4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aoscele_1_Lab1_Task4GameModeBase, 3188176447);
	template<> OSCELE_1_LAB1_TASK4_API UClass* StaticClass<Aoscele_1_Lab1_Task4GameModeBase>()
	{
		return Aoscele_1_Lab1_Task4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aoscele_1_Lab1_Task4GameModeBase(Z_Construct_UClass_Aoscele_1_Lab1_Task4GameModeBase, &Aoscele_1_Lab1_Task4GameModeBase::StaticClass, TEXT("/Script/oscele_1_Lab1_Task4"), TEXT("Aoscele_1_Lab1_Task4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aoscele_1_Lab1_Task4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
