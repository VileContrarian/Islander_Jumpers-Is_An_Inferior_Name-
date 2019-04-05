// Fill out your copyright notice in the Description page of Project Settings.


/* Last changed by Ruan Erasmus on February 27, 2019, 15:26
Added Checkpoint.h*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"

UCLASS()
class TWISTEDMARIO_API ACheckpoint : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACheckpoint();

	// Spawn points for the vehicles
	//UPROPERTY(EditAnywhere, Category = "Checkpoints", BlueprintReadWrite)
	//FVector spawnpoints[4];

	// The index of the checkpoint, so that the game can determine if
	// the player is advancing. Also editable in the editor
	UPROPERTY(EditAnywhere, Category = "Checkpoints")
	int8 index;

	// A boolean to determine if this is a finish line
	UPROPERTY(EditAnywhere, Category = "Checkpoints")
	bool Finishline;

	// allows the box to be edited in the editor, making changing the bounds possible
	UPROPERTY(EditAnywhere, Category = "Checkpoints")

	class UBoxComponent *box;
	// The method that will be called when a player collides with the finish line
	UFUNCTION(Blueprintcallable, Category = "Checkpoints")
	void onCrossLine(AVehicleBase *vehicle);
	UFUNCTION(Blueprintcallable, Category = "Checkpoints")
	uint8 getIndex();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
