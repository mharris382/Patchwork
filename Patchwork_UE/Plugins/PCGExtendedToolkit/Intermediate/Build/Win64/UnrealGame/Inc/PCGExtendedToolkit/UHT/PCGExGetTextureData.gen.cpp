// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExGetTextureData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGetTextureData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGTextureColorChannel();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGetTextureDataSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGetTextureDataSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExGetTexturePathType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGetTexturePathType;
static UEnum* EPCGExGetTexturePathType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGetTexturePathType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGetTexturePathType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGetTexturePathType"));
	}
	return Z_Registration_Info_UEnum_EPCGExGetTexturePathType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGetTexturePathType>()
{
	return EPCGExGetTexturePathType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MaterialPath.DisplayName", "Material Path" },
		{ "MaterialPath.Name", "EPCGExGetTexturePathType::MaterialPath" },
		{ "MaterialPath.ToolTip", "Point attribute contains a material path" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "TexturePath.DisplayName", "Texture Path" },
		{ "TexturePath.Name", "EPCGExGetTexturePathType::TexturePath" },
		{ "TexturePath.ToolTip", "Point attribute contains a texture path" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGetTexturePathType::TexturePath", (int64)EPCGExGetTexturePathType::TexturePath },
		{ "EPCGExGetTexturePathType::MaterialPath", (int64)EPCGExGetTexturePathType::MaterialPath },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGetTexturePathType",
	"EPCGExGetTexturePathType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType()
{
	if (!Z_Registration_Info_UEnum_EPCGExGetTexturePathType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGetTexturePathType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGetTexturePathType.InnerSingleton;
}
// ********** End Enum EPCGExGetTexturePathType ****************************************************

// ********** Begin Enum EPCGExTextureFilter *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTextureFilter;
static UEnum* EPCGExTextureFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTextureFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTextureFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTextureFilter"));
	}
	return Z_Registration_Info_UEnum_EPCGExTextureFilter.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTextureFilter>()
{
	return EPCGExTextureFilter_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bilinear.Name", "EPCGExTextureFilter::Bilinear" },
		{ "Bilinear.Tooltip", "Bilinearly interpolates the values of the four nearest texels to the sample location." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Method used to determine the value for a sample based on the value of nearby texels. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "Point.Name", "EPCGExTextureFilter::Point" },
		{ "Point.Tooltip", "Takes the value of whatever texel the sample lands in." },
		{ "ToolTip", "Method used to determine the value for a sample based on the value of nearby texels." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTextureFilter::Point", (int64)EPCGExTextureFilter::Point },
		{ "EPCGExTextureFilter::Bilinear", (int64)EPCGExTextureFilter::Bilinear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTextureFilter",
	"EPCGExTextureFilter",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter()
{
	if (!Z_Registration_Info_UEnum_EPCGExTextureFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTextureFilter.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTextureFilter.InnerSingleton;
}
// ********** End Enum EPCGExTextureFilter *********************************************************

// ********** Begin Class UPCGExGetTextureDataSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGetTextureDataSettings;
UClass* UPCGExGetTextureDataSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExGetTextureDataSettings;
	if (!Z_Registration_Info_UClass_UPCGExGetTextureDataSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGetTextureDataSettings"),
			Z_Registration_Info_UClass_UPCGExGetTextureDataSettings.InnerSingleton,
			StaticRegisterNativesUPCGExGetTextureDataSettings,
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
	return Z_Registration_Info_UClass_UPCGExGetTextureDataSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGetTextureDataSettings_NoRegister()
{
	return UPCGExGetTextureDataSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExGetTextureData.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/textures/get-texture-data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of path */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to read asset path from (material or texture).*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to read asset path from (material or texture)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTextureIds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will write resolved texture paths as per their definitions. */" },
		{ "EditCondition", "SourceType == EPCGExGetTexturePathType::MaterialPath" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will write resolved texture paths as per their definitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildTextureData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will build PCG Texture data for each unique texture reference found. */" },
		{ "EditCondition", "SourceType == EPCGExGetTexturePathType::MaterialPath" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will build PCG Texture data for each unique texture reference found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "Comment", "/** Method used to determine the value for a sample based on the value of nearby texels. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Method used to determine the value for a sample based on the value of nearby texels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "Comment", "/** Surface transform */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Surface transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteTransform_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorChannel_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexelSize_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The size of one texel in cm, used when calling ToPointData. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "ToolTip", "The size of one texel in cm, used when calling ToPointData." },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Rotation to apply when sampling texture. */" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "ToolTip", "Rotation to apply when sampling texture." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdvancedTiling_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "Comment", "/** Whether to tile the source or to stretch it to fit target area. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
		{ "ToolTip", "Whether to tile the source or to stretch it to fit target area." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[] = {
		{ "Category", "Settings|Data|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterOffset_MetaData[] = {
		{ "Category", "Settings|Data|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTileBounds_MetaData[] = {
		{ "Category", "Settings|Data|Tiling" },
		{ "EditionCondition", "bUseAdvancedTiling" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileBounds_MetaData[] = {
		{ "Category", "Settings|Data|Tiling" },
		{ "EditCondition", "bUseAdvancedTiling && bUseTileBounds" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExGetTextureData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGetTextureDataSettings constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceAttributeName;
	static void NewProp_bOutputTextureIds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTextureIds;
	static void NewProp_bBuildTextureData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildTextureData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Filter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bUseAbsoluteTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TexelSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static void NewProp_bUseAdvancedTiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdvancedTiling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOffset;
	static void NewProp_bUseTileBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTileBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExGetTextureDataSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGetTextureDataSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics

// ********** Begin Class UPCGExGetTextureDataSettings Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, SourceType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGetTexturePathType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 130953564
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_SourceAttributeName = { "SourceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, SourceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAttributeName_MetaData), NewProp_SourceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bOutputTextureIds_SetBit(void* Obj)
{
	((UPCGExGetTextureDataSettings*)Obj)->bOutputTextureIds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bOutputTextureIds = { "bOutputTextureIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGetTextureDataSettings), &Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bOutputTextureIds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputTextureIds_MetaData), NewProp_bOutputTextureIds_MetaData) };
void Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bBuildTextureData_SetBit(void* Obj)
{
	((UPCGExGetTextureDataSettings*)Obj)->bBuildTextureData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bBuildTextureData = { "bBuildTextureData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGetTextureDataSettings), &Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bBuildTextureData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildTextureData_MetaData), NewProp_bBuildTextureData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Filter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, Filter), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1080971528
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
void Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAbsoluteTransform_SetBit(void* Obj)
{
	((UPCGExGetTextureDataSettings*)Obj)->bUseAbsoluteTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAbsoluteTransform = { "bUseAbsoluteTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGetTextureDataSettings), &Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAbsoluteTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAbsoluteTransform_MetaData), NewProp_bUseAbsoluteTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_ColorChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_ColorChannel = { "ColorChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, ColorChannel), Z_Construct_UEnum_PCG_EPCGTextureColorChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorChannel_MetaData), NewProp_ColorChannel_MetaData) }; // 310788760
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_TexelSize = { "TexelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, TexelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexelSize_MetaData), NewProp_TexelSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAdvancedTiling_SetBit(void* Obj)
{
	((UPCGExGetTextureDataSettings*)Obj)->bUseAdvancedTiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAdvancedTiling = { "bUseAdvancedTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGetTextureDataSettings), &Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAdvancedTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAdvancedTiling_MetaData), NewProp_bUseAdvancedTiling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiling_MetaData), NewProp_Tiling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_CenterOffset = { "CenterOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, CenterOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterOffset_MetaData), NewProp_CenterOffset_MetaData) };
void Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseTileBounds_SetBit(void* Obj)
{
	((UPCGExGetTextureDataSettings*)Obj)->bUseTileBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseTileBounds = { "bUseTileBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGetTextureDataSettings), &Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseTileBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTileBounds_MetaData), NewProp_bUseTileBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_TileBounds = { "TileBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGetTextureDataSettings, TileBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileBounds_MetaData), NewProp_TileBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_SourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_SourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_SourceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bOutputTextureIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bBuildTextureData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Filter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAbsoluteTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_ColorChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_ColorChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_TexelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseAdvancedTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_Tiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_CenterOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_bUseTileBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::NewProp_TileBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExGetTextureDataSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::ClassParams = {
	&UPCGExGetTextureDataSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::Class_MetaDataParams)
};
void UPCGExGetTextureDataSettings::StaticRegisterNativesUPCGExGetTextureDataSettings()
{
}
UClass* Z_Construct_UClass_UPCGExGetTextureDataSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExGetTextureDataSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGetTextureDataSettings.OuterSingleton, Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGetTextureDataSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGetTextureDataSettings);
UPCGExGetTextureDataSettings::~UPCGExGetTextureDataSettings() {}
// ********** End Class UPCGExGetTextureDataSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExGetTexturePathType_StaticEnum, TEXT("EPCGExGetTexturePathType"), &Z_Registration_Info_UEnum_EPCGExGetTexturePathType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 130953564U) },
		{ EPCGExTextureFilter_StaticEnum, TEXT("EPCGExTextureFilter"), &Z_Registration_Info_UEnum_EPCGExTextureFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1080971528U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExGetTextureDataSettings, UPCGExGetTextureDataSettings::StaticClass, TEXT("UPCGExGetTextureDataSettings"), &Z_Registration_Info_UClass_UPCGExGetTextureDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGetTextureDataSettings), 1169247516U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h__Script_PCGExtendedToolkit_3856493878{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
