// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "string.h"
#include "AVehicleBase.h"
using namespace std;
/**
 * 
 */
class TWISTEDMARIO_API AItemBase 
{
public:
	AItemBase();
	// identifier for logic
	uint8 ID;
	static enum FitemType {
		WEAPON = 0,
		UTILITY = 1,
		DEFENSE = 2,
		NONE = 3
	};
	// the method for any action the item causes, taking the vehicle that used it and a direction as input
	virtual void useItem(AVehicleBase vehicle, FVector direction);
	// getters for private variables
	FString getName();
	int getType();
	virtual ~AItemBase();

protected:
	// additional identifier in case you can't use ID for some reason
	FString name;
	// item type because Architecture told me to
	FitemType type;
};
