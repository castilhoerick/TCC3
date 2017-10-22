// Fill out your copyright notice in the Description page of Project Settings.

#include "Buraco.h"
#include "Components/BoxComponent.h"
#include "GameplayStatics.generated.h"

#include "TCC3Character.h"


// Sets default values
ABuraco::ABuraco()
{

	BuracoRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BRoot"));
	RootComponent = BuracoRoot;

	BuracoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BMesh"));
	BuracoMesh->AttachToComponent(BuracoRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	BuracoBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BBox"));
	BuracoBox->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	BuracoBox->bGenerateOverlapEvents = true;
	BuracoBox->OnComponentBeginOverlap.AddDynamic(this, &ABuraco::OnPlayerEnterBuracoBox);
	BuracoBox->AttachToComponent(BuracoRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

}

// Called when the game starts or when spawned
void ABuraco::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABuraco::OnPlayerEnterBuracoBox(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	Destroy();
		
}


