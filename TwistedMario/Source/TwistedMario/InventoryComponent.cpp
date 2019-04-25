// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UInventoryComponent::AddToInventory(TSubclassOf<AItem> item_) {

	// Check to see if something is already in the inventory slot.
	if (!inventorySlot)
		inventorySlot = item_;

}

void UInventoryComponent::RemoveFromInventory() {
	// Deletes the item in inventory and sets it to nullptr.
	/// I'm not sure if this is needed due to the fact that Unreal has it's own memory management, leaving it here until I can confrim.
	delete inventorySlot;
	inventorySlot = nullptr;

}

void UInventoryComponent::UseItem(APawn* User) {

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
