// Fill out your copyright notice in the Description page of Project Settings.

/* Last changed by Ruan Erasmus on February 27, 2019, 15:26
Added some basic (untested) funtionality to Checkpoints*/

#include "Checkpoint.h"
#include "AVehicleBase.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
// Sets default values
ACheckpoint::ACheckpoint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add a box trigger component. To be used later to trigger events
	box = CreateDefaultSubobject<UBoxComponent>(TEXT("box"));
	box->RegisterComponent();
}

void ACheckpoint::onCrossLine(AVehicleBase *vehicle)
{
	// check if the player has crossed the checkpoint (in the correct order)
	if (vehicle->location == (index - 1)) {
		vehicle->location = index; // set the current location to the chackpoint's index

	// check if the player has crossed the finish line
	}
	else if (vehicle->location == (index - 1) && Finishline) {

		vehicle->lapCounter++; // increment the lap
		vehicle->location = 0; // reset the location (index)

		// check if the player has finished the race. 4 lap placeholder.
		// (4 laps assuming the first lap is called lap 1 instead of lap 0)
		if (vehicle->lapCounter == 4) {
			// finish race
		}
	}
}

uint8 ACheckpoint::getIndex()
{
	return index;
}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
