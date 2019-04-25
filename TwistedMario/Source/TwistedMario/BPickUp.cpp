// Fill out your copyright notice in the Description page of Project Settings.

#include "BPickUp.h"
#include "UEmptyItem.h"

// Sets default values
ABPickUp::ABPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// called when the player runs over the item
void ABPickUp::onPickup(class AVehicleBase *vehicle)
{
	switch (rand() % numitems) {
	case 0:
		// attach a new ItemActor (like AEmptyItem) to the player as a component
		item = vehicle->CreateDefaultSubobject<UEmptyItem>(TEXT("none"));
		item->RegisterComponent();
		break;
	default:
		break;
	}
}


// Called when the game starts or when spawned
void ABPickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

