// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "GameFramework/Actor.h"
#include "Inventory.generated.h"

UCLASS()
class TWISTEDMARIO_API AInventory : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AInventory();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* root;

private:

	UPROPERTY(EditAnywhere, Category = "Inventory Defaults")
		TSubclassOf<AItem> inventorySlot; // Holds an item in the inventory slot.

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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
		TSubclassOf<AItem> GetItem() { return inventorySlot; }

};