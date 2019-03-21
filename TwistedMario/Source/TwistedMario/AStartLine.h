// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AStartLine.generated.h"

UCLASS()
class TWISTEDMARIO_API AStartLine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStartLine();
	// The variable for the bound of the Start Line
	UPARAM()
	FVector2D bounds;
	// The array of vectors holding the players' start positions.
	// 4 players for now.
	UPARAM()
	FVector StartPosition[4];
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Last edited by ruan Erasmus on February 13, 2019