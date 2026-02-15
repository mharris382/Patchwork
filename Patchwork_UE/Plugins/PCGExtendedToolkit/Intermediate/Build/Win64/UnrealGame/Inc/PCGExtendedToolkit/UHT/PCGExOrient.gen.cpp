// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExOrient.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExOrient() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExOrientUsage *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOrientUsage;
static UEnum* EPCGExOrientUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOrientUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOrientUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOrientUsage"));
	}
	return Z_Registration_Info_UEnum_EPCGExOrientUsage.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOrientUsage>()
{
	return EPCGExOrientUsage_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyToPoint.DisplayName", "Apply to point" },
		{ "ApplyToPoint.Name", "EPCGExOrientUsage::ApplyToPoint" },
		{ "ApplyToPoint.ToolTip", "Applies the orientation transform to the point" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "OutputToAttribute.DisplayName", "Output to attribute" },
		{ "OutputToAttribute.Name", "EPCGExOrientUsage::OutputToAttribute" },
		{ "OutputToAttribute.ToolTip", "Output the orientation transform to an attribute" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOrientUsage::ApplyToPoint", (int64)EPCGExOrientUsage::ApplyToPoint },
		{ "EPCGExOrientUsage::OutputToAttribute", (int64)EPCGExOrientUsage::OutputToAttribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOrientUsage",
	"EPCGExOrientUsage",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage()
{
	if (!Z_Registration_Info_UEnum_EPCGExOrientUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOrientUsage.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOrientUsage.InnerSingleton;
}
// ********** End Enum EPCGExOrientUsage ***********************************************************

// ********** Begin Class UPCGExOrientSettings *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExOrientSettings;
UClass* UPCGExOrientSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExOrientSettings;
	if (!Z_Registration_Info_UClass_UPCGExOrientSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExOrientSettings"),
			Z_Registration_Info_UClass_UPCGExOrientSettings.InnerSingleton,
			StaticRegisterNativesUPCGExOrientSettings,
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
	return Z_Registration_Info_UClass_UPCGExOrientSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExOrientSettings_NoRegister()
{
	return UPCGExOrientSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExOrientSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExOrient.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCGExNodeLibraryDoc", "paths/orient" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGExPointProcessorSettings\n" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Default value, can be overriden per-point through filters. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Default value, can be overriden per-point through filters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Output == EPCGExOrientUsage::OutputToAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDot_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to output the dot product between prev/next points.  */" },
		{ "EditCondition", "bOutputDot" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOrient.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output the dot product between prev/next points." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExOrientSettings constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrientAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrientAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Orientation;
	static void NewProp_bFlipDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Output_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Output;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttribute;
	static void NewProp_bOutputDot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DotAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExOrientSettings constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExOrientSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExOrientSettings_Statics

// ********** Begin Class UPCGExOrientSettings Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_OrientAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_OrientAxis = { "OrientAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientSettings, OrientAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientAxis_MetaData), NewProp_OrientAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_UpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientSettings, UpAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAxis_MetaData), NewProp_UpAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientSettings, Orientation), Z_Construct_UClass_UPCGExOrientInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
void Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bFlipDirection_SetBit(void* Obj)
{
	((UPCGExOrientSettings*)Obj)->bFlipDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bFlipDirection = { "bFlipDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExOrientSettings), &Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bFlipDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipDirection_MetaData), NewProp_bFlipDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_Output_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientSettings, Output), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1502013809
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_OutputAttribute = { "OutputAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientSettings, OutputAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputAttribute_MetaData), NewProp_OutputAttribute_MetaData) };
void Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bOutputDot_SetBit(void* Obj)
{
	((UPCGExOrientSettings*)Obj)->bOutputDot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bOutputDot = { "bOutputDot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExOrientSettings), &Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bOutputDot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDot_MetaData), NewProp_bOutputDot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_DotAttribute = { "DotAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientSettings, DotAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotAttribute_MetaData), NewProp_DotAttribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExOrientSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_OrientAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_OrientAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_UpAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_UpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bFlipDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_Output_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_OutputAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_bOutputDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientSettings_Statics::NewProp_DotAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExOrientSettings Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UPCGExOrientSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExOrientSettings_Statics::ClassParams = {
	&UPCGExOrientSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExOrientSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExOrientSettings_Statics::Class_MetaDataParams)
};
void UPCGExOrientSettings::StaticRegisterNativesUPCGExOrientSettings()
{
}
UClass* Z_Construct_UClass_UPCGExOrientSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExOrientSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExOrientSettings.OuterSingleton, Z_Construct_UClass_UPCGExOrientSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExOrientSettings.OuterSingleton;
}
UPCGExOrientSettings::UPCGExOrientSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExOrientSettings);
UPCGExOrientSettings::~UPCGExOrientSettings() {}
// ********** End Class UPCGExOrientSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExOrientUsage_StaticEnum, TEXT("EPCGExOrientUsage"), &Z_Registration_Info_UEnum_EPCGExOrientUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1502013809U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExOrientSettings, UPCGExOrientSettings::StaticClass, TEXT("UPCGExOrientSettings"), &Z_Registration_Info_UClass_UPCGExOrientSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExOrientSettings), 1521387507U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h__Script_PCGExtendedToolkit_8801923{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
