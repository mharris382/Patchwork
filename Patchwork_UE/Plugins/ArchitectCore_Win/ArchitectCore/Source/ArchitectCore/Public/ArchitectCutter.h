// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArchitectCutter.generated.h"

UENUM(BlueprintType)
enum class EArchitectCutterMode : uint8
{
	
	Modify UMETA(DisplayName = "Modify", Tooltip = "Modifies overlapping points and assigns them back to the building grid as Door or Window slots."),

	Erase UMETA(DisplayName = "Erase", Tooltip = "Deletes overlapping points from the building grid, preventing any structure from spawning in those slots."),

	Additive UMETA(DisplayName = "Additive", Tooltip = "Allows additional elements, like vines or decals, to be added based on overlapping points without altering the existing structure."),

	///** Query Mode (Optional): Checks overlapping points without modifying or adding to them, useful for analysis or diagnostics. */
	//Query UMETA(DisplayName = "Query", Tooltip = "Queries overlapping points for inspection or diagnostic purposes without modification or spawning additional elements.")
};


UCLASS()
class ARCHITECTCORE_API AArchitectCutter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArchitectCutter();



};
