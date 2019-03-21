// Fill out your copyright notice in the Description page of Project Settings.

#include "UEmptyItem.h"

// Sets default values
UEmptyItem::UEmptyItem() : AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;
	// set identifiers
	name = "Empty";
	ID = 0;
	type = NONE;
}

void UEmptyItem::useItem(AVehicleBase vehicle, FVector direction)
{
	
}

// Called when the game starts or when spawned
void UEmptyItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void UEmptyItem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

