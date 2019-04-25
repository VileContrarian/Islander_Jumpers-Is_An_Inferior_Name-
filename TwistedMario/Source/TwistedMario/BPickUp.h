// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AVehicleBase.h"
#include "GameFramework/Actor.h"
#include "BPickUp.generated.h"

UCLASS()
class TWISTEDMARIO_API ABPickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABPickUp();
	void onPickup(AVehicleBase *vehicle);
	class UEmptyItem *item;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	int numitems = 1;
};
