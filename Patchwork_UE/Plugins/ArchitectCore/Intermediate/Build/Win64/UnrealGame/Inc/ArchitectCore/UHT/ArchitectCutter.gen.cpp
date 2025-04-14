// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectCore/Public/ArchitectCutter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchitectCutter() {}

// Begin Cross Module References
ARCHITECTCORE_API UClass* Z_Construct_UClass_AArchitectCutter();
ARCHITECTCORE_API UClass* Z_Construct_UClass_AArchitectCutter_NoRegister();
ARCHITECTCORE_API UEnum* Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_ArchitectCore();
// End Cross Module References

// Begin Enum EArchitectCutterMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchitectCutterMode;
static UEnum* EArchitectCutterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArchitectCutterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArchitectCutterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("EArchitectCutterMode"));
	}
	return Z_Registration_Info_UEnum_EArchitectCutterMode.OuterSingleton;
}
template<> ARCHITECTCORE_API UEnum* StaticEnum<EArchitectCutterMode>()
{
	return EArchitectCutterMode_StaticEnum();
}
struct Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.DisplayName", "Additive" },
		{ "Additive.Name", "EArchitectCutterMode::Additive" },
		{ "Additive.Tooltip", "Allows additional elements, like vines or decals, to be added based on overlapping points without altering the existing structure." },
		{ "BlueprintType", "true" },
		{ "Erase.DisplayName", "Erase" },
		{ "Erase.Name", "EArchitectCutterMode::Erase" },
		{ "Erase.Tooltip", "Deletes overlapping points from the building grid, preventing any structure from spawning in those slots." },
		{ "Modify.DisplayName", "Modify" },
		{ "Modify.Name", "EArchitectCutterMode::Modify" },
		{ "Modify.Tooltip", "Modifies overlapping points and assigns them back to the building grid as Door or Window slots." },
		{ "ModuleRelativePath", "Public/ArchitectCutter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArchitectCutterMode::Modify", (int64)EArchitectCutterMode::Modify },
		{ "EArchitectCutterMode::Erase", (int64)EArchitectCutterMode::Erase },
		{ "EArchitectCutterMode::Additive", (int64)EArchitectCutterMode::Additive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	"EArchitectCutterMode",
	"EArchitectCutterMode",
	Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode()
{
	if (!Z_Registration_Info_UEnum_EArchitectCutterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchitectCutterMode.InnerSingleton, Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArchitectCutterMode.InnerSingleton;
}
// End Enum EArchitectCutterMode

// Begin Class AArchitectCutter
void AArchitectCutter::StaticRegisterNativesAArchitectCutter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchitectCutter);
UClass* Z_Construct_UClass_AArchitectCutter_NoRegister()
{
	return AArchitectCutter::StaticClass();
}
struct Z_Construct_UClass_AArchitectCutter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArchitectCutter.h" },
		{ "ModuleRelativePath", "Public/ArchitectCutter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchitectCutter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArchitectCutter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchitectCutter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchitectCutter_Statics::ClassParams = {
	&AArchitectCutter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchitectCutter_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchitectCutter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArchitectCutter()
{
	if (!Z_Registration_Info_UClass_AArchitectCutter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchitectCutter.OuterSingleton, Z_Construct_UClass_AArchitectCutter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArchitectCutter.OuterSingleton;
}
template<> ARCHITECTCORE_API UClass* StaticClass<AArchitectCutter>()
{
	return AArchitectCutter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArchitectCutter);
AArchitectCutter::~AArchitectCutter() {}
// End Class AArchitectCutter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArchitectCutterMode_StaticEnum, TEXT("EArchitectCutterMode"), &Z_Registration_Info_UEnum_EArchitectCutterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1765296782U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArchitectCutter, AArchitectCutter::StaticClass, TEXT("AArchitectCutter"), &Z_Registration_Info_UClass_AArchitectCutter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchitectCutter), 487751384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_1066539313(TEXT("/Script/ArchitectCore"),
	Z_CompiledInDeferFile_FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
