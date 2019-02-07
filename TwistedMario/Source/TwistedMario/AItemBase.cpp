// Fill out your copyright notice in the Description page of Project Settings.

#include "AItemBase.h"

AItemBase::AItemBase()
{
}

void AItemBase::useItem(AVehicleBase vehicle, FVector direction)
{
}

FString AItemBase::getName()
{
	return name;
}

int AItemBase::getType()
{
	return type;
}


AItemBase::~AItemBase(){
}
