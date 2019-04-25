// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"

// Sets default values
APickup::APickup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//items = new AItem[9];

	root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(root);

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetupAttachment(root);

	collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	collider->SetupAttachment(root);

	// Connects the collider to the OnOverlapBeing method.
	//collider->OnComponentBeginOverlap.AddDynamic(this, &APickUp::OnOverlapBegin);

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void APickUp::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
//
//}

TSubclassOf<AItem> APickup::GetRandomItem() {

	if (items[0] != nullptr)
		return items[0];

	return nullptr;
}

