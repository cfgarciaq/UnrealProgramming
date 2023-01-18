// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownCpp/Public/ActorClassTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorClassTest() {}
// Cross Module References
	TOPDOWNCPP_API UClass* Z_Construct_UClass_AActorClassTest_NoRegister();
	TOPDOWNCPP_API UClass* Z_Construct_UClass_AActorClassTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopDownCpp();
// End Cross Module References
	void AActorClassTest::StaticRegisterNativesAActorClassTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorClassTest);
	UClass* Z_Construct_UClass_AActorClassTest_NoRegister()
	{
		return AActorClassTest::StaticClass();
	}
	struct Z_Construct_UClass_AActorClassTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorClassTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorClassTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorClassTest.h" },
		{ "ModuleRelativePath", "Public/ActorClassTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorClassTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorClassTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorClassTest_Statics::ClassParams = {
		&AActorClassTest::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AActorClassTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorClassTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorClassTest()
	{
		if (!Z_Registration_Info_UClass_AActorClassTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorClassTest.OuterSingleton, Z_Construct_UClass_AActorClassTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorClassTest.OuterSingleton;
	}
	template<> TOPDOWNCPP_API UClass* StaticClass<AActorClassTest>()
	{
		return AActorClassTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorClassTest);
	struct Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_ActorClassTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_ActorClassTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorClassTest, AActorClassTest::StaticClass, TEXT("AActorClassTest"), &Z_Registration_Info_UClass_AActorClassTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorClassTest), 736344618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_ActorClassTest_h_216071737(TEXT("/Script/TopDownCpp"),
		Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_ActorClassTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_ActorClassTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
