// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ShapeComponent.h"
#include "Buraco.generated.h"


UCLASS()
class TCC3_API ABuraco : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuraco();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
		USceneComponent* BuracoRoot;

	UPROPERTY(EditAnywhere, VisibleAnywhere)
		UStaticMeshComponent* BuracoMesh;
	
	UPROPERTY(EditAnywhere)
		UShapeComponent* BuracoBox;
	
	UFUNCTION()
		void OnPlayerEnterBuracoBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
