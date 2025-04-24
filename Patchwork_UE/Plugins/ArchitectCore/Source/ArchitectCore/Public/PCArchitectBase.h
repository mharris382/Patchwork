// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PCGGraph.h" // Include this if not already included
#include "PCArchitectBase.generated.h"


USTRUCT(BlueprintType)
struct FArchitectMaterialOverride
{
    GENERATED_BODY()

    // Single override material, always visible
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    UMaterialInterface* OverrideMaterial;

    // Boolean to toggle usage of multiple materials
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    bool bUseMultiple;

    // Array of override materials, only visible if bUseMultiple is true
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (EditCondition = "bUseMultiple"))
    TArray<UMaterialInterface*> OverrideMaterials;

    // Default constructor
    FArchitectMaterialOverride()
        : OverrideMaterial(nullptr)
        , bUseMultiple(false)
    {}
};

USTRUCT(BlueprintType)
struct FArchitectMaterialOptions
{
    GENERATED_BODY()

    // Priority of the material override
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (Tooltip = "Priority of this material override. Higher priority materials override lower priority ones."))
    int32 Priority;

    // Enables material override on walls
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (Tooltip = "Enable material override on walls. When enabled, shared material settings are applied on walls, doors, windows, and corners."))
    bool bEnabledOnWalls;

    // Material settings for walls, doors, windows, and corners
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (Tooltip = "Material override settings for walls, doors, windows, and corners."))
    FArchitectMaterialOverride WallMaterial;

    // Enables material override on floors
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (Tooltip = "Enable material override on floors. When enabled, shared material settings are applied on floors and ceilings."))
    bool bEnabledOnFloors;

    // Material settings for floors and ceilings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (Tooltip = "Material override settings for floors and ceilings."))
    FArchitectMaterialOverride FloorMaterial;

    // Default constructor
    FArchitectMaterialOptions()
        : Priority(0)
        , bEnabledOnWalls(false)
        , bEnabledOnFloors(false)
    {}
};





UENUM(BlueprintType)
enum EArchitectOverideModes : uint8
{
    None,
    DataAsset,
    SpecificSettings
};


USTRUCT(BlueprintType)
struct FArchitectOverrides
{
    GENERATED_BODY()

public:
    // Constructor to initialize default paths for plugin assets
    FArchitectOverrides()
    {
       SSMGraph= LoadObject<UPCGGraphInterface>(nullptr, TEXT("/ArchitectCore/Core/Graphs/Defaults/SSM_Default.SSM_Default"));
       CAGraph = LoadObject<UPCGGraphInterface>(nullptr, TEXT("/ArchitectCore/Core/Graphs/Defaults/CA_Default.CA_Default"));
       FAGraph = LoadObject<UPCGGraphInterface>(nullptr, TEXT("/ArchitectCore/Core/Graphs/Defaults/FA_Default.FA_Default"));
       SAGraph = LoadObject<UPCGGraphInterface>(nullptr, TEXT("/ArchitectCore/Core/Graphs/Defaults/SA_Default.SA_Default"));
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides")
    bool bEnableSSMGraph = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides", meta = (EditCondition = "bEnableSSMGraph"))
    TObjectPtr<UPCGGraphInterface> SSMGraph;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides")
    bool bEnableCAGraph = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides", meta = (EditCondition = "bEnableCAGraph"))
    TObjectPtr<UPCGGraphInterface> CAGraph;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides")
    bool bEnableFAGraph = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides", meta = (EditCondition = "bEnableFAGraph"))
    TObjectPtr<UPCGGraphInterface> FAGraph;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides")
    bool bEnableSAGraph = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides", meta = (EditCondition = "bEnableSAGraph"))
    TObjectPtr<UPCGGraphInterface> SAGraph;
};

UCLASS()
class ARCHITECTCORE_API APCArchitectBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APCArchitectBase();

    /*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Overrides")
    FArchitectOverrides ArchitectOverrides;*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "00 - Core", meta = (DisplayPriority=1))
	//int Seed;

};
