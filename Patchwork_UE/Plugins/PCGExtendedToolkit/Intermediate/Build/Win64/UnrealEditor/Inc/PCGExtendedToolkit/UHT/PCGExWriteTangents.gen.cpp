// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExWriteTangents.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExWriteTangents() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteTangentsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteTangentsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExWriteTangentsSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExWriteTangentsSettings;
UClass* UPCGExWriteTangentsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExWriteTangentsSettings;
	if (!Z_Registration_Info_UClass_UPCGExWriteTangentsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExWriteTangentsSettings"),
			Z_Registration_Info_UClass_UPCGExWriteTangentsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExWriteTangentsSettings,
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
	return Z_Registration_Info_UClass_UPCGExWriteTangentsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExWriteTangentsSettings_NoRegister()
{
	return UPCGExWriteTangentsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExWriteTangents.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "paths/write-tangents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional module for the start point specifically */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Start Override" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Optional module for the start point specifically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional module for the end point specifically */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 End Override" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Optional module for the end point specifically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveScaleInput_MetaData[] = {
		{ "Category", "Settings|Scaling" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveScaleAttribute_MetaData[] = {
		{ "Category", "Settings|Scaling" },
		{ "DisplayName", "Arrive Scale (Attr)" },
		{ "EditCondition", "ArriveScaleInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveScaleConstant_MetaData[] = {
		{ "Category", "Settings|Scaling" },
		{ "DisplayName", "Arrive Scale" },
		{ "EditCondition", "ArriveScaleInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveScaleInput_MetaData[] = {
		{ "Category", "Settings|Scaling" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveScaleAttribute_MetaData[] = {
		{ "Category", "Settings|Scaling" },
		{ "DisplayName", "Leave Scale (Attr)" },
		{ "EditCondition", "LeaveScaleInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveScaleConstant_MetaData[] = {
		{ "Category", "Settings|Scaling" },
		{ "DisplayName", "Leave Scale" },
		{ "EditCondition", "LeaveScaleInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWriteTangents.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExWriteTangentsSettings constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartTangents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndTangents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArriveScaleInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArriveScaleInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArriveScaleAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ArriveScaleConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeaveScaleInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeaveScaleInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaveScaleAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LeaveScaleConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExWriteTangentsSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExWriteTangentsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics

// ********** Begin Class UPCGExWriteTangentsSettings Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveName = { "ArriveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, ArriveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveName_MetaData), NewProp_ArriveName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveName = { "LeaveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, LeaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveName_MetaData), NewProp_LeaveName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, Tangents), Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_StartTangents = { "StartTangents", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, StartTangents), Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTangents_MetaData), NewProp_StartTangents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_EndTangents = { "EndTangents", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, EndTangents), Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTangents_MetaData), NewProp_EndTangents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleInput = { "ArriveScaleInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, ArriveScaleInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveScaleInput_MetaData), NewProp_ArriveScaleInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleAttribute = { "ArriveScaleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, ArriveScaleAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveScaleAttribute_MetaData), NewProp_ArriveScaleAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleConstant = { "ArriveScaleConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, ArriveScaleConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveScaleConstant_MetaData), NewProp_ArriveScaleConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleInput = { "LeaveScaleInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, LeaveScaleInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveScaleInput_MetaData), NewProp_LeaveScaleInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleAttribute = { "LeaveScaleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, LeaveScaleAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveScaleAttribute_MetaData), NewProp_LeaveScaleAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleConstant = { "LeaveScaleConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteTangentsSettings, LeaveScaleConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveScaleConstant_MetaData), NewProp_LeaveScaleConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_StartTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_EndTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_ArriveScaleConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::NewProp_LeaveScaleConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExWriteTangentsSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::ClassParams = {
	&UPCGExWriteTangentsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::Class_MetaDataParams)
};
void UPCGExWriteTangentsSettings::StaticRegisterNativesUPCGExWriteTangentsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExWriteTangentsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExWriteTangentsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExWriteTangentsSettings.OuterSingleton, Z_Construct_UClass_UPCGExWriteTangentsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExWriteTangentsSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExWriteTangentsSettings);
UPCGExWriteTangentsSettings::~UPCGExWriteTangentsSettings() {}
// ********** End Class UPCGExWriteTangentsSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWriteTangents_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExWriteTangentsSettings, UPCGExWriteTangentsSettings::StaticClass, TEXT("UPCGExWriteTangentsSettings"), &Z_Registration_Info_UClass_UPCGExWriteTangentsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExWriteTangentsSettings), 757105343U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWriteTangents_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWriteTangents_h__Script_PCGExtendedToolkit_2716741733{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWriteTangents_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWriteTangents_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
