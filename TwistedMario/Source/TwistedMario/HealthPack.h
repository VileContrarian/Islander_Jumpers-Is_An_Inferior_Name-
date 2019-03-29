// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "HealthPack.generated.h"

/**
 * 
 */
UCLASS()
class TWISTEDMARIO_API AHealthPack : public AItem
{
	GENERATED_BODY()

public:

	void UseItem(APawn *User) override;

	UPROPERTY(BlueprintReadWrite, Category = "Health")
	float healthToAdd = 10;
};
