// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PCGGraph.h"
#include "PCGDataAsset.h"
//#include "Collections/PCGExActorCollection.h"
//#include "Collections/PCGExMeshCollection.h"
#include "PCArchitectBase.h"
#include "ArchitectRecipe.generated.h"

UENUM(BlueprintType)
enum EAssetSpawnMode : uint8
{
    DoNotSpawn = 0,
    MeshOnly = 1 UMETA(DisplayName = "Mesh"),
    AssemblyOnly = 2 UMETA(DisplayName = "Assembly"),
    Combined = 3 UMETA(DisplayName = "Mesh & Assembly"),
    MeshCollection = 4 UMETA(DisplayName = "Mesh Collection"),
};

UENUM(BlueprintType)
enum ECornerSpawnMode: uint8
{
    NoCorner = 0 UMETA(DisplayName = "None", ToolTip = "Not Spawned"),
    EdgeCorner = 1 UMETA(DisplayName = "Edge", ToolTip = "Single Asset is spawned, but walls are not shifted."),
    FullCorner = 2 UMETA(DisplayName = "Full", ToolTip = "Single Asset is spawned, walls are bounds are shifted"),
    SplitCorner = 3 UMETA(DisplayName = "Split", ToolTip = "Dual Assets (right and left) are spawned, walls are bounds are shifted")
};

USTRUCT(BlueprintType)
struct FArchitectAsset_AssemblyOptions
{
    GENERATED_BODY()

    // Enables collisions on non-detail meshes. Note that collision tag will ignore this value.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assembly Options", meta = (Tooltip = "Enables collisions on non-detail meshes, note that collision tag will ignore this value."))
    bool EnableCollisions;

    // Random removal will be clamped to this range, used to guarantee that specific number of "Removables" will spawn or guarantee that less than 100% will spawn.
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assembly Options", meta = (Tooltip = "Random removal will be clamped to this range, used to guarantee that specific number of 'Removables' will spawn or guarantee that less than 100% will spawn."))
    //FVector2D AllowedRemovalRange;

    // If enabled, points tagged as details will be culled based on user graphics settings. This reduces the overall graphics load when running at (Effects) settings lower than Epic.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assembly Options", meta = (Tooltip = "If enabled, points tagged as details will be culled based on user graphics settings. This reduces the overall graphics load when running at (Effects) settings lower than Epic."))
    bool UseScalableDetails;

    // Allows tagging points so that they will be used if spawned at the top, middle, or bottom of the building.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assembly Options", meta = (Tooltip = "Allows tagging points so that they will be used if spawned at the top, middle, or bottom of the building."))
    bool UseTopBottomMiddleTags;

    // Default constructor
    FArchitectAsset_AssemblyOptions()
        : EnableCollisions(false)
        //, AllowedRemovalRange(FVector2D(0.0f, 1.0f))
        , UseScalableDetails(false)
        , UseTopBottomMiddleTags(false)
    {}
};


USTRUCT(BlueprintType)
struct FArchitectAsset_TransformationOptions
{
    GENERATED_BODY()

    // Offset transformation applied to the object.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation Options")
    FVector Offset;

    // Fixed rotation applied to the object.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation Options")
    FRotator Rotation;

    // Scale transformation applied to the object.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation Options")
    FVector Scale;

    //// If enabled, allows applying rotational variation, either in discrete mode or continuous mode.
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation Options", meta = (Tooltip = "If enabled, allows applying rotational variation, either in discrete mode or continuous mode."))
    //bool UseRandomRotation;
    //
    //// If true, randomly selects either the minimum or maximum random rotation value instead of picking a random rotation in between.
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation Options", meta = (EditCondition = "UseRandomRotation", Tooltip = "If true, then we randomly select either the RandomRotationMin or RandomRotationMax instead of picking a random rotation between."))
    //bool DiscreteRandomRotation;
    //
    //// Minimum value for random rotation when UseRandomRotation is enabled.
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation Options", meta = (EditCondition = "UseRandomRotation", Tooltip = "Minimum rotation value when applying random rotation."))
    //FRotator RandomRotation1;
    //
    //// Maximum value for random rotation when UseRandomRotation is enabled.
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation Options", meta = (EditCondition = "UseRandomRotation", Tooltip = "Maximum rotation value when applying random rotation."))
    //FRotator RandomRotation2;

    // Default constructor
    FArchitectAsset_TransformationOptions()
        : Offset(FVector::ZeroVector)
        , Rotation(FRotator::ZeroRotator)
        , Scale(FVector(1.0f, 1.0f, 1.0f))
       //, UseRandomRotation(false)
       //, DiscreteRandomRotation(true)
       //, RandomRotationMin(FRotator::ZeroRotator)
       //, RandomRotationMax(FRotator(0, 0, 180))
    {}
};


//USTRUCT(BlueprintType)
//struct FArchitectAsset_MeshOptions
//{
//    GENERATED_BODY()
//    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Options")
//    bool bUseRandomMesh;
//
//	// Mesh to spawn
//    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Options", meta = (EditCondition = "bUseRandomMesh"))
//	TArray<UStaticMesh*> Meshes;
//    
//
//	// Default constructor
//	//FArchitectAsset_MeshOptions()
//	//	: Mesh(nullptr)
//	//{}
//};


/**
 * Struct for configuring spawn options, including mode, mesh, assembly, material, and transformation settings.
 */
USTRUCT(BlueprintType)
struct FArchitectAsset
{
    GENERATED_BODY()

    // Specifies the spawn mode for the asset.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (Tooltip = "Specifies the spawn mode for the asset."))
    TEnumAsByte<EAssetSpawnMode> SpawnMode;

