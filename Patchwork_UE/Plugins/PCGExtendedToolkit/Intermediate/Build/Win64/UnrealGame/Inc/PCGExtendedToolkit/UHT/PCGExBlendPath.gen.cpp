// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExBlendPath.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBlendPath() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPathBlendMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathBlendMode;
static UEnum* EPCGExPathBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathBlendMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathBlendMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathBlendMode>()
{
	return EPCGExPathBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Full.DisplayName", "Start to End" },
		{ "Full.Name", "EPCGExPathBlendMode::Full" },
		{ "Full.ToolTip", "Blend properties & attributes of all path' points from start point to last point" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "Switch.DisplayName", "Switch" },
		{ "Switch.Name", "EPCGExPathBlendMode::Switch" },
		{ "Switch.ToolTip", "Switch between pruning/non-pruning based on filters" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathBlendMode::Full", (int64)EPCGExPathBlendMode::Full },
		{ "EPCGExPathBlendMode::Switch", (int64)EPCGExPathBlendMode::Switch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathBlendMode",
	"EPCGExPathBlendMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathBlendMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathBlendMode.InnerSingleton;
}
// ********** End Enum EPCGExPathBlendMode *********************************************************

// ********** Begin Class UPCGExBlendPathSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBlendPathSettings;
UClass* UPCGExBlendPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBlendPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExBlendPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBlendPathSettings"),
			Z_Registration_Info_UClass_UPCGExBlendPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBlendPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExBlendPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBlendPathSettings_NoRegister()
{
	return UPCGExBlendPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBlendPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExBlendPath.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "paths/blend" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOver_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "BlendOver == EPCGExBlendOver::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read the direction from */" },
		{ "DisplayName", "Lerp (Attr)" },
		{ "EditCondition", "BlendOver == EPCGExBlendOver::Fixed && LerpInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read the direction from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Constant direction */" },
		{ "DisplayName", "Lerp" },
		{ "EditCondition", "BlendOver == EPCGExBlendOver::Fixed && LerpInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blending settings used to smooth attributes.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Blending settings used to smooth attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendFirstPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will apply blending to othe first point. Can be useful with some blendmodes. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will apply blending to othe first point. Can be useful with some blendmodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendLastPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will apply blending to the last  point. Can be useful with some blendmodes. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBlendPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will apply blending to the last  point. Can be useful with some blendmodes." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBlendPathSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOver_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOver;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LerpInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LerpInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LerpAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LerpConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendingSettings;
	static void NewProp_bBlendFirstPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendFirstPoint;
	static void NewProp_bBlendLastPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendLastPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBlendPathSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBlendPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBlendPathSettings_Statics

// ********** Begin Class UPCGExBlendPathSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_BlendOver_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_BlendOver = { "BlendOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBlendPathSettings, BlendOver), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOver_MetaData), NewProp_BlendOver_MetaData) }; // 336339527
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpInput = { "LerpInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBlendPathSettings, LerpInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpInput_MetaData), NewProp_LerpInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpAttribute = { "LerpAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBlendPathSettings, LerpAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpAttribute_MetaData), NewProp_LerpAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpConstant = { "LerpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBlendPathSettings, LerpConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpConstant_MetaData), NewProp_LerpConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_BlendingSettings = { "BlendingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBlendPathSettings, BlendingSettings), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingSettings_MetaData), NewProp_BlendingSettings_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendFirstPoint_SetBit(void* Obj)
{
	((UPCGExBlendPathSettings*)Obj)->bBlendFirstPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendFirstPoint = { "bBlendFirstPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBlendPathSettings), &Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendFirstPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendFirstPoint_MetaData), NewProp_bBlendFirstPoint_MetaData) };
void Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendLastPoint_SetBit(void* Obj)
{
	((UPCGExBlendPathSettings*)Obj)->bBlendLastPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendLastPoint = { "bBlendLastPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBlendPathSettings), &Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendLastPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendLastPoint_MetaData), NewProp_bBlendLastPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBlendPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_BlendOver_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_BlendOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_LerpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_BlendingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendFirstPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendPathSettings_Statics::NewProp_bBlendLastPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBlendPathSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExBlendPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBlendPathSettings_Statics::ClassParams = {
	&UPCGExBlendPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBlendPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBlendPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExBlendPathSettings::StaticRegisterNativesUPCGExBlendPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBlendPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBlendPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBlendPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExBlendPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBlendPathSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBlendPathSettings);
UPCGExBlendPathSettings::~UPCGExBlendPathSettings() {}
// ********** End Class UPCGExBlendPathSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPathBlendMode_StaticEnum, TEXT("EPCGExPathBlendMode"), &Z_Registration_Info_UEnum_EPCGExPathBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1555877605U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBlendPathSettings, UPCGExBlendPathSettings::StaticClass, TEXT("UPCGExBlendPathSettings"), &Z_Registration_Info_UClass_UPCGExBlendPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBlendPathSettings), 3869130669U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h__Script_PCGExtendedToolkit_4162760338{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
