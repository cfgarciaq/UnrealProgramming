// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownCpp/TopDownCppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownCppGameMode() {}
// Cross Module References
	TOPDOWNCPP_API UClass* Z_Construct_UClass_ATopDownCppGameMode_NoRegister();
	TOPDOWNCPP_API UClass* Z_Construct_UClass_ATopDownCppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopDownCpp();
// End Cross Module References
	void ATopDownCppGameMode::StaticRegisterNativesATopDownCppGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownCppGameMode);
	UClass* Z_Construct_UClass_ATopDownCppGameMode_NoRegister()
	{
		return ATopDownCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopDownCppGameMode.h" },
		{ "ModuleRelativePath", "TopDownCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownCppGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownCppGameMode_Statics::ClassParams = {
		&ATopDownCppGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownCppGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCppGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownCppGameMode()
	{
		if (!Z_Registration_Info_UClass_ATopDownCppGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownCppGameMode.OuterSingleton, Z_Construct_UClass_ATopDownCppGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownCppGameMode.OuterSingleton;
	}
	template<> TOPDOWNCPP_API UClass* StaticClass<ATopDownCppGameMode>()
	{
		return ATopDownCppGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownCppGameMode);
	struct Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_TopDownCppGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_TopDownCppGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownCppGameMode, ATopDownCppGameMode::StaticClass, TEXT("ATopDownCppGameMode"), &Z_Registration_Info_UClass_ATopDownCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownCppGameMode), 3377896058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_TopDownCppGameMode_h_2250853318(TEXT("/Script/TopDownCpp"),
		Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_TopDownCppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_TopDownCppGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
