// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "GameFramework/Actor.h"
#include "UEmptyItem.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TWISTEDMARIO_API UEmptyItem : public UActorComponent, public AItemBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UEmptyItem();
	// useItem inherited from AItemBase so that you only need to call AItemBase.useItem instead of
	// needing to know the exact Item class that the player has
	void useItem(AVehicleBase vehicle, FVector direction) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
