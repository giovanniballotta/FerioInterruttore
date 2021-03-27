// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElementoCircuito.generated.h"

USTRUCT()
struct FStatoComponente
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	bool bAttivo;
	UPROPERTY(EditAnywhere)
	float CapacitaCorrente;
	UPROPERTY(EditAnywhere)
	float ConsumoCorrente;
};

UCLASS()
class FERIOINTERRUTTORE_API AElementoCircuito : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElementoCircuito();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	FStatoComponente Stato;
	UPROPERTY(EditAnywhere)
	TArray<AElementoCircuito*> ElementiCollegati;
	void Propaga();
	void RiceviStato(FStatoComponente& sc);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