    // Static mesh to use in spawn mode.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (EditCondition = "SpawnMode != EAssetSpawnMode::DoNotSpawn && SpawnMode != EAssetSpawnMode::MeshCollection", EditConditionHides, Tooltip = "Static mesh to use in static mesh spawn mode."))//EditCondition = "SpawnMode == EAssetSpawnMode::MeshOnly || SpawnMode == EAssetSpawnMode::Combined", Tooltip = "Static mesh to use in spawn mode."))
    TObjectPtr<UStaticMesh> StaticMesh;

    // PCG data asset to use in assembly mode.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (EditCondition = "SpawnMode == EAssetSpawnMode::Combined || SpawnMode == EAssetSpawnMode::AssemblyOnly", EditConditionHides, Tooltip = "PCG data asset to use in assembly mode."))
    TObjectPtr<UPCGDataAsset> Assembly; // Adjust type if it's a specific PCGDataAsset class

    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (EditCondition = "SpawnMode == EAssetSpawnMode::MeshCollection", EditConditionHides, Tooltip = "PCGEx Mesh Collection."))
    //TObjectPtr<UPCGExMeshCollection> MeshCollection;

    // Override material applied based on spawn mode.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (EditCondition = "SpawnMode != EAssetSpawnMode::DoNotSpawn", EditConditionHides, Tooltip = "Override Material to apply to slot 1 on static mesh.  It will also be applied to any assembly points tagged with StaticMeshMaterial"))
    TObjectPtr<UMaterialInterface> Material;

    


    // Assembly options for the asset.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (EditCondition = "SpawnMode != EAssetSpawnMode::DoNotSpawn && SpawnMode != EAssetSpawnMode::MeshOnly", EditConditionHides, Tooltip = "Assembly options for the asset."))
    FArchitectAsset_AssemblyOptions AssemblyOptions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (EditCondition = "SpawnMode != EAssetSpawnMode::DoNotSpawn", EditConditionHides, Tooltip = "Override Graphs to override specific spawning behaviors using custom PCG graphs."))
    FArchitectOverrides OverrideGraphs;



    // Transformation options for the asset.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Options", meta = (EditCondition = "SpawnMode != EAssetSpawnMode::DoNotSpawn", EditConditionHides, Tooltip = "Transformation options for the asset."))
    FArchitectAsset_TransformationOptions TransformOptions;

    // Default constructor
    FArchitectAsset()
        : SpawnMode(EAssetSpawnMode::MeshOnly)
        , StaticMesh(nullptr)
        , Assembly(nullptr)
        , Material(nullptr)
    {}
};


USTRUCT(BlueprintType)
struct FArchitectCornerAsset
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners")
    TEnumAsByte<ECornerSpawnMode> CornerMode = ECornerSpawnMode::EdgeCorner; 

 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "!UseRecipes && CornerMode==ECornerSpawnMode::EdgeCorner || CornerMode==ECornerSpawnMode::FullCorner", EditConditionHides))
    FArchitectAsset Corner;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "!UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner", EditConditionHides))
    FArchitectAsset CornerRight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "!UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner", EditConditionHides))
    FArchitectAsset CornerLeft;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners")
    bool UseRecipes = false;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "UseRecipes && CornerMode==ECornerSpawnMode::EdgeCorner || CornerMode==ECornerSpawnMode::FullCorner", EditConditionHides))
    TObjectPtr<UArchitectRecipe> CornerRecipe;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner", EditConditionHides))
    TObjectPtr<UArchitectRecipe> CornerRightRecipe;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner", EditConditionHides))
    TObjectPtr<UArchitectRecipe> CornerLeftRecipe;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "!UseRecipes && CornerMode!=ECornerSpawnMode::NoCorner && CornerMode!=ECornerSpawnMode::EdgeCorner", EditConditionHides))
    bool OverrideRecipeFootprint = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners", meta = (EditCondition = "!UseRecipes && CornerMode!=ECornerSpawnMode::NoCorner && CornerMode!=ECornerSpawnMode::EdgeCorner && OverrideRecipeFootprint", EditConditionHides))
    FVector CornerFootprint = FVector(200, 200, 300);
};
//USTRUCT(BlueprintType)
//struct FArchitectAsset_ActorOptions
//{
//    GENERATED_BODY()
//
//    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Options")
//    bool bSpawnActor;
//
//    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Options")
//    bool bUseSpawnTag;
//
//    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Options")
//    FName SpawnTag;
//
//    // Mesh to spawn
//    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Options")
//    TSubclassOf<AActor> ActorClass;
//
//    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Options")
//    TObjectPtr<UPCGGraphInterface> SpawnActorOverrideGraph;
//
//    // Default constructor
//    FArchitectAsset_ActorOptions()
//        : ActorClass(nullptr)
//    {}
//};
//
//
//




/**
 * 
 */
UCLASS()
class ARCHITECTCORE_API UArchitectRecipe : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
    
    UFUNCTION(CallInEditor, Category="Core")
    void AutoCalculateFootprint();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Core")
    FVector Footprint = FVector(200, 200, 300);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Walls")
    FArchitectAsset Wall;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Walls")
    bool HasDoorSlot = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Walls", meta = (EditCondition = "HasDoorSlot", EditConditionHides))
    FArchitectAsset Door;



    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Walls")
    bool HasWindowSlot = true;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Walls", meta = (EditCondition = "HasWindowSlot", EditConditionHides))
    FArchitectAsset Window;



    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners")
    FArchitectCornerAsset OutCorner;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Corners")
    FArchitectCornerAsset InCorner;
     
    



    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floors")
    FArchitectAsset Floor;

    

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floors")
    bool UseFloorAsCeiling;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floors", meta = (EditCondition = "UseFloorAsCeiling==false"))
    FArchitectAsset Ceiling;

    
};
