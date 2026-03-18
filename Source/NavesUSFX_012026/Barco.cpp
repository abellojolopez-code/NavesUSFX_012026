// Fill out your copyright notice in the Description page of Project Settings.


#include "Barco.h"

ABarco::ABarco()
{
    PrimaryActorTick.bCanEverTick = true;
    NumeroTripulantes = 20; 
}

void ABarco::BeginPlay()
{
    Super::BeginPlay();
}

void ABarco::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector NuevaPosicion = GetActorLocation() + FVector(VelocidadNado * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}