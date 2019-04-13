// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TWISTEDMARIO_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

private:

	UPROPERTY(EditAnywhere, Category = "Inventory Defaults")
		TSubclassOf<AItem> inventorySlot; // Holds an item in the inventory slot.

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Add an Item to the inventory slot, doesn't override if the slot is already taken.
	UFUNCTION(BlueprintCallable)
		void AddToInventory(TSubclassOf<AItem> item_);
	// Remove an Item from the inventory slot.
	UFUNCTION(BlueprintCallable)
		void RemoveFromInventory();
	// Uses the item in the inventory.
	UFUNCTION(BlueprintCallable)
		void UseItem(APawn* User);

	// GETTERS

	UFUNCTION(BlueprintCallable)
		inline AItem* GetItem() { return Cast<AItem>(inventorySlot); }

		
};
