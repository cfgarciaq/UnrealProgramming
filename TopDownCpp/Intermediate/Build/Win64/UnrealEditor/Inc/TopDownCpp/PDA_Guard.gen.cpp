// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownCpp/Public/PDA_Guard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDA_Guard() {}
// Cross Module References
	TOPDOWNCPP_API UClass* Z_Construct_UClass_UPDA_Guard_NoRegister();
	TOPDOWNCPP_API UClass* Z_Construct_UClass_UPDA_Guard();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_TopDownCpp();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UPDA_Guard::StaticRegisterNativesUPDA_Guard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDA_Guard);
	UClass* Z_Construct_UClass_UPDA_Guard_NoRegister()
	{
		return UPDA_Guard::StaticClass();
	}
	struct Z_Construct_UClass_UPDA_Guard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_healtPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_healtPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_armorPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_armorPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_armorDamageReduction_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_armorDamageReduction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_runSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gp_tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gp_tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDA_Guard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PDA_Guard.h" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::NewProp_healtPoints_MetaData[] = {
		{ "Category", "PDA_Guard" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDA_Guard_Statics::NewProp_healtPoints = { "healtPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDA_Guard, healtPoints), METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_healtPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_healtPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorPoints_MetaData[] = {
		{ "Category", "PDA_Guard" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorPoints = { "armorPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDA_Guard, armorPoints), METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorDamageReduction_MetaData[] = {
		{ "Category", "PDA_Guard" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorDamageReduction = { "armorDamageReduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDA_Guard, armorDamageReduction), METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorDamageReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorDamageReduction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "PDA_Guard" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDA_Guard_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDA_Guard, damage), METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "PDA_Guard" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPDA_Guard_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDA_Guard, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::NewProp_runSpeed_MetaData[] = {
		{ "Category", "PDA_Guard" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPDA_Guard_Statics::NewProp_runSpeed = { "runSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDA_Guard, runSpeed), METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_runSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_runSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Guard_Statics::NewProp_gp_tag_MetaData[] = {
		{ "Category", "PDA_Guard" },
		{ "ModuleRelativePath", "Public/PDA_Guard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPDA_Guard_Statics::NewProp_gp_tag = { "gp_tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDA_Guard, gp_tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_gp_tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::NewProp_gp_tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDA_Guard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Guard_Statics::NewProp_healtPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Guard_Statics::NewProp_armorDamageReduction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Guard_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Guard_Statics::NewProp_walkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Guard_Statics::NewProp_runSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Guard_Statics::NewProp_gp_tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDA_Guard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDA_Guard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDA_Guard_Statics::ClassParams = {
		&UPDA_Guard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPDA_Guard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDA_Guard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Guard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDA_Guard()
	{
		if (!Z_Registration_Info_UClass_UPDA_Guard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDA_Guard.OuterSingleton, Z_Construct_UClass_UPDA_Guard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDA_Guard.OuterSingleton;
	}
	template<> TOPDOWNCPP_API UClass* StaticClass<UPDA_Guard>()
	{
		return UPDA_Guard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDA_Guard);
	struct Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_PDA_Guard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_PDA_Guard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDA_Guard, UPDA_Guard::StaticClass, TEXT("UPDA_Guard"), &Z_Registration_Info_UClass_UPDA_Guard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDA_Guard), 1658753781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_PDA_Guard_h_3642201589(TEXT("/Script/TopDownCpp"),
		Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_PDA_Guard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownCpp_Source_TopDownCpp_Public_PDA_Guard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
