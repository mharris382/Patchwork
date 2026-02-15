// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectCutter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeArchitectCutter() {}

// ********** Begin Cross Module References ********************************************************
ARCHITECTCORE_API UClass* Z_Construct_UClass_AArchitectCutter();
ARCHITECTCORE_API UClass* Z_Construct_UClass_AArchitectCutter_NoRegister();
ARCHITECTCORE_API UEnum* Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_ArchitectCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EArchitectCutterMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchitectCutterMode;
static UEnum* EArchitectCutterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArchitectCutterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArchitectCutterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("EArchitectCutterMode"));
	}
	return Z_Registration_Info_UEnum_EArchitectCutterMode.OuterSingleton;
}
template<> ARCHITECTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EArchitectCutterMode>()
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
}; // struct Z_Construct_UEnum_ArchitectCore_EArchitectCutterMode_Statics 
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
// ********** End Enum EArchitectCutterMode ********************************************************

// ********** Begin Class AArchitectCutter *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AArchitectCutter;
UClass* AArchitectCutter::GetPrivateStaticClass()
{
	using TClass = AArchitectCutter;
	if (!Z_Registration_Info_UClass_AArchitectCutter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ArchitectCutter"),
			Z_Registration_Info_UClass_AArchitectCutter.InnerSingleton,
			StaticRegisterNativesAArchitectCutter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AArchitectCutter.InnerSingleton;
}
UClass* Z_Construct_UClass_AArchitectCutter_NoRegister()
{
	return AArchitectCutter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AArchitectCutter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArchitectCutter.h" },
		{ "ModuleRelativePath", "Public/ArchitectCutter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AArchitectCutter constinit property declarations *************************
// ********** End Class AArchitectCutter constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchitectCutter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AArchitectCutter_Statics
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
void AArchitectCutter::StaticRegisterNativesAArchitectCutter()
{
}
UClass* Z_Construct_UClass_AArchitectCutter()
{
	if (!Z_Registration_Info_UClass_AArchitectCutter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchitectCutter.OuterSingleton, Z_Construct_UClass_AArchitectCutter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArchitectCutter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AArchitectCutter);
AArchitectCutter::~AArchitectCutter() {}
// ********** End Class AArchitectCutter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h__Script_ArchitectCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArchitectCutterMode_StaticEnum, TEXT("EArchitectCutterMode"), &Z_Registration_Info_UEnum_EArchitectCutterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1033905406U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArchitectCutter, AArchitectCutter::StaticClass, TEXT("AArchitectCutter"), &Z_Registration_Info_UClass_AArchitectCutter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchitectCutter), 1874692180U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h__Script_ArchitectCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h__Script_ArchitectCore_2973147234{
	TEXT("/Script/ArchitectCore"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h__Script_ArchitectCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h__Script_ArchitectCore_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h__Script_ArchitectCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h__Script_ArchitectCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
