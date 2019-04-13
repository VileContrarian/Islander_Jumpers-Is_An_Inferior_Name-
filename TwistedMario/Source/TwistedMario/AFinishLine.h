// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AFinishLine.generated.h"

UCLASS()
class TWISTEDMARIO_API AFinishLine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFinishLine();
	// The variable for the bound of the Finish Line
	UPARAM()
	FVector2D bounds;
	// The method that will be called when a player collides with the finish line
	void onCrossLine(FTransform vPos);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
// Last edited by ruan Erasmus on February 13, 2019