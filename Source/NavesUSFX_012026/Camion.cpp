// Fill out your copyright notice in the Description page of Project Settings.


#include "Camion.h"

ACamion::ACamion()
{
    PrimaryActorTick.bCanEverTick = true;
    CapacidadCarga = 100; 
}

void ACamion::BeginPlay()
{
    Super::BeginPlay();
}

void ACamion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector NuevaPosicion = GetActorLocation() + FVector((VelocidadMovimiento * 0.7f) * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}