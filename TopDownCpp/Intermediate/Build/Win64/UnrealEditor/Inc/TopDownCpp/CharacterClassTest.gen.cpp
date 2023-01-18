// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownCpp/Public/CharacterClassTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterClassTest() {}
// Cross Module References
	TOPDOWNCPP_API UClass* Z_Construct_UClass_ACharacterClassTest_NoRegister();
	TOPDOWNCPP_API UClass* Z_Construct_UClass_ACharacterClassTest();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownCpp();
// End Cross Module References
	void ACharacterClassTest::StaticRegisterNativesACharacterClassTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterClassTest);
	UClass* Z_Construct_UClass_ACharacterClassTest_NoRegister()
	{
		return ACharacterClassTest::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterClassTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterClassTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterClassTest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterClassTest.h" },
		{ "ModuleRelativePath", "Public/CharacterClassTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterClassTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterClassTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterClassTest_Statics::ClassParams = {
		&ACharacterClassTest::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterClassTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterClassTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterClassTest()
	{
		if (!Z_Registration_Info_UClass_ACharacterClassTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterClassTest.OuterSingleton, Z_Construct_UClass_ACharacterClassTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterClassTest.OuterSingleton;
	}
	template<> TOPDOWNCPP_API UClass* StaticClass<ACharacterClassTest>()
	{
		return ACharacterClassTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterClassTest);
	struct Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_CharacterClassTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_CharacterClassTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterClassTest, ACharacterClassTest::StaticClass, TEXT("ACharacterClassTest"), &Z_Registration_Info_UClass_ACharacterClassTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterClassTest), 4102960844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_CharacterClassTest_h_3829637838(TEXT("/Script/TopDownCpp"),
		Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_CharacterClassTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_CharacterClassTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
