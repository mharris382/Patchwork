// Copyright (c) 2025 Max Harris
// Published by Procedural Architect

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PCGGraph.h"
#include "Components/BoxComponent.h"
#include "ProceduralPipeActor.generated.h"

//#define OVERRIDE_PCG_GRAPH_PROPERTY(Name, CategoryName, TooltipText) \
//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CategoryName, \
//	meta = (InlineEditConditionToggle, Tooltip = TooltipText)) \
//bool bEnable##Name = false; \
//\
//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CategoryName, \
//	meta = (EditCondition = "bEnable" #Name, EditConditionHides, Tooltip = TooltipText)) \
//TScriptInterface<UPCGGraphInterface> Name;



//UENUM(BlueprintType)
//enum class EPipePart : uint8
//{
//	PipeStraight = 1 UMETA(DisplayName = "Straight Pipe"	, Tooltip = ""),
//	PipeCorner = 2 UMETA(DisplayName = "Corner Pipe"		, Tooltip = ""),
//
//	JointMiddle = 4 UMETA(DisplayName = "Straight Joint"	, Tooltip = ""),
//	JointCorner = 5 UMETA(DisplayName = "Corner Joint"		, Tooltip = "")
//	//Unkown = 3 UMETA(DisplayName = "Custom PCG Graph", Tooltip = "Supply a custom PCG Graph to spawn the clutter for each shelf.")
//};


USTRUCT(BlueprintType)
struct PROCEDURALPIPES_API FPipePartConfig
{
	GENERATED_BODY();

	FPipePartConfig() = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart")
	TSoftObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart", meta = (AllowPreserveRatio, ClampMin = "0.01", Tooltip="This will be multiplied by the shared pipe scale"))
	FVector RelativeScale = FVector(1.0,1.0,1.0);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart", meta = (InlineEditConditionToggle))
	bool bUsePartOverrideMaterial = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart", meta = (EditCondition = "bUsePartOverrideMaterial"))
	TSoftObjectPtr<UMaterialInterface> PartOverrideMaterial;
	


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart")
	//FRotator PartRotation;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart|OverrideGraphs", meta = (InlineEditConditionToggle,
		Tooltip = "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning."))
	bool bEnableSpawnOverride = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart|OverrideGraphs", meta = (EditCondition = "bEnableSpawnOverride",
		Tooltip = "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning."))
	TScriptInterface<UPCGGraphInterface> SpawnOverride;


};

//USTRUCT(BlueprintType)
//struct PROCEDURAL_PIPES_API FPipePartGrammarModule
//{
//	GENERATED_BODY();
//
//	FPipePartGrammarModule() = default;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart", meta = (Tooltip = "Non used by default, useful for implementing pcg grammar overrides.  See PreSpawn override example"))
//	FString PartSymbol;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PipePart")
//	bool Scalable = true;
//
//
//};



