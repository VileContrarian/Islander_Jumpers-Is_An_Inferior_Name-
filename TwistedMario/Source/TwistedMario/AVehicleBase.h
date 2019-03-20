// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AVehicleBase.generated.h"

/*
 *
 */
UCLASS()
class TWISTEDMARIO_API AVehicleBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVehicleBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	///Game Codes////////////////////////////////////////////////// 

public:
	///Components

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* CarMesh;

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

	//Set maximum speed limit [Default is 300.0f]
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float speedMax;

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

	//Determines the friction when drifting
	UPROPERTY(EditAnywhere, Category = "Attributes", BlueprintReadWrite)
		float driftGrip;

	// Keep track of laps completed
	UPROPERTY(EditAnywhere)
		uint8 lapCounter;

	//Ground check derive from thrusters
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isGrounded;

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
		void GetCarMesh(class UStaticMeshComponent* CarMesh_);

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
	UFUNCTION(BlueprintCallable)
		float GetSpeed();

	UFUNCTION(BlueprintCallable)
		void FallingState();


	/// Getters and Setters

	void SetPosition(FVector vec_);
	FVector GetPosition();

	void SetRotation(FVector vec_);
	FVector GetRotation();

	//Heal and damage 
	inline void SetHealth(int value_) {
		if (health + value_ <= 0) health = 0;
		if (health + value_ >= healthMax) health = healthMax;
		else health += value_;
	}
	inline int GetHealth() const { return health; }

	inline void SetMaxHealth(int value_) { if (value_ > 0) healthMax = value_; }
	inline int GetMaxHealth() const { return healthMax; }

	inline void SetMass(float value_) { if (value_ > 0.0f) mass = value_; }
	inline float GetMass();

	inline void SetAttack(int value_) { attack = value_; }
	inline int GetAttack() const { return attack; }

	inline void SetDefense(int value_) { defense = value_; }
	inline int GetDefense() const { return defense; }

	inline void SetTraction(float value_) { traction = value_; }
	inline float GetTraction() const { return traction; }

	inline void SetHandling(float value_) { handling = value_; }
	inline float GetHandling() const { return handling; }

	inline void SetAccelerationRate(float value_) { if (value_ > 0.0f) accelerationRate = value_; }
	inline float GetAccelerationRate() { return accelerationRate; }

	inline void SetAccelerationDecay(float value_) { if (value_ > 0.0f) accelerationDecay = value_; }
	inline float GetAccelerationDecay() { return accelerationDecay; }


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
	bool jumpState;
	float initialTraction;

	bool isMovingForward();
	FVector FindLeftVector();
	FVector FindRightVector();
	float FindAngle(FVector vecA, FVector vecB);

	/// Debug Tools

	// Print out log (similar to Unity's Debug.Log)
	// To find the logs go to (UE): Window >> Developer Tools >> Output Log
	inline void LogString(FString string) {
		//Note: %s = string, %d = int, and %f = float
		UE_LOG(LogWindows, Warning, TEXT("%s"), *string)
	}

	inline void LogFloat(float value) {
		UE_LOG(LogWindows, Warning, TEXT("%f"), value)
	}

	inline void LogVector(FVector value) {
		UE_LOG(LogWindows, Warning, TEXT("%f,: %f,: %f"), value.X, value.Y, value.Z)
	}

	inline void LogRotator(FRotator value) {
		UE_LOG(LogWindows, Warning, TEXT("%f,: %f,: %f"), value.Roll, value.Pitch, value.Yaw)
	}

	inline void LogMsg(FString string, float value) {
		UE_LOG(LogWindows, Warning, TEXT("%s: %f"), *string, value)
	}

protected:


};//END OF CLASS
