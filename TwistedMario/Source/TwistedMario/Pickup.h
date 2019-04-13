// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Item.h"
#include "Pickup.generated.h"

UCLASS()
class TWISTEDMARIO_API APickup : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* root;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USphereComponent* collider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<AItem>> items; //Contains all the items that exsist in the game. Anything that is part of this list can be obtained by players.
		//TArray<UClass*> items;
		//AItem* items[];

	//UPROPERTY()
		//UDamageType* dmgType = NewObject<UDamageType>(DamageTypeClass);
		//TArray<AItem*> item = NewObject<AItem>();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when something collides with sphere collider.
	// void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	// Returns a random item from the list of available items
	UFUNCTION(BlueprintCallable)
		TSubclassOf<AItem> GetRandomItem();

};
