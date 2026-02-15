// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Collections/PCGExComponentDescriptors.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/BodyInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExComponentDescriptors() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECanBeCharacterBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EIndirectLightingCacheQuality();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightmapType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode();
GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExPrimitiveComponentDescriptor ********************************
struct Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPrimitiveComponentDescriptor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPrimitiveComponentDescriptor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Primitive Component Descriptor" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDrawDistance_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**\n\x09 * The minimum distance at which the primitive should be rendered, \n\x09 * measured in world space units from the center of the primitive's bounding sphere to the camera position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "The minimum distance at which the primitive should be rendered,\nmeasured in world space units from the center of the primitive's bounding sphere to the camera position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**  Max draw distance exposed to LDs. The real max draw distance is the min (disregarding 0) of this and volumes affecting this object. */" },
		{ "DisplayName", "Desired Max Draw Distance" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Max draw distance exposed to LDs. The real max draw distance is the min (disregarding 0) of this and volumes affecting this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingCacheQuality_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Quality of indirect lighting for Movable primitives.  This has a large effect on Indirect Lighting Cache update time. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Quality of indirect lighting for Movable primitives.  This has a large effect on Indirect Lighting Cache update time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmapType_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls the type of lightmap used for this component. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls the type of lightmap used for this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODBatchingPolicy_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Determines how the geometry of a component will be incorporated in proxy (simplified) HLODs. */" },
		{ "DisplayAfter", "bEnableAutoLODGeneration" },
		{ "DisplayName", "HLOD Batching Policy" },
		{ "EditCondition", "bEnableAutoLODGeneration" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Determines how the geometry of a component will be incorporated in proxy (simplified) HLODs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoLODGeneration_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Whether to include this component in HLODs or not. */" },
		{ "DisplayName", "Include Component in HLOD" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to include this component in HLODs or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeverDistanceCull_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** When enabled this object will not be culled by distance. This is ignored if a child of a HLOD. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "When enabled this object will not be culled by distance. This is ignored if a child of a HLOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Physics scene information for this component, holds a single rigid body with multiple shapes. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "SkipUCSModifiedProperties", "" },
		{ "ToolTip", "Physics scene information for this component, holds a single rigid body with multiple shapes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysCreatePhysicsState_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Indicates if we'd like to create physics state all the time (for collision and simulation). \n\x09 * If you set this to false, it still will create physics state if collision or simulation activated. \n\x09 * This can help performance if you'd like to avoid overhead of creating physics state when triggers \n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Indicates if we'd like to create physics state all the time (for collision and simulation).\nIf you set this to false, it still will create physics state if collision or simulation activated.\nThis can help performance if you'd like to avoid overhead of creating physics state when triggers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiBodyOverlap_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If true, this component will generate individual overlaps for each overlapping physics body if it is a multi-body component. When false, this component will\n\x09 * generate only one overlap, regardless of how many physics bodies it has and how many of them are overlapping another component/body. This flag has no\n\x09 * influence on single body components.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, this component will generate individual overlaps for each overlapping physics body if it is a multi-body component. When false, this component will\ngenerate only one overlap, regardless of how many physics bodies it has and how many of them are overlapping another component/body. This flag has no\ninfluence on single body components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplexOnMove_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If true, component sweeps with this component should trace against complex collision during movement (for example, each triangle of a mesh).\n\x09 * If false, collision will be resolved against simple collision bounds instead.\n\x09 * @see MoveComponent()\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, component sweeps with this component should trace against complex collision during movement (for example, each triangle of a mesh).\nIf false, collision will be resolved against simple collision bounds instead.\n@see MoveComponent()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnMaterialOnMove_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If true, component sweeps will return the material in their hit result.\n\x09 * @see MoveComponent(), FHitResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, component sweeps will return the material in their hit result.\n@see MoveComponent(), FHitResult" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCullDistanceVolume_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Whether to accept cull distance volumes to modify cached cull distance. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to accept cull distance volumes to modify cached cull distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInReflectionCaptures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be visible in reflection captures. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, this component will be visible in reflection captures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRealTimeSkyCaptures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be visible in real-time sky light reflection captures. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, this component will be visible in real-time sky light reflection captures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be visible in ray tracing effects. Turning this off will remove it from ray traced reflections, shadows, etc. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, this component will be visible in ray tracing effects. Turning this off will remove it from ray traced reflections, shadows, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInMainPass_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be rendered in the main pass (z prepass, basepass, transparency) */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, this component will be rendered in the main pass (z prepass, basepass, transparency)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInDepthPass_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be rendered in the depth pass even if it's not rendered in the main pass */" },
		{ "EditCondition", "!bRenderInMainPass" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, this component will be rendered in the depth pass even if it's not rendered in the main pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Whether the primitive receives decals. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether the primitive receives decals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoldout_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\". */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOwnerNoSee_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If this is True, this component won't be visible when the view actor is the component's owner, directly or indirectly. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If this is True, this component won't be visible when the view actor is the component's owner, directly or indirectly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyOwnerSee_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If this is True, this component will only be visible when the view actor is the component's owner, directly or indirectly. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If this is True, this component will only be visible when the view actor is the component's owner, directly or indirectly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatAsBackgroundForOcclusion_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Treat this primitive as part of the background for occlusion purposes. This can be used as an optimization to reduce the cost of rendering skyboxes, large ground planes that are part of the vista, etc. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Treat this primitive as part of the background for occlusion purposes. This can be used as an optimization to reduce the cost of rendering skyboxes, large ground planes that are part of the vista, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Whether to render the primitive in the depth only pass.  \n\x09 * This should generally be true for all objects, and let the renderer make decisions about whether to render objects in the depth only pass.\n\x09 * @todo - if any rendering features rely on a complete depth only pass, this variable needs to go away.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to render the primitive in the depth only pass.\nThis should generally be true for all objects, and let the renderer make decisions about whether to render objects in the depth only pass.\n@todo - if any rendering features rely on a complete depth only pass, this variable needs to go away." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceMipStreaming_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "Comment", "/** If true, forces mips for textures used by this component to be resident when this component's level is loaded. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, forces mips for textures used by this component to be resident when this component's level is loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive component should cast a shadow or not. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls whether the primitive component should cast a shadow or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmissiveLightSource_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether the primitive will be used as an emissive light source. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether the primitive will be used as an emissive light source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive should influence indirect lighting. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls whether the primitive should influence indirect lighting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectIndirectLightingWhileHidden_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive should affect indirect lighting when hidden. This flag is only used if bAffectDynamicIndirectLighting is true. */" },
		{ "DisplayName", "Affect Indirect Lighting While Hidden" },
		{ "EditCondition", "bAffectDynamicIndirectLighting" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls whether the primitive should affect indirect lighting when hidden. This flag is only used if bAffectDynamicIndirectLighting is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. **/" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true. **/" },
		{ "DisplayName", "Dynamic Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls whether the primitive should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether the object should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true. */" },
		{ "DisplayName", "Static Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether the object should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCacheInvalidationBehavior_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset. */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastVolumetricTranslucentShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether the object should cast a volumetric translucent shadow.\n\x09 * Volumetric translucent shadows are useful for primitives with smoothly changing opacity like particles representing a volume, \n\x09 * But have artifacts when used on highly opaque surfaces.\n\x09 */" },
		{ "DisplayName", "Volumetric Translucent Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether the object should cast a volumetric translucent shadow.\nVolumetric translucent shadows are useful for primitives with smoothly changing opacity like particles representing a volume,\nBut have artifacts when used on highly opaque surfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 * Whether the object should cast contact shadows.\n\x09 * This flag is only used if CastShadow is true.\n\x09 */" },
		{ "DisplayName", "Contact Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether the object should cast contact shadows.\nThis flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelfShadowOnly_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * When enabled, the component will only cast a shadow on itself and not other components in the world.  \n\x09 * This is especially useful for first person weapons, and forces bCastInsetShadow to be enabled.\n\x09 */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "When enabled, the component will only cast a shadow on itself and not other components in the world.\nThis is especially useful for first person weapons, and forces bCastInsetShadow to be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastFarShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * When enabled, the component will be rendering into the far shadow cascades (only for directional lights).\n\x09 */" },
		{ "DisplayName", "Far Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "When enabled, the component will be rendering into the far shadow cascades (only for directional lights)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastInsetShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether this component should create a per-object shadow that gives higher effective shadow resolution. \n\x09 * Useful for cinematic character shadowing. Assumed to be enabled if bSelfShadowOnly is enabled.\n\x09 */" },
		{ "DisplayName", "Dynamic Inset Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether this component should create a per-object shadow that gives higher effective shadow resolution.\nUseful for cinematic character shadowing. Assumed to be enabled if bSelfShadowOnly is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastCinematicShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether this component should cast shadows from lights that have bCastShadowsFromCinematicObjectsOnly enabled.\n\x09 * This is useful for characters in a cinematic with special cinematic lights, where the cost of shadowmap rendering of the environment is undesired.\n\x09 */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether this component should cast shadows from lights that have bCastShadowsFromCinematicObjectsOnly enabled.\nThis is useful for characters in a cinematic with special cinematic lights, where the cost of shadowmap rendering of the environment is undesired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastHiddenShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 *\x09If true, the primitive will cast shadows even if bHidden is true.\n\x09 *\x09""Controls whether the primitive should cast shadows when hidden.\n\x09 *\x09This flag is only used if CastShadow is true.\n\x09 */" },
		{ "DisplayName", "Hidden Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, the primitive will cast shadows even if bHidden is true.\nControls whether the primitive should cast shadows when hidden.\nThis flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether this primitive should cast dynamic shadows as if it were a two sided material. */" },
		{ "DisplayName", "Shadow Two Sided" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether this primitive should cast dynamic shadows as if it were a two sided material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLightAttachmentsAsGroup_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to light this component and any attachments as a group.  This only has effect on the root component of an attachment tree.\n\x09 * When enabled, attached component shadowing settings like bCastInsetShadow, bCastVolumetricTranslucentShadow, etc, will be ignored.\n\x09 * This is useful for improving performance when multiple movable components are attached together.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to light this component and any attachments as a group.  This only has effect on the root component of an attachment tree.\nWhen enabled, attached component shadowing settings like bCastInsetShadow, bCastVolumetricTranslucentShadow, etc, will be ignored.\nThis is useful for improving performance when multiple movable components are attached together." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromLightAttachmentGroup_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * If set, then it overrides any bLightAttachmentsAsGroup set in a parent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If set, then it overrides any bLightAttachmentsAsGroup set in a parent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveMobileCSMShadows_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/**\n\x09* Mobile only:\n\x09* If disabled this component will not receive CSM shadows. (Components that do not receive CSM may have reduced shading cost)\n\x09*/" },
		{ "DisplayName", "Receive CSM Shadows" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Mobile only:\nIf disabled this component will not receive CSM shadows. (Components that do not receive CSM may have reduced shading cost)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleSampleShadowFromStationaryLights_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether the whole component should be shadowed as one from stationary lights, which makes shadow receiving much cheaper.\n\x09 * When enabled shadowing data comes from the volume lighting samples precomputed by Lightmass, which are very sparse.\n\x09 * This is currently only used on stationary directional lights.  \n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether the whole component should be shadowed as one from stationary lights, which makes shadow receiving much cheaper.\nWhen enabled shadowing data comes from the volume lighting samples precomputed by Lightmass, which are very sparse.\nThis is currently only used on stationary directional lights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRadialImpulse_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Will ignore radial impulses applied to this component. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Will ignore radial impulses applied to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRadialForce_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Will ignore radial forces applied to this component. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Will ignore radial forces applied to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyImpulseOnDamage_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** True for damage to this component to apply physics impulse, false to opt out of these impulses. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "True for damage to this component to apply physics impulse, false to opt out of these impulses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicatePhysicsToAutonomousProxy_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** True if physics should be replicated to autonomous proxies. This should be true for\n\x09\x09server-authoritative simulations, and false for client authoritative simulations. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "True if physics should be replicated to autonomous proxies. This should be true for\n              server-authoritative simulations, and false for client authoritative simulations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillCollisionUnderneathForNavmesh_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If set, navmesh will not be generated under the surface of the geometry */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If set, navmesh will not be generated under the surface of the geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, this component will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInSceneCaptureOnly_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Visible In Scene Capture Only" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "When true, will only be visible in Scene Capture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInSceneCapture_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Hidden In Scene Capture" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "When true, will not be captured by Scene Capture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanCharacterStepUpOn_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Determine whether a Character can step up onto this component.\n\x09 * This controls whether they can try to step up on it when they bump in to it, not whether they can walk on it after landing on it.\n\x09 * @see FWalkableSlopeOverride\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Determine whether a Character can step up onto this component.\nThis controls whether they can try to step up on it when they bump in to it, not whether they can walk on it after landing on it.\n@see FWalkableSlopeOverride" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Channels that this component should be in.  Lights with matching channels will affect the component.  \n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Channels that this component should be in.  Lights with matching channels will affect the component.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupId_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/**\n\x09 * Defines run-time groups of components. For example allows to assemble multiple parts of a building at runtime.\n\x09 * -1 means that component doesn't belong to any group.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Defines run-time groups of components. For example allows to assemble multiple parts of a building at runtime.\n-1 means that component doesn't belong to any group." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Translucent objects with a lower sort priority draw behind objects with a higher priority.\n\x09 * Translucent objects with the same priority are rendered from back-to-front based on their bounds origin.\n\x09 * This setting is also used to sort objects being drawn into a runtime virtual texture.\n\x09 *\n\x09 * Ignored if the object is not translucent.  The default priority is zero.\n\x09 * Warning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly.  \n\x09 * It is especially problematic on dynamic gameplay effects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Translucent objects with a lower sort priority draw behind objects with a higher priority.\nTranslucent objects with the same priority are rendered from back-to-front based on their bounds origin.\nThis setting is also used to sort objects being drawn into a runtime virtual texture.\n\nIgnored if the object is not translucent.  The default priority is zero.\nWarning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly.\nIt is especially problematic on dynamic gameplay effects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortDistanceOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Modified sort distance offset for translucent objects in world units.\n\x09 * A positive number will move the sort distance further and a negative number will move the distance closer.\n\x09 *\n\x09 * Ignored if the object is not translucent.\n\x09 * Warning: Adjusting this value will prevent the renderer from correctly sorting based on distance.  Only modify this value if you are certain it will not cause visual artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Modified sort distance offset for translucent objects in world units.\nA positive number will move the sort distance further and a negative number will move the distance closer.\n\nIgnored if the object is not translucent.\nWarning: Adjusting this value will prevent the renderer from correctly sorting based on distance.  Only modify this value if you are certain it will not cause visual artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Array of runtime virtual textures into which we draw the mesh for this actor. \n\x09 * The material also needs to be set up to output to a virtual texture. \n\x09 */" },
		{ "DisplayName", "Draw in Virtual Textures" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Array of runtime virtual textures into which we draw the mesh for this actor.\nThe material also needs to be set up to output to a virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureLodBias_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Bias to the LOD selected for rendering to runtime virtual textures. */" },
		{ "DisplayName", "Virtual Texture LOD Bias" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Bias to the LOD selected for rendering to runtime virtual textures." },
		{ "UIMax", "8" },
		{ "UIMin", "-7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\n\x09 * Larger values reduce the effective draw distance in the runtime virtual texture.\n\x09 * This culling method doesn't take into account primitive size or virtual texture size.\n\x09 */" },
		{ "DisplayName", "Virtual Texture Skip Mips" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\nLarger values reduce the effective draw distance in the runtime virtual texture.\nThis culling method doesn't take into account primitive size or virtual texture size." },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureMinCoverage_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * Set the minimum pixel coverage before culling from the runtime virtual texture.\n\x09 * Larger values reduce the effective draw distance in the runtime virtual texture.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Set the minimum pixel coverage before culling from the runtime virtual texture.\nLarger values reduce the effective draw distance in the runtime virtual texture." },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Controls if this component draws in the main pass as well as in the virtual texture. */" },
		{ "DisplayName", "Draw in Main Pass" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls if this component draws in the main pass as well as in the virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Scales the bounds of the object.\n\x09 * This is useful when using World Position Offset to animate the vertices of the object outside of its bounds. \n\x09 * Warning: Increasing the bounds of an object will reduce performance and shadow quality!\n\x09 * Currently only used by StaticMeshComponent and SkeletalMeshComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Scales the bounds of the object.\nThis is useful when using World Position Offset to animate the vertices of the object outside of its bounds.\nWarning: Increasing the bounds of an object will reduce performance and shadow quality!\nCurrently only used by StaticMeshComponent and SkeletalMeshComponent." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupCullingPriority_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/**\n\x09 * Defines how quickly it should be culled. For example buildings should have a low priority, but small dressing should have a high priority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Defines how quickly it should be culled. For example buildings should have a low priority, but small dressing should have a high priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Mask used for stencil buffer writes. */" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Mask used for stencil buffer writes." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPrimitiveComponentDescriptor constinit property declarations 
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDrawDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndirectLightingCacheQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightmapType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightmapType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HLODBatchingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HLODBatchingPolicy;
	static void NewProp_bEnableAutoLODGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoLODGeneration;
	static void NewProp_bNeverDistanceCull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverDistanceCull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static void NewProp_bAlwaysCreatePhysicsState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysCreatePhysicsState;
	static void NewProp_bMultiBodyOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiBodyOverlap;
	static void NewProp_bTraceComplexOnMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplexOnMove;
	static void NewProp_bReturnMaterialOnMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnMaterialOnMove;
	static void NewProp_bAllowCullDistanceVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCullDistanceVolume;
	static void NewProp_bVisibleInReflectionCaptures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInReflectionCaptures;
	static void NewProp_bVisibleInRealTimeSkyCaptures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRealTimeSkyCaptures;
	static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
	static void NewProp_bRenderInMainPass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInMainPass;
	static void NewProp_bRenderInDepthPass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInDepthPass;
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bHoldout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldout;
	static void NewProp_bOwnerNoSee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOwnerNoSee;
	static void NewProp_bOnlyOwnerSee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyOwnerSee;
	static void NewProp_bTreatAsBackgroundForOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatAsBackgroundForOcclusion;
	static void NewProp_bUseAsOccluder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
	static void NewProp_bForceMipStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMipStreaming;
	static void NewProp_CastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadow;
	static void NewProp_bEmissiveLightSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmissiveLightSource;
	static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
	static void NewProp_bAffectIndirectLightingWhileHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectIndirectLightingWhileHidden;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
	static void NewProp_bCastStaticShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowCacheInvalidationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShadowCacheInvalidationBehavior;
	static void NewProp_bCastVolumetricTranslucentShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastVolumetricTranslucentShadow;
	static void NewProp_bCastContactShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
	static void NewProp_bSelfShadowOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfShadowOnly;
	static void NewProp_bCastFarShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastFarShadow;
	static void NewProp_bCastInsetShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastInsetShadow;
	static void NewProp_bCastCinematicShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastCinematicShadow;
	static void NewProp_bCastHiddenShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastHiddenShadow;
	static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
	static void NewProp_bLightAttachmentsAsGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLightAttachmentsAsGroup;
	static void NewProp_bExcludeFromLightAttachmentGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromLightAttachmentGroup;
	static void NewProp_bReceiveMobileCSMShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveMobileCSMShadows;
	static void NewProp_bSingleSampleShadowFromStationaryLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleSampleShadowFromStationaryLights;
	static void NewProp_bIgnoreRadialImpulse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRadialImpulse;
	static void NewProp_bIgnoreRadialForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRadialForce;
	static void NewProp_bApplyImpulseOnDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyImpulseOnDamage;
	static void NewProp_bReplicatePhysicsToAutonomousProxy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicatePhysicsToAutonomousProxy;
	static void NewProp_bFillCollisionUnderneathForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCollisionUnderneathForNavmesh;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static void NewProp_bVisibleInSceneCaptureOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInSceneCaptureOnly;
	static void NewProp_bHiddenInSceneCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInSceneCapture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CanCharacterStepUpOn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGroupId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencySortDistanceOffset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_VirtualTextureLodBias;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_VirtualTextureCullMips;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_VirtualTextureMinCoverage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundsScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingGroupCullingPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingGroupCullingPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPrimitiveComponentDescriptor constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPrimitiveComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor;
class UScriptStruct* FPCGExPrimitiveComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPrimitiveComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPrimitiveComponentDescriptor Property Definitions ***********
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_MinDrawDistance = { "MinDrawDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, MinDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDrawDistance_MetaData), NewProp_MinDrawDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LDMaxDrawDistance = { "LDMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, LDMaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LDMaxDrawDistance_MetaData), NewProp_LDMaxDrawDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_IndirectLightingCacheQuality = { "IndirectLightingCacheQuality", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, IndirectLightingCacheQuality), Z_Construct_UEnum_Engine_EIndirectLightingCacheQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndirectLightingCacheQuality_MetaData), NewProp_IndirectLightingCacheQuality_MetaData) }; // 3328584081
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LightmapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LightmapType = { "LightmapType", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, LightmapType), Z_Construct_UEnum_Engine_ELightmapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmapType_MetaData), NewProp_LightmapType_MetaData) }; // 3888230190
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_HLODBatchingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_HLODBatchingPolicy = { "HLODBatchingPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, HLODBatchingPolicy), Z_Construct_UEnum_Engine_EHLODBatchingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODBatchingPolicy_MetaData), NewProp_HLODBatchingPolicy_MetaData) }; // 1093619173
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEnableAutoLODGeneration_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bEnableAutoLODGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEnableAutoLODGeneration = { "bEnableAutoLODGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEnableAutoLODGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoLODGeneration_MetaData), NewProp_bEnableAutoLODGeneration_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bNeverDistanceCull_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bNeverDistanceCull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bNeverDistanceCull = { "bNeverDistanceCull", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bNeverDistanceCull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeverDistanceCull_MetaData), NewProp_bNeverDistanceCull_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 1979150459
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAlwaysCreatePhysicsState_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bAlwaysCreatePhysicsState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAlwaysCreatePhysicsState = { "bAlwaysCreatePhysicsState", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAlwaysCreatePhysicsState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysCreatePhysicsState_MetaData), NewProp_bAlwaysCreatePhysicsState_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bMultiBodyOverlap_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bMultiBodyOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bMultiBodyOverlap = { "bMultiBodyOverlap", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bMultiBodyOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiBodyOverlap_MetaData), NewProp_bMultiBodyOverlap_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTraceComplexOnMove_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bTraceComplexOnMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTraceComplexOnMove = { "bTraceComplexOnMove", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTraceComplexOnMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplexOnMove_MetaData), NewProp_bTraceComplexOnMove_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReturnMaterialOnMove_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bReturnMaterialOnMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReturnMaterialOnMove = { "bReturnMaterialOnMove", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReturnMaterialOnMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnMaterialOnMove_MetaData), NewProp_bReturnMaterialOnMove_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAllowCullDistanceVolume_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bAllowCullDistanceVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAllowCullDistanceVolume = { "bAllowCullDistanceVolume", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAllowCullDistanceVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCullDistanceVolume_MetaData), NewProp_bAllowCullDistanceVolume_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInReflectionCaptures_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bVisibleInReflectionCaptures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInReflectionCaptures = { "bVisibleInReflectionCaptures", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInReflectionCaptures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInReflectionCaptures_MetaData), NewProp_bVisibleInReflectionCaptures_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRealTimeSkyCaptures_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bVisibleInRealTimeSkyCaptures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRealTimeSkyCaptures = { "bVisibleInRealTimeSkyCaptures", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRealTimeSkyCaptures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInRealTimeSkyCaptures_MetaData), NewProp_bVisibleInRealTimeSkyCaptures_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bVisibleInRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInRayTracing_MetaData), NewProp_bVisibleInRayTracing_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInMainPass_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bRenderInMainPass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInMainPass = { "bRenderInMainPass", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInMainPass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInMainPass_MetaData), NewProp_bRenderInMainPass_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInDepthPass_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bRenderInDepthPass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInDepthPass = { "bRenderInDepthPass", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInDepthPass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInDepthPass_MetaData), NewProp_bRenderInDepthPass_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHoldout_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bHoldout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHoldout = { "bHoldout", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHoldout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoldout_MetaData), NewProp_bHoldout_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOwnerNoSee_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bOwnerNoSee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOwnerNoSee = { "bOwnerNoSee", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOwnerNoSee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOwnerNoSee_MetaData), NewProp_bOwnerNoSee_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOnlyOwnerSee_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bOnlyOwnerSee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOnlyOwnerSee = { "bOnlyOwnerSee", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOnlyOwnerSee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyOwnerSee_MetaData), NewProp_bOnlyOwnerSee_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTreatAsBackgroundForOcclusion_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bTreatAsBackgroundForOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTreatAsBackgroundForOcclusion = { "bTreatAsBackgroundForOcclusion", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTreatAsBackgroundForOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatAsBackgroundForOcclusion_MetaData), NewProp_bTreatAsBackgroundForOcclusion_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bUseAsOccluder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsOccluder_MetaData), NewProp_bUseAsOccluder_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bForceMipStreaming_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bForceMipStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bForceMipStreaming = { "bForceMipStreaming", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bForceMipStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceMipStreaming_MetaData), NewProp_bForceMipStreaming_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CastShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->CastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CastShadow = { "CastShadow", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadow_MetaData), NewProp_CastShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEmissiveLightSource_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bEmissiveLightSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEmissiveLightSource = { "bEmissiveLightSource", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEmissiveLightSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmissiveLightSource_MetaData), NewProp_bEmissiveLightSource_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bAffectDynamicIndirectLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDynamicIndirectLighting_MetaData), NewProp_bAffectDynamicIndirectLighting_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectIndirectLightingWhileHidden_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bAffectIndirectLightingWhileHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectIndirectLightingWhileHidden = { "bAffectIndirectLightingWhileHidden", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectIndirectLightingWhileHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectIndirectLightingWhileHidden_MetaData), NewProp_bAffectIndirectLightingWhileHidden_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastDynamicShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadow_MetaData), NewProp_bCastDynamicShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastStaticShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastStaticShadow_MetaData), NewProp_bCastStaticShadow_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_ShadowCacheInvalidationBehavior = { "ShadowCacheInvalidationBehavior", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, ShadowCacheInvalidationBehavior), Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCacheInvalidationBehavior_MetaData), NewProp_ShadowCacheInvalidationBehavior_MetaData) }; // 2418645896
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastVolumetricTranslucentShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastVolumetricTranslucentShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastVolumetricTranslucentShadow = { "bCastVolumetricTranslucentShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastVolumetricTranslucentShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastVolumetricTranslucentShadow_MetaData), NewProp_bCastVolumetricTranslucentShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastContactShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastContactShadow_MetaData), NewProp_bCastContactShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSelfShadowOnly_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bSelfShadowOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSelfShadowOnly = { "bSelfShadowOnly", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSelfShadowOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelfShadowOnly_MetaData), NewProp_bSelfShadowOnly_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastFarShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastFarShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastFarShadow = { "bCastFarShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastFarShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastFarShadow_MetaData), NewProp_bCastFarShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastInsetShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastInsetShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastInsetShadow = { "bCastInsetShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastInsetShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastInsetShadow_MetaData), NewProp_bCastInsetShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastCinematicShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastCinematicShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastCinematicShadow = { "bCastCinematicShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastCinematicShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastCinematicShadow_MetaData), NewProp_bCastCinematicShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastHiddenShadow_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastHiddenShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastHiddenShadow = { "bCastHiddenShadow", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastHiddenShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastHiddenShadow_MetaData), NewProp_bCastHiddenShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bCastShadowAsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData), NewProp_bCastShadowAsTwoSided_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bLightAttachmentsAsGroup_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bLightAttachmentsAsGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bLightAttachmentsAsGroup = { "bLightAttachmentsAsGroup", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bLightAttachmentsAsGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLightAttachmentsAsGroup_MetaData), NewProp_bLightAttachmentsAsGroup_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bExcludeFromLightAttachmentGroup_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bExcludeFromLightAttachmentGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bExcludeFromLightAttachmentGroup = { "bExcludeFromLightAttachmentGroup", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bExcludeFromLightAttachmentGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeFromLightAttachmentGroup_MetaData), NewProp_bExcludeFromLightAttachmentGroup_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceiveMobileCSMShadows_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bReceiveMobileCSMShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceiveMobileCSMShadows = { "bReceiveMobileCSMShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceiveMobileCSMShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceiveMobileCSMShadows_MetaData), NewProp_bReceiveMobileCSMShadows_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSingleSampleShadowFromStationaryLights_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bSingleSampleShadowFromStationaryLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSingleSampleShadowFromStationaryLights = { "bSingleSampleShadowFromStationaryLights", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSingleSampleShadowFromStationaryLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleSampleShadowFromStationaryLights_MetaData), NewProp_bSingleSampleShadowFromStationaryLights_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialImpulse_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bIgnoreRadialImpulse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialImpulse = { "bIgnoreRadialImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialImpulse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreRadialImpulse_MetaData), NewProp_bIgnoreRadialImpulse_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialForce_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bIgnoreRadialForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialForce = { "bIgnoreRadialForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreRadialForce_MetaData), NewProp_bIgnoreRadialForce_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bApplyImpulseOnDamage_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bApplyImpulseOnDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bApplyImpulseOnDamage = { "bApplyImpulseOnDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bApplyImpulseOnDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyImpulseOnDamage_MetaData), NewProp_bApplyImpulseOnDamage_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReplicatePhysicsToAutonomousProxy_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bReplicatePhysicsToAutonomousProxy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReplicatePhysicsToAutonomousProxy = { "bReplicatePhysicsToAutonomousProxy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReplicatePhysicsToAutonomousProxy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicatePhysicsToAutonomousProxy_MetaData), NewProp_bReplicatePhysicsToAutonomousProxy_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bFillCollisionUnderneathForNavmesh_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bFillCollisionUnderneathForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bFillCollisionUnderneathForNavmesh = { "bFillCollisionUnderneathForNavmesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bFillCollisionUnderneathForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillCollisionUnderneathForNavmesh_MetaData), NewProp_bFillCollisionUnderneathForNavmesh_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInSceneCaptureOnly_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bVisibleInSceneCaptureOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInSceneCaptureOnly = { "bVisibleInSceneCaptureOnly", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInSceneCaptureOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInSceneCaptureOnly_MetaData), NewProp_bVisibleInSceneCaptureOnly_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHiddenInSceneCapture_SetBit(void* Obj)
{
	((FPCGExPrimitiveComponentDescriptor*)Obj)->bHiddenInSceneCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHiddenInSceneCapture = { "bHiddenInSceneCapture", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExPrimitiveComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHiddenInSceneCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenInSceneCapture_MetaData), NewProp_bHiddenInSceneCapture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CanCharacterStepUpOn = { "CanCharacterStepUpOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, CanCharacterStepUpOn), Z_Construct_UEnum_Engine_ECanBeCharacterBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanCharacterStepUpOn_MetaData), NewProp_CanCharacterStepUpOn_MetaData) }; // 3277807000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 1277301318
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RayTracingGroupId = { "RayTracingGroupId", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, RayTracingGroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingGroupId_MetaData), NewProp_RayTracingGroupId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, TranslucencySortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencySortPriority_MetaData), NewProp_TranslucencySortPriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_TranslucencySortDistanceOffset = { "TranslucencySortDistanceOffset", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, TranslucencySortDistanceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencySortDistanceOffset_MetaData), NewProp_TranslucencySortDistanceOffset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextures_MetaData), NewProp_RuntimeVirtualTextures_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureLodBias = { "VirtualTextureLodBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, VirtualTextureLodBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureLodBias_MetaData), NewProp_VirtualTextureLodBias_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, VirtualTextureCullMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureCullMips_MetaData), NewProp_VirtualTextureCullMips_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureMinCoverage = { "VirtualTextureMinCoverage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, VirtualTextureMinCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureMinCoverage_MetaData), NewProp_VirtualTextureMinCoverage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureRenderPassType_MetaData), NewProp_VirtualTextureRenderPassType_MetaData) }; // 860451061
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_BoundsScale = { "BoundsScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, BoundsScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsScale_MetaData), NewProp_BoundsScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority = { "RayTracingGroupCullingPriority", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, RayTracingGroupCullingPriority), Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingGroupCullingPriority_MetaData), NewProp_RayTracingGroupCullingPriority_MetaData) }; // 109024374
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPrimitiveComponentDescriptor, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilWriteMask_MetaData), NewProp_CustomDepthStencilWriteMask_MetaData) }; // 2544710791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_MinDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LDMaxDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_IndirectLightingCacheQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LightmapType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LightmapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_HLODBatchingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_HLODBatchingPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEnableAutoLODGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bNeverDistanceCull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAlwaysCreatePhysicsState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bMultiBodyOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTraceComplexOnMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReturnMaterialOnMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAllowCullDistanceVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInReflectionCaptures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRealTimeSkyCaptures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInMainPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderInDepthPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHoldout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOwnerNoSee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bOnlyOwnerSee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bTreatAsBackgroundForOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bUseAsOccluder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bForceMipStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bEmissiveLightSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectIndirectLightingWhileHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastDynamicShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastStaticShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_ShadowCacheInvalidationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastVolumetricTranslucentShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastContactShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSelfShadowOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastFarShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastInsetShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastCinematicShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastHiddenShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bLightAttachmentsAsGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bExcludeFromLightAttachmentGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReceiveMobileCSMShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bSingleSampleShadowFromStationaryLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bIgnoreRadialForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bApplyImpulseOnDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bReplicatePhysicsToAutonomousProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bFillCollisionUnderneathForNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bVisibleInSceneCaptureOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_bHiddenInSceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CanCharacterStepUpOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RayTracingGroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CustomDepthStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_TranslucencySortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_TranslucencySortDistanceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureLodBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureCullMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureMinCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_BoundsScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPrimitiveComponentDescriptor Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPrimitiveComponentDescriptor",
	Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::PropPointers),
	sizeof(FPCGExPrimitiveComponentDescriptor),
	alignof(FPCGExPrimitiveComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPrimitiveComponentDescriptor **********************************

// ********** Begin ScriptStruct FPCGExMeshComponentDescriptor *************************************
struct Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMeshComponentDescriptor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMeshComponentDescriptor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Mesh Component Descriptor" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Material overrides." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterialMaxDrawDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The max draw distance for overlay material. A distance of 0 indicates that overlay will be culled using primitive max distance. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "The max draw distance for overlay material. A distance of 0 indicates that overlay will be culled using primitive max distance." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMeshComponentDescriptor constinit property declarations *****
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayMaterialMaxDrawDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMeshComponentDescriptor constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMeshComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics
static_assert(std::is_polymorphic<FPCGExMeshComponentDescriptor>() == std::is_polymorphic<FPCGExPrimitiveComponentDescriptor>(), "USTRUCT FPCGExMeshComponentDescriptor cannot be polymorphic unless super FPCGExPrimitiveComponentDescriptor is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor;
class UScriptStruct* FPCGExMeshComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMeshComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMeshComponentDescriptor Property Definitions ****************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0014040000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshComponentDescriptor, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverlayMaterialMaxDrawDistance = { "OverlayMaterialMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshComponentDescriptor, OverlayMaterialMaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterialMaxDrawDistance_MetaData), NewProp_OverlayMaterialMaxDrawDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewProp_OverlayMaterialMaxDrawDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMeshComponentDescriptor Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor,
	&NewStructOps,
	"PCGExMeshComponentDescriptor",
	Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::PropPointers),
	sizeof(FPCGExMeshComponentDescriptor),
	alignof(FPCGExMeshComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMeshComponentDescriptor ***************************************

// ********** Begin ScriptStruct FPCGExStaticMeshComponentDescriptor *******************************
struct Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExStaticMeshComponentDescriptor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExStaticMeshComponentDescriptor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Static Mesh Component Descriptor" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Relevant when used with PCGEx' spline mesh nodes */" },
		{ "DisplayName", "Spline Mesh Axis" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Relevant when used with PCGEx' spline mesh nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1). */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09 * Specifies the smallest LOD that will be used for this component.  \n\x09 * This is ignored if ForcedLodModel is enabled.\n\x09 */" },
		{ "editcondition", "bOverrideMinLOD" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nThis is ignored if ForcedLodModel is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColorOverride_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Wireframe color to use if bOverrideWireframeColor is true */" },
		{ "editcondition", "bOverrideWireframeColor" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Wireframe color to use if bOverrideWireframeColor is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNaniteForMasked_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Forces this component to always use Nanite for masked materials, even if FNaniteSettings::bAllowMaskedMaterials=false */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Forces this component to always use Nanite for masked materials, even if FNaniteSettings::bAllowMaskedMaterials=false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowNanite_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Forces this component to use fallback mesh for rendering if Nanite is enabled on the mesh. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Forces this component to use fallback mesh for rendering if Nanite is enabled on the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Whether to evaluate World Position Offset. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to evaluate World Position Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorldPositionOffsetWritesVelocity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Whether world position offset turns on velocity writes.\n\x09 * If the WPO isn't static then setting false may give incorrect motion vectors.\n\x09 * But if we know that the WPO is static then setting false may save performance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether world position offset turns on velocity writes.\nIf the WPO isn't static then setting false may give incorrect motion vectors.\nBut if we know that the WPO is static then setting false may save performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffsetInRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** \n\x09 * Whether to evaluate World Position Offset for ray tracing. \n\x09 * This is only used when running with r.RayTracing.Geometry.StaticMeshes.WPO=1 \n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to evaluate World Position Offset for ray tracing.\nThis is only used when running with r.RayTracing.Geometry.StaticMeshes.WPO=1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Distance at which to disable World Position Offset for an entire instance (0 = Never disable WPO).\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Distance at which to disable World Position Offset for an entire instance (0 = Never disable WPO)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWireframeColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowMeshPaintPerInstance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstanceForTextureStreaming_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "Comment", "/**\n\x09 *\x09Ignore this instance of this static mesh when calculating streaming information.\n\x09 *\x09This can be useful when doing things like applying character textures to static geometry,\n\x09 *\x09to avoid them using distance-based streaming.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Ignore this instance of this static mesh when calculating streaming information.\nThis can be useful when doing things like applying character textures to static geometry,\nto avoid them using distance-based streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether to override the lightmap resolution defined in the static mesh. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDistanceFieldIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\n\x09 * This works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\n\x09 * The StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work.\n\x09 */" },
		{ "DisplayName", "Distance Field Indirect Shadow" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\nThis works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\nThe StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Use the collision profile specified in the StaticMesh asset.*/" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Use the collision profile specified in the StaticMesh asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortTriangles_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Enable dynamic sort mesh's triangles to remove ordering issue when rendered with a translucent material */" },
		{ "DisplayName", "Sort Triangles" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Enable dynamic sort mesh's triangles to remove ordering issue when rendered with a translucent material" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseCulling_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 * Controls whether the static mesh component's backface culling should be reversed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls whether the static mesh component's backface culling should be reversed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ClampMax", "4096" },
		{ "Comment", "/** Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh. */" },
		{ "editcondition", "bOverrideLightMapRes" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Controls how dark the dynamic indirect shadow can be.\n\x09 */" },
		{ "DisplayName", "Distance Field Indirect Shadow Min Visibility" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Controls how dark the dynamic indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Allows adjusting the desired resolution of streaming textures that uses UV 0.  1.0 is the default, whereas a higher value increases the streamed-in resolution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExStaticMeshComponentDescriptor constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMeshAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMeshAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColorOverride;
	static void NewProp_bForceNaniteForMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNaniteForMasked;
	static void NewProp_bDisallowNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowNanite;
	static void NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffset;
	static void NewProp_bWorldPositionOffsetWritesVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldPositionOffsetWritesVelocity;
	static void NewProp_bEvaluateWorldPositionOffsetInRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffsetInRayTracing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPositionOffsetDisableDistance;
	static void NewProp_bOverrideWireframeColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWireframeColor;
	static void NewProp_bOverrideMinLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLOD;
	static void NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowMeshPaintPerInstance;
	static void NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstanceForTextureStreaming;
	static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
	static void NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDistanceFieldIndirectShadow;
	static void NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDistanceFieldSelfShadowBias;
	static void NewProp_bUseDefaultCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision;
	static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
	static void NewProp_bSortTriangles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortTriangles;
	static void NewProp_bReverseCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseCulling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldIndirectShadowMinVisibility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExStaticMeshComponentDescriptor constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExStaticMeshComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics
static_assert(std::is_polymorphic<FPCGExStaticMeshComponentDescriptor>() == std::is_polymorphic<FPCGExMeshComponentDescriptor>(), "USTRUCT FPCGExStaticMeshComponentDescriptor cannot be polymorphic unless super FPCGExMeshComponentDescriptor is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor;
class UScriptStruct* FPCGExStaticMeshComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExStaticMeshComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExStaticMeshComponentDescriptor Property Definitions **********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_SplineMeshAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_SplineMeshAxis = { "SplineMeshAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, SplineMeshAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshAxis_MetaData), NewProp_SplineMeshAxis_MetaData) }; // 3931014419
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_ForcedLodModel = { "ForcedLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, ForcedLodModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedLodModel_MetaData), NewProp_ForcedLodModel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, MinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLOD_MetaData), NewProp_MinLOD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_WireframeColorOverride = { "WireframeColorOverride", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, WireframeColorOverride), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeColorOverride_MetaData), NewProp_WireframeColorOverride_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bForceNaniteForMasked_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bForceNaniteForMasked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bForceNaniteForMasked = { "bForceNaniteForMasked", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bForceNaniteForMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNaniteForMasked_MetaData), NewProp_bForceNaniteForMasked_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowNanite_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bDisallowNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowNanite = { "bDisallowNanite", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisallowNanite_MetaData), NewProp_bDisallowNanite_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bEvaluateWorldPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffset = { "bEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateWorldPositionOffset_MetaData), NewProp_bEvaluateWorldPositionOffset_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bWorldPositionOffsetWritesVelocity_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bWorldPositionOffsetWritesVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bWorldPositionOffsetWritesVelocity = { "bWorldPositionOffsetWritesVelocity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bWorldPositionOffsetWritesVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorldPositionOffsetWritesVelocity_MetaData), NewProp_bWorldPositionOffsetWritesVelocity_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bEvaluateWorldPositionOffsetInRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing = { "bEvaluateWorldPositionOffsetInRayTracing", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateWorldPositionOffsetInRayTracing_MetaData), NewProp_bEvaluateWorldPositionOffsetInRayTracing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, WorldPositionOffsetDisableDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffsetDisableDistance_MetaData), NewProp_WorldPositionOffsetDisableDistance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideWireframeColor_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bOverrideWireframeColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideWireframeColor = { "bOverrideWireframeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideWireframeColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideWireframeColor_MetaData), NewProp_bOverrideWireframeColor_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideMinLOD_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bOverrideMinLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideMinLOD = { "bOverrideMinLOD", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideMinLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMinLOD_MetaData), NewProp_bOverrideMinLOD_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bDisallowMeshPaintPerInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowMeshPaintPerInstance = { "bDisallowMeshPaintPerInstance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisallowMeshPaintPerInstance_MetaData), NewProp_bDisallowMeshPaintPerInstance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bIgnoreInstanceForTextureStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bIgnoreInstanceForTextureStreaming = { "bIgnoreInstanceForTextureStreaming", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreInstanceForTextureStreaming_MetaData), NewProp_bIgnoreInstanceForTextureStreaming_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bOverrideLightMapRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLightMapRes_MetaData), NewProp_bOverrideLightMapRes_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bCastDistanceFieldIndirectShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bCastDistanceFieldIndirectShadow = { "bCastDistanceFieldIndirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDistanceFieldIndirectShadow_MetaData), NewProp_bCastDistanceFieldIndirectShadow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bOverrideDistanceFieldSelfShadowBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias = { "bOverrideDistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData), NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bUseDefaultCollision_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bUseDefaultCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bUseDefaultCollision = { "bUseDefaultCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bUseDefaultCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultCollision_MetaData), NewProp_bUseDefaultCollision_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bGenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOverlapEvents_MetaData), NewProp_bGenerateOverlapEvents_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bSortTriangles_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bSortTriangles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bSortTriangles = { "bSortTriangles", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bSortTriangles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortTriangles_MetaData), NewProp_bSortTriangles_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bReverseCulling_SetBit(void* Obj)
{
	((FPCGExStaticMeshComponentDescriptor*)Obj)->bReverseCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bReverseCulling = { "bReverseCulling", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPCGExStaticMeshComponentDescriptor), &Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bReverseCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseCulling_MetaData), NewProp_bReverseCulling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, OverriddenLightMapRes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenLightMapRes_MetaData), NewProp_OverriddenLightMapRes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility = { "DistanceFieldIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, DistanceFieldIndirectShadowMinVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData), NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, DistanceFieldSelfShadowBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldSelfShadowBias_MetaData), NewProp_DistanceFieldSelfShadowBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, StreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData), NewProp_StreamingDistanceMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticMeshComponentDescriptor, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmassSettings_MetaData), NewProp_LightmassSettings_MetaData) }; // 1145444858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_SplineMeshAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_SplineMeshAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_ForcedLodModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_MinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_WireframeColorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bForceNaniteForMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bWorldPositionOffsetWritesVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_WorldPositionOffsetDisableDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideWireframeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideMinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bDisallowMeshPaintPerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bIgnoreInstanceForTextureStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bCastDistanceFieldIndirectShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bUseDefaultCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bGenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bSortTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_bReverseCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_OverriddenLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_DistanceFieldSelfShadowBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_StreamingDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewProp_LightmassSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExStaticMeshComponentDescriptor Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor,
	&NewStructOps,
	"PCGExStaticMeshComponentDescriptor",
	Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::PropPointers),
	sizeof(FPCGExStaticMeshComponentDescriptor),
	alignof(FPCGExStaticMeshComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExStaticMeshComponentDescriptor *********************************

// ********** Begin ScriptStruct FPCGExDynamicMeshDescriptor ***************************************
struct Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDynamicMeshDescriptor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDynamicMeshDescriptor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Dynamic Mesh Component Descriptor" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/**\n\x09 *\x09""Controls whether the physics cooking should be done off the game thread.\n\x09 *  This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread.\nThis should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableComplexCollision_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** \n\x09 * If true, current mesh will be used as Complex Collision source mesh. \n\x09 * This is independent of the CollisionType setting, ie, even if Complex collision is enabled, if this is false, then the Complex Collision mesh will be empty\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If true, current mesh will be used as Complex Collision source mesh.\nThis is independent of the CollisionType setting, ie, even if Complex collision is enabled, if this is false, then the Complex Collision mesh will be empty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeferCollisionUpdates_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** If true, updates to the mesh will not result in immediate collision regeneration. Useful when the mesh will be modified multiple times before collision is needed. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If true, updates to the mesh will not result in immediate collision regeneration. Useful when the mesh will be modified multiple times before collision is needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitShowWireframe_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * If true, render the Wireframe on top of the Shaded Mesh\n\x09 */" },
		{ "DisplayName", "Wireframe Overlay" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "If true, render the Wireframe on top of the Shaded Mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Constant Color used when Override Color Mode is set to Constant\n\x09 */" },
		{ "DisplayName", "Wireframe Color" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Constant Color used when Override Color Mode is set to Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMode_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "DisplayName", "Color Override" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantColor_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Constant Color used when Override Color Mode is set to Constant\n\x09 */" },
		{ "DisplayName", "Constant Color" },
		{ "EditCondition", "ColorMode == EDynamicMeshComponentColorOverrideMode::Constant" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Constant Color used when Override Color Mode is set to Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceMode_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Color Space Transform that will be applied to the colors stored in the DynamicMesh Attribute Color Overlay when\n\x09 * constructing render buffers. \n\x09 * Default is \"No Transform\", ie color R/G/B/A will be independently converted from 32-bit float to 8-bit by direct mapping.\n\x09 * LinearToSRGB mode will apply SRGB conversion, ie assumes colors in the Mesh are in Linear space. This will produce the same behavior as UStaticMesh.\n\x09 * SRGBToLinear mode will invert SRGB conversion, ie assumes colors in the Mesh are in SRGB space. \n\x09 */" },
		{ "DisplayName", "Vertex Color Space" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Color Space Transform that will be applied to the colors stored in the DynamicMesh Attribute Color Overlay when\nconstructing render buffers.\nDefault is \"No Transform\", ie color R/G/B/A will be independently converted from 32-bit float to 8-bit by direct mapping.\nLinearToSRGB mode will apply SRGB conversion, ie assumes colors in the Mesh are in Linear space. This will produce the same behavior as UStaticMesh.\nSRGBToLinear mode will invert SRGB conversion, ie assumes colors in the Mesh are in SRGB space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFlatShading_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Enable use of per-triangle facet normals in place of mesh normals\n\x09 */" },
		{ "DisplayName", "Flat Shading" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Enable use of per-triangle facet normals in place of mesh normals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewModeOverrides_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/** \n\x09 * This flag controls whether Editor View Mode Overrides are enabled for this mesh. For example, this controls hidden-line removal on the wireframe \n\x09 * in Wireframe View Mode, and whether the normal map will be disabled in Lighting-Only View Mode, as well as various other things.\n\x09 * Use SetViewModeOverridesEnabled() to control this setting in Blueprints/C++.\n\x09 */" },
		{ "DisplayName", "View Mode Overrides" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "This flag controls whether Editor View Mode Overrides are enabled for this mesh. For example, this controls hidden-line removal on the wireframe\nin Wireframe View Mode, and whether the normal map will be disabled in Lighting-Only View Mode, as well as various other things.\nUse SetViewModeOverridesEnabled() to control this setting in Blueprints/C++." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRaytracing_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Enable/disable Raytracing support on this Mesh, if Raytracing is currently enabled in the Project Settings.\n\x09 * Use SetEnableRaytracing() to configure this flag in Blueprints/C++.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExComponentDescriptors.h" },
		{ "ToolTip", "Enable/disable Raytracing support on this Mesh, if Raytracing is currently enabled in the Project Settings.\nUse SetEnableRaytracing() to configure this flag in Blueprints/C++." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDynamicMeshDescriptor constinit property declarations *******
	static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
	static void NewProp_bEnableComplexCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableComplexCollision;
	static void NewProp_bDeferCollisionUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferCollisionUpdates;
	static void NewProp_bExplicitShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitShowWireframe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpaceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpaceMode;
	static void NewProp_bEnableFlatShading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFlatShading;
	static void NewProp_bEnableViewModeOverrides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewModeOverrides;
	static void NewProp_bEnableRaytracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRaytracing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExDynamicMeshDescriptor constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDynamicMeshDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics
static_assert(std::is_polymorphic<FPCGExDynamicMeshDescriptor>() == std::is_polymorphic<FPCGExMeshComponentDescriptor>(), "USTRUCT FPCGExDynamicMeshDescriptor cannot be polymorphic unless super FPCGExMeshComponentDescriptor is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor;
class UScriptStruct* FPCGExDynamicMeshDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDynamicMeshDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExDynamicMeshDescriptor Property Definitions ******************
void Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
{
	((FPCGExDynamicMeshDescriptor*)Obj)->bUseAsyncCooking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDynamicMeshDescriptor), &Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncCooking_MetaData), NewProp_bUseAsyncCooking_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableComplexCollision_SetBit(void* Obj)
{
	((FPCGExDynamicMeshDescriptor*)Obj)->bEnableComplexCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableComplexCollision = { "bEnableComplexCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDynamicMeshDescriptor), &Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableComplexCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableComplexCollision_MetaData), NewProp_bEnableComplexCollision_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bDeferCollisionUpdates_SetBit(void* Obj)
{
	((FPCGExDynamicMeshDescriptor*)Obj)->bDeferCollisionUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bDeferCollisionUpdates = { "bDeferCollisionUpdates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDynamicMeshDescriptor), &Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bDeferCollisionUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeferCollisionUpdates_MetaData), NewProp_bDeferCollisionUpdates_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bExplicitShowWireframe_SetBit(void* Obj)
{
	((FPCGExDynamicMeshDescriptor*)Obj)->bExplicitShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bExplicitShowWireframe = { "bExplicitShowWireframe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDynamicMeshDescriptor), &Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bExplicitShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExplicitShowWireframe_MetaData), NewProp_bExplicitShowWireframe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDynamicMeshDescriptor, WireframeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeColor_MetaData), NewProp_WireframeColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorMode = { "ColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDynamicMeshDescriptor, ColorMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMode_MetaData), NewProp_ColorMode_MetaData) }; // 1608803465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ConstantColor = { "ConstantColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDynamicMeshDescriptor, ConstantColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantColor_MetaData), NewProp_ConstantColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorSpaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorSpaceMode = { "ColorSpaceMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDynamicMeshDescriptor, ColorSpaceMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSpaceMode_MetaData), NewProp_ColorSpaceMode_MetaData) }; // 777321213
void Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableFlatShading_SetBit(void* Obj)
{
	((FPCGExDynamicMeshDescriptor*)Obj)->bEnableFlatShading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableFlatShading = { "bEnableFlatShading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDynamicMeshDescriptor), &Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableFlatShading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFlatShading_MetaData), NewProp_bEnableFlatShading_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableViewModeOverrides_SetBit(void* Obj)
{
	((FPCGExDynamicMeshDescriptor*)Obj)->bEnableViewModeOverrides = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableViewModeOverrides = { "bEnableViewModeOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDynamicMeshDescriptor), &Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableViewModeOverrides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableViewModeOverrides_MetaData), NewProp_bEnableViewModeOverrides_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableRaytracing_SetBit(void* Obj)
{
	((FPCGExDynamicMeshDescriptor*)Obj)->bEnableRaytracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableRaytracing = { "bEnableRaytracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDynamicMeshDescriptor), &Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableRaytracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRaytracing_MetaData), NewProp_bEnableRaytracing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bUseAsyncCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableComplexCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bDeferCollisionUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bExplicitShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_WireframeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ConstantColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorSpaceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_ColorSpaceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableFlatShading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableViewModeOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewProp_bEnableRaytracing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExDynamicMeshDescriptor Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor,
	&NewStructOps,
	"PCGExDynamicMeshDescriptor",
	Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::PropPointers),
	sizeof(FPCGExDynamicMeshDescriptor),
	alignof(FPCGExDynamicMeshDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDynamicMeshDescriptor *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExComponentDescriptors_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPrimitiveComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FPCGExPrimitiveComponentDescriptor_Statics::NewStructOps, TEXT("PCGExPrimitiveComponentDescriptor"),&Z_Registration_Info_UScriptStruct_FPCGExPrimitiveComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPrimitiveComponentDescriptor), 664718167U) },
		{ FPCGExMeshComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FPCGExMeshComponentDescriptor_Statics::NewStructOps, TEXT("PCGExMeshComponentDescriptor"),&Z_Registration_Info_UScriptStruct_FPCGExMeshComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMeshComponentDescriptor), 1100349035U) },
		{ FPCGExStaticMeshComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor_Statics::NewStructOps, TEXT("PCGExStaticMeshComponentDescriptor"),&Z_Registration_Info_UScriptStruct_FPCGExStaticMeshComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExStaticMeshComponentDescriptor), 3445229925U) },
		{ FPCGExDynamicMeshDescriptor::StaticStruct, Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor_Statics::NewStructOps, TEXT("PCGExDynamicMeshDescriptor"),&Z_Registration_Info_UScriptStruct_FPCGExDynamicMeshDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDynamicMeshDescriptor), 2595669215U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExComponentDescriptors_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExComponentDescriptors_h__Script_PCGExtendedToolkit_3516802457{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExComponentDescriptors_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExComponentDescriptors_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
