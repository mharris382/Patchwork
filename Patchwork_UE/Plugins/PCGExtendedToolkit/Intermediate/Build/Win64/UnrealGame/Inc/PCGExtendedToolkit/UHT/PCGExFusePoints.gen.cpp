// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExFusePoints.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Data/PCGExDataFilter.h"
#include "Details/PCGExDetailsIntersection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFusePoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFusePointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFusePointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFusePointsSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFusePointsSettings;
UClass* UPCGExFusePointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFusePointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExFusePointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFusePointsSettings"),
			Z_Registration_Info_UClass_UPCGExFusePointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFusePointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExFusePointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFusePointsSettings_NoRegister()
{
	return UPCGExFusePointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFusePointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExFusePoints.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFusePoints.h" },
		{ "PCGExNodeLibraryDoc", "misc/fuse-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointPointIntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fuse Settings */" },
		{ "DisplayName", "Point/Point Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFusePoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fuse Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Preserve the order of input points */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFusePoints.h" },
		{ "ToolTip", "Preserve the order of input points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFusePoints.h" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFusePoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFusePointsSettings constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointPointIntersectionDetails;
	static void NewProp_bPreserveOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendingDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFusePointsSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFusePointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFusePointsSettings_Statics

// ********** Begin Class UPCGExFusePointsSettings Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_PointPointIntersectionDetails = { "PointPointIntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFusePointsSettings, PointPointIntersectionDetails), Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointPointIntersectionDetails_MetaData), NewProp_PointPointIntersectionDetails_MetaData) }; // 2944920897
void Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_bPreserveOrder_SetBit(void* Obj)
{
	((UPCGExFusePointsSettings*)Obj)->bPreserveOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_bPreserveOrder = { "bPreserveOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFusePointsSettings), &Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_bPreserveOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveOrder_MetaData), NewProp_bPreserveOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_BlendingDetails = { "BlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFusePointsSettings, BlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingDetails_MetaData), NewProp_BlendingDetails_MetaData) }; // 1694264898
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFusePointsSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFusePointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_PointPointIntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_bPreserveOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_BlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFusePointsSettings_Statics::NewProp_CarryOverDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFusePointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFusePointsSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExFusePointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFusePointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFusePointsSettings_Statics::ClassParams = {
	&UPCGExFusePointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFusePointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFusePointsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFusePointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFusePointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExFusePointsSettings::StaticRegisterNativesUPCGExFusePointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFusePointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFusePointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFusePointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExFusePointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFusePointsSettings.OuterSingleton;
}
UPCGExFusePointsSettings::UPCGExFusePointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFusePointsSettings);
UPCGExFusePointsSettings::~UPCGExFusePointsSettings() {}
// ********** End Class UPCGExFusePointsSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFusePoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFusePointsSettings, UPCGExFusePointsSettings::StaticClass, TEXT("UPCGExFusePointsSettings"), &Z_Registration_Info_UClass_UPCGExFusePointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFusePointsSettings), 1028994999U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFusePoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFusePoints_h__Script_PCGExtendedToolkit_2653225052{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFusePoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFusePoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
