// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "Components/InputComponent.h"
#include "AVehicleBase.generated.h"

/**
 *
 */
UCLASS()
class TWISTEDMARIO_API AVehicleBase : public AWheeledVehicle
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	//UE has its own garbage collection system, so no ~() destructor
	//This is the constructor
	AVehicleBase();

	//Public Variables
	UPROPERTY(EditAnywhere, Category = "Vehicles")//This will make it editable on the editor (i.e. Unity's inspector)
		int health; //Current health
	UPROPERTY(EditAnywhere, Category = "Vehicles")
		int attack; //Vehicle strength
	uint8 lap; //Keep track of laps completed

	//Public Methods
	virtual void Accelerate();
	virtual void Reverse();
	virtual void Drift();
	virtual void Jump();
	virtual void UseItem();
	virtual void CurrentItem();
	virtual void GetVelocity(FVector vec);
	virtual void Damage(int value);
	virtual void Update();
	virtual void HandleEvents();

	//Adding Transform component
	UPROPERTY()
		USceneComponent* Root;

	//Experimental and Test Codes//Should delete after

	inline void Log(FString string) { //Print out log (similar to Unity Debug.Log)
		int test = 123;

		//Takes arguements = (CategoryName, Verbosity, Format, ...)
		//%s is a place holder for string, %d for int, and %f for float
		UE_LOG(LogClass, Warning, TEXT("Debug Message here: %s : %d"), *string, test)

			//To find the logs go to (UE): Window >> Developer Tools >> Output Log
			//Set filter to "LogClass" to easily find the logs
	}
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override; //Same as Unity's OnStart()

	//Protected variables
	FVector velocity; //Current speed
	FVector velocityMax;
	FVector position;
	FVector rotation;
	float mass;
	float jumpMax;
	float traction;
	float handling;
	int healthMax;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override; //Same as Unity's Update()

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
