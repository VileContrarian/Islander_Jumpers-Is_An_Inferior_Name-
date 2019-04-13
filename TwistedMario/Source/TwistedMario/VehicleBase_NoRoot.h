// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VehicleBase_NoRoot.generated.h"

UCLASS()
class TWISTEDMARIO_API AVehicleBase_NoRoot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVehicleBase_NoRoot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	///Game Codes////////////////////////////////////////////////// 

public:
	///Components

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMeshComponent* CarMesh;

	///Variables
	///Vehicle Attributes

	//The heavier the vehicle the slower it moves and less jumping height
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float mass;

	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		int healthMax;

	//Not used yet
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		int attack;

	//Not used yet
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		int defense;

	//Drive linear motion
	//100 kg mass would probably require 10000 force to move
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float force;

	//Drive angular motion
	//Need about 200 torque to rotate easily
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float torque;

	//Set maximum speed limit [Default is 3000.0f]
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float speedMax;

	//Takes the default speed value in so any changes to the MaxSpeed can be rectified .
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float speedMaxOriginal;

	//Value should be between 0 and 1, where 1 means that it gains its max speed in almost one second
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float accelerationRate;

	//Controls how soon the car stops when no movement input is active
	//High value = quicker stops [Default 50.0f (max: 100.0f)]
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float accelerationDecay;

	//The lower the traction the more 'slippery' the movement becomes
	//Shouldn't be less than 1.0f [Default 50.0f (max: 1000.0f)]
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float traction;

	//The lower the handling the less grip the vehicle has when turning
	//Shouldn't be less than 1.0f [Default 50.0f (max: 50.0f)]
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float handling;

	//The higher the turning coefficient is past 1.0, the sharper turns will be for the vehicle
	// The opposite is true when you go under 1.0[Default 1.34f (max: 2.0f)(min: 0.9f)]
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float turncoefficient;

	//Takes the default turncoefficient value in so any changes to the MaxSpeed can be rectified .
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float turncOriginal;

	//Affects drifting
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float driftGrip;

	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float climbSpeed;

	// Keep track of laps completed
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 lapCounter;

	//Ground check derive from thrusters
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isGrounded;

	//Current checkpoint
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		uint8 location;

	///Methods

	//Moves vehicle forward/backward
	UFUNCTION(BlueprintCallable)
		void Accelerate(float value_);

	//Turn vehicle
	UFUNCTION(BlueprintCallable)
		void Turn(float value_);

	//Assign the mesh in the Blueprint by calling this function
	//Without assigning a Car/Body mesh it can't use the physics from this C++
	UFUNCTION(BlueprintCallable)
		void GetCarMesh(class USkeletalMeshComponent* CarMesh_);

	UFUNCTION(BlueprintCallable)
		void HandBrake();

	UFUNCTION(BlueprintCallable)
		void ReleaseHandBrake();

	UFUNCTION(BlueprintCallable)
		void Jump();

	UFUNCTION(BlueprintCallable)
		void UseItem();

	UFUNCTION(BlueprintCallable)
		uint8 GetItemHeld();

	UFUNCTION(BlueprintCallable)
		void HandleEvents();

	//This method is used to get Scalar value of velocity (e.g. for Speedometer)
	UFUNCTION(BlueprintPure)
		float GetSpeed();

	UFUNCTION(BlueprintCallable)
		void respawn(class ACheckpoint *checkpoint);


	/// Getters and Setters
	UFUNCTION(BlueprintCallable)
		void SetPosition(FVector vec_);

	UFUNCTION(BlueprintCallable)
		FVector GetPosition();

	UFUNCTION(BlueprintCallable)
		void SetRotation(FVector vec_);

	UFUNCTION(BlueprintCallable)
		FVector GetRotation();

	//Heal and damage 
	UFUNCTION(BlueprintCallable)
		void DoDamage(int value_);

	UFUNCTION(BlueprintCallable)
		void DoHeal(int value_);

	UFUNCTION(BlueprintPure)
		int GetHealth();

	UFUNCTION(BlueprintCallable)
		void SetMaxHealth(int value_);

	UFUNCTION(BlueprintPure)
		int GetMaxHealth();

	UFUNCTION(BlueprintCallable)
		void SetMass(float value_);

	UFUNCTION(BlueprintPure)
		float GetMass();

	UFUNCTION(BlueprintCallable)
		void SetAttack(int value_);

	UFUNCTION(BlueprintPure)
		int GetAttack();

	UFUNCTION(BlueprintCallable)
		void SetDefense(int value_);

	UFUNCTION(BlueprintPure)
		int GetDefense();

	UFUNCTION(BlueprintCallable)
		void SetTraction(float value_);

	UFUNCTION(BlueprintPure)
		float GetTraction();

	UFUNCTION(BlueprintCallable)
		void SetHandling(float value_);

	UFUNCTION(BlueprintPure)
		float GetHandling();

	UFUNCTION(BlueprintCallable)
		void SetAccelerationRate(float value_);

	UFUNCTION(BlueprintPure)
		float GetAccelerationRate();

	UFUNCTION(BlueprintCallable)
		void SetAccelerationDecay(float value_);

	UFUNCTION(BlueprintPure)
		float GetAccelerationDecay();

	UFUNCTION(BlueprintCallable)
		void SetTurnCoefficient(float value_);

	UFUNCTION(BlueprintPure)
		float GetTurnCoefficient();

	UFUNCTION(BlueprintCallable)
		void SetSpeedMax(float value_);

	UFUNCTION(BlueprintCallable)
		void Teleport(FVector outDirection);

private:
	///Variables

	//Current health 
	int health;

	//Simple check to calculate gripForce
	float turningDir;

	//Counters the drifting/slipping effect when turning at high speed
	float gripForce;

	//Affects residual movement when input = 0
	float timeElapsedLin;

	//Affects residual rotation when input = 0
	float timeElapsedRot;

	//Affects acceleration rate
	float timeElapsedAcc;

	//Affects falling speed
	float timeElapsedAir;

	//Provides the upper value range of Accel Decay
	float accelDecayRange;

	//Provides the upper value range of traction
	float tractionRange;

	//Provides the upper value range of handling
	float handlingRange;

	FVector position;
	FVector rotation;

	FVector velLinear;
	FVector accelLinear;

	FVector velAngular;
	FVector accelAngular;

	FVector sideForce;
	FVector jumpForce;

	///Support functionality
	bool isForwardPressed;
	bool isTurning;
	bool isJumping;
	float initialTraction;
	bool isMovingForward();
	float FindAngle(FVector vecA, FVector vecB);

};
