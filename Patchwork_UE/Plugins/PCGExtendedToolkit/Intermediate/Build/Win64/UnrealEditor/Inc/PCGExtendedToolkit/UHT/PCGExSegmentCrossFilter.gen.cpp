// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExSegmentCrossFilter.h"
#include "Paths/PCGExPaths.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSegmentCrossFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPolyPathFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSegmentCrossWinding *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding;
static UEnum* EPCGExSegmentCrossWinding_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSegmentCrossWinding"));
	}
	return Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSegmentCrossWinding>()
{
	return EPCGExSegmentCrossWinding_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "ToNext.DisplayName", "To Next" },
		{ "ToNext.Name", "EPCGExSegmentCrossWinding::ToNext" },
		{ "ToNext.ToolTip", "Segment is current point to next point (canon)." },
		{ "ToPrev.DisplayName", "To Prev" },
		{ "ToPrev.Name", "EPCGExSegmentCrossWinding::ToPrev" },
		{ "ToPrev.ToolTip", "Segment is current point to previous point (inversed direction)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSegmentCrossWinding::ToNext", (int64)EPCGExSegmentCrossWinding::ToNext },
		{ "EPCGExSegmentCrossWinding::ToPrev", (int64)EPCGExSegmentCrossWinding::ToPrev },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSegmentCrossWinding",
	"EPCGExSegmentCrossWinding",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding()
{
	if (!Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding.InnerSingleton;
}
// ********** End Enum EPCGExSegmentCrossWinding ***************************************************

// ********** Begin ScriptStruct FPCGExSegmentCrossFilterConfig ************************************
struct Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSegmentCrossFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSegmentCrossFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleInputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sample inputs.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sample inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tolerance value used to determine whether a point is considered on the spline or not */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance value used to determine whether a point is considered on the spline or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Segment definition. Useful when flagging segments \"backward\" (e.g so the end point is flagged instead of the first point) */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Segment definition. Useful when flagging segments \"backward\" (e.g so the end point is flagged instead of the first point)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, invert the result of the test */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, invert the result of the test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fidelity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** When projecting, defines the resolution of the polygon created from the spline. Lower values means higher fidelity, but slower execution. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "When projecting, defines the resolution of the polygon created from the spline. Lower values means higher fidelity, but slower execution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, a collection will never be tested against itself */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, a collection will never be tested against itself" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSegmentCrossFilterConfig constinit property declarations ****
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleInputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Fidelity;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSegmentCrossFilterConfig constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSegmentCrossFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig;
class UScriptStruct* FPCGExSegmentCrossFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSegmentCrossFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSegmentCrossFilterConfig Property Definitions ***************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_SampleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_SampleInputs = { "SampleInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentCrossFilterConfig, SampleInputs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleInputs_MetaData), NewProp_SampleInputs_MetaData) }; // 3557312926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_IntersectionSettings = { "IntersectionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentCrossFilterConfig, IntersectionSettings), Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionSettings_MetaData), NewProp_IntersectionSettings_MetaData) }; // 3968882769
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentCrossFilterConfig, Direction), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSegmentCrossWinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 2021165413
void Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExSegmentCrossFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSegmentCrossFilterConfig), &Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_Fidelity = { "Fidelity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentCrossFilterConfig, Fidelity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fidelity_MetaData), NewProp_Fidelity_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((FPCGExSegmentCrossFilterConfig*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSegmentCrossFilterConfig), &Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_SampleInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_SampleInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_IntersectionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_Fidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSegmentCrossFilterConfig Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSegmentCrossFilterConfig",
	Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::PropPointers),
	sizeof(FPCGExSegmentCrossFilterConfig),
	alignof(FPCGExSegmentCrossFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSegmentCrossFilterConfig **************************************

// ********** Begin Class UPCGExSegmentCrossFilterFactory ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory;
UClass* UPCGExSegmentCrossFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExSegmentCrossFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSegmentCrossFilterFactory"),
			Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExSegmentCrossFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_NoRegister()
{
	return UPCGExSegmentCrossFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSegmentCrossFilterFactory constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSegmentCrossFilterFactory constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSegmentCrossFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics

// ********** Begin Class UPCGExSegmentCrossFilterFactory Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSegmentCrossFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3439953950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSegmentCrossFilterFactory Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPolyPathFilterFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::ClassParams = {
	&UPCGExSegmentCrossFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExSegmentCrossFilterFactory::StaticRegisterNativesUPCGExSegmentCrossFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExSegmentCrossFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory.OuterSingleton;
}
UPCGExSegmentCrossFilterFactory::UPCGExSegmentCrossFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSegmentCrossFilterFactory);
UPCGExSegmentCrossFilterFactory::~UPCGExSegmentCrossFilterFactory() {}
// ********** End Class UPCGExSegmentCrossFilterFactory ********************************************

// ********** Begin Class UPCGExSegmentCrossFilterProviderSettings *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings;
UClass* UPCGExSegmentCrossFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSegmentCrossFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSegmentCrossFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSegmentCrossFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_NoRegister()
{
	return UPCGExSegmentCrossFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/spatial/segment-cross" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentCrossFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSegmentCrossFilterProviderSettings constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSegmentCrossFilterProviderSettings constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSegmentCrossFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics

// ********** Begin Class UPCGExSegmentCrossFilterProviderSettings Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSegmentCrossFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3439953950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSegmentCrossFilterProviderSettings Property Definitions **************
UObject* (*const Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::ClassParams = {
	&UPCGExSegmentCrossFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExSegmentCrossFilterProviderSettings::StaticRegisterNativesUPCGExSegmentCrossFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings.OuterSingleton;
}
UPCGExSegmentCrossFilterProviderSettings::UPCGExSegmentCrossFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSegmentCrossFilterProviderSettings);
UPCGExSegmentCrossFilterProviderSettings::~UPCGExSegmentCrossFilterProviderSettings() {}
// ********** End Class UPCGExSegmentCrossFilterProviderSettings ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSegmentCrossWinding_StaticEnum, TEXT("EPCGExSegmentCrossWinding"), &Z_Registration_Info_UEnum_EPCGExSegmentCrossWinding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2021165413U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSegmentCrossFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExSegmentCrossFilterConfig_Statics::NewStructOps, TEXT("PCGExSegmentCrossFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExSegmentCrossFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSegmentCrossFilterConfig), 3439953950U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSegmentCrossFilterFactory, UPCGExSegmentCrossFilterFactory::StaticClass, TEXT("UPCGExSegmentCrossFilterFactory"), &Z_Registration_Info_UClass_UPCGExSegmentCrossFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSegmentCrossFilterFactory), 3893123963U) },
		{ Z_Construct_UClass_UPCGExSegmentCrossFilterProviderSettings, UPCGExSegmentCrossFilterProviderSettings::StaticClass, TEXT("UPCGExSegmentCrossFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExSegmentCrossFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSegmentCrossFilterProviderSettings), 3162907235U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_1241311653{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentCrossFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
