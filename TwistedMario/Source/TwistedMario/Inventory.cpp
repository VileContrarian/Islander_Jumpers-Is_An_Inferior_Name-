// Fill out your copyright notice in the Description page of Project Settings.

#include "inventory.h"

// Sets default values
AInventory::AInventory()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(root);

	inventorySlot = nullptr; // Make sure the inventory slot is empty.

}

// Called when the game starts or when spawned
void AInventory::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AInventory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInventory::AddToInventory(TSubclassOf<AItem> item_) {

	// Check to see if something is already in the inventory slot.
	if (!inventorySlot)
		inventorySlot = item_;

}

void AInventory::RemoveFromInventory() {
	// Deletes the item in inventory and sets it to nullptr.
	/// I'm not sure if this is needed due to the fact that Unreal has it's own memory management, leaving it here until I can confrim.
}

void AInventory::UseItem(APawn* User) {

	/// Note:
	/// I designed this so people wouldn't need to remember to burn a charge on an item.
	/// It's also designed so that even if you forget to add 1 charge to an item, it will still use that item.
	/// The reason I did this was just incase people, or myself forgot to take all the steps in handling items.

	//inventorySlot = inventorySlot->CreateDefaultSubobject<AItem>;
	AItem* slot = Cast<AItem>(inventorySlot);

	slot->UseItem(User);
	slot->BurnCharge();

	if (slot->CheckRemainingCharges() <= 0) {
		RemoveFromInventory();
	}

}