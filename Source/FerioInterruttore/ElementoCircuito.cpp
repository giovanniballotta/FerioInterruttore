// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementoCircuito.h"

// Sets default values
AElementoCircuito::AElementoCircuito()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElementoCircuito::BeginPlay()
{
	Super::BeginPlay();
	
}

void AElementoCircuito::Propaga()
{
	if (ElementiCollegati.Num() > 0)
	{
		for (AElementoCircuito* ec : ElementiCollegati)
		{
			ec->RiceviStato(Stato);
		}
	}
}

void AElementoCircuito::RiceviStato(FStatoComponente& sc)
{
	
}

// Called every frame
void AElementoCircuito::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

