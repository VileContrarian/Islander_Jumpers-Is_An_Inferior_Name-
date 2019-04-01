// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Item.generated.h"

UCLASS()
class TWISTEDMARIO_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* root;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USphereComponent* collider;

private:

protected:

	UPROPERTY(EditAnywhere, Category = "Item Properties")
		int charges;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Every item has this method implemented inside it.
	virtual void UseItem();



	// Check & return the amount of charges left on the item.
	inline int CheckRemainingCharges() { return charges; }
	// Remove a charge from the items total charges.
	inline void BurnCharge() { --charges; }
};
