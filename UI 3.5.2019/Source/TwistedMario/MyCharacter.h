// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class TWISTEDMARIO_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI") //brings the players health into the blueprint
		float playerHealthAmount = 50.0f; //Player health, set to 50 to show health bar change
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "UI")//brings the players health percentage into the blueprint
		float playerHealthPercent; //player health percentage
	float maxHP = 100.0f; //players max HP
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "UI")
		float UltProgress = .25f;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