UCLASS(Abstract, BlueprintType)
class PROCEDURALPIPES_API AProceduralPipeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralPipeActor();

	


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes",meta = (ClampMin = "0.01",Tooltip = "Uniform scale applied to all spawned pipe parts. Affects mesh size, joint spacing, and corner dimensions."))
	float PipeScale = 1.0;


	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (Tooltip = "Material override applied to all pipe parts that do not explicitly assign their own override material."))
	TSoftObjectPtr<UMaterialInterface> DefaultOverrideMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes",meta = (DisplayName = "Pipe-Straight",Tooltip ="Default straight pipe mesh. Mesh should face the +X axis. Mesh length and RelativeScale.X determine how many middle joints are spawned (if enabled). Can be overridden in the Pre-Spawn Override Graph. "))
	FPipePartConfig StraightPipe;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (DisplayName="Pipe-Corner-90", FormerlySerializedAs = "CornerStraightPipe", Tooltip = "90-degree corner pipe mesh. Used for sharp bends when 45-degree corner pipes are disabled or when the bend angle exceeds the 45-degree cutoff."))
	FPipePartConfig CornerPipe;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (InlineEditConditionToggle))
	bool Spawn45DegreeCornerPipes = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (DisplayName = "Pipe-Corner-45", EditCondition = "Spawn45DegreeCornerPipes", Tooltip="Optional 45-degree corner pipe mesh. Angles closer to 45° will use this mesh; sharper bends will fall back to the 90-degree corner."))
	FPipePartConfig CornerPipe45Degree;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (InlineEditConditionToggle))
	bool SpawnCornerJoints = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (DisplayName = "Joint-Corner", EditCondition = "SpawnCornerJoints", Tooltip="Joint mesh spawned at corner attachment points. Attachment points must be defined as sockets on the corner pipe mesh."))
	FPipePartConfig PipeJointCorner;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (InlineEditConditionToggle))
	bool SpawnMiddleJoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (DisplayName = "Joint-Middle", EditCondition = "SpawnMiddleJoints", Tooltip="Joint mesh spawned between straight pipe segments. Spacing is determined by the straight pipe mesh length and x scale"))
	FPipePartConfig PipeJointMiddle;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (InlineEditConditionToggle))
	bool SpawnEndJoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", meta = (DisplayName = "Joint-End", EditCondition = "SpawnEndJoints", Tooltip="Joint mesh spawned at the start and end of the spline. Only used for open splines; ignored for closed loops."))
	FPipePartConfig PipeJointEnd;



	


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", AdvancedDisplay)
	//TSoftObjectPtr<UStaticMesh> StraightMesh;
	//
	//
	//
	//
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", AdvancedDisplay)
	//TSoftObjectPtr<UStaticMesh> CornerMesh;

	



	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|Joints")
	//bool SpawnJoints = true;

	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|Joints", AdvancedDisplay, meta = (EditCondition = "SpawnJoints"))
	//TSoftObjectPtr<UStaticMesh> JointPipeCorner;


	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|Joints", AdvancedDisplay, meta = (EditCondition = "SpawnJoints"))
	//TSoftObjectPtr<UMaterialInterface> JointOverrideMaterial;





	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|ArrayMode")
	bool EnableArrayMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|ArrayMode", meta=(EditCondition="EnableArrayMode"))
	int Count = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|ArrayMode", meta=(EditCondition="EnableArrayMode"))
	float Spacing = 110.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|ArrayMode", meta=(EditCondition="EnableArrayMode"))
	FVector OffsetDirection = FVector(0.0, 0.0, 1.0);




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|OverrideGraphs", meta = (
		Tooltip="Use this to disable all override graphs for this asset.  Useful for debugging."))
	bool DisableAllOverrideGraphs;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|OverrideGraphs", meta = (InlineEditConditionToggle, EditCondition = "!DisableAllOverrideGraphs",
		Tooltip = "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning."))
	bool bEnableSpawnOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|OverrideGraphs", meta = (EditCondition = "bEnableSpawnOverride", 
		Tooltip = "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning. This may be overriden if individual parts provide their own OverrideSpawnGraph"))
	TScriptInterface<UPCGGraphInterface> SpawnOverride;


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Pipes|OverrideGraphs",meta = (InlineEditConditionToggle, EditCondition = "!DisableAllOverrideGraphs",
		Tooltip = "Enables a Pre-Spawn Override Graph that processes ALL points before any meshes are spawned. This graph has global authority and can filter, merge, or modify points prior to the normal spawn behavior."))
	bool bEnablePreSpawnOverride;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|OverrideGraphs", meta = (EditCondition = "bEnablePreSpawnOverride", 
		Tooltip = "Graph executed before spawning begins. Receives the complete point set and must output the final points used for spawning. Use this to globally filter, merge, or preprocess points before any Spawn Override Graphs are evaluated."))
	TScriptInterface<UPCGGraphInterface> PreSpawnOverride;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|OverrideGraphs", meta = (InlineEditConditionToggle, EditCondition = "!DisableAllOverrideGraphs",
		Tooltip = "Enables a Post-Spawn Override Graph that runs after all meshes have been spawned. This graph is read-only and cannot modify spawn data, but can add secondary details or perform analysis based on the spawned results."))
	bool bEnablePostSpawnOverride;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes|OverrideGraphs", meta = (EditCondition = "bEnablePostSpawnOverride",
		Tooltip = "Graph executed after all spawning is complete. Receives spawned meshes as input and may spawn additional effects, decorations, or data. This graph cannot alter the original spawn results."))
	TScriptInterface<UPCGGraphInterface> PostSpawnOverride;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", AdvancedDisplay, meta = (Tooltip = "If enabled, pipe spline will not spawn it's own points.   Instead the points will be output with the assumption that another pcg world actor will spawn them instead using SpawnPipes.  NOTE: if no actor exists, the pipe won't be spawned"))
	bool IsBatched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", AdvancedDisplay, meta = (Tooltip = "Grammar used to subdivide straight segments.  Default StraightPipe has the symbol \"P\".  Additional pipe meshes can be added below and use symbol by index \"P0\",\"P1\",...\"Pn\" "))
	FString StraightSegmentGrammar = TEXT("[P]*");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pipes", AdvancedDisplay, meta = (Tooltip = "Can be referenced in the grammar string using symbols based on index (i.e. \"P0\",\"P1\",...\"Pn\")"))
	TArray<FPipePartConfig> AdditionalStraightPipes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Core", meta = (Tooltip = "Shared Actor Seed for convienence to be used in PCG Graphs with randomness.  This is only applicable with override graphs, the default behavior is not random", EditCondition = "!DisableAllOverrideGraphs"))
	int Seed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Core", meta = (Tooltip = "Padding to be added to the computed bounding box of the pipe actor"))
	FVector BoundsPadding = FVector(0.0f, 0.0f, 0.0f);


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* BoundingBox;

	protected:
		virtual void ComputeBoundingBox_Implementation(FVector& BoundsMin, FVector& BoundsMax);

	public:
		
		UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Core")
		void ComputeBoundingBox(FVector& BoundsMin, FVector& BoundsMax);


		UFUNCTION(BlueprintCallable, Category = "Core")
		void UpdateBounds();
		
	//OVERRIDE_PCG_GRAPH_PROPERTY(
	//	SpawnOverride,
	//	"Pipes|OverrideGraphs",
	//	"Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning."
	//)
};
