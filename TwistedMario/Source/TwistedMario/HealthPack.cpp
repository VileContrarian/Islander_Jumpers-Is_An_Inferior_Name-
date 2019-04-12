// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthPack.h"
#include "AVehicleBase.h"

void AHealthPack::UseItem(APawn* User)
{
	////cast the User pawn to see if it is a vehicle
	//AVehicleBase *car = Cast<AVehicleBase>(User);
	////if it is a vehicle apply changes
	//if (car)
	//{
	//	//calls healing method on the car
	//	car->DoHeal(healthToAdd);
	//}

	Cast<AVehicleBase>(User)->DoHeal(healthToAdd);
}