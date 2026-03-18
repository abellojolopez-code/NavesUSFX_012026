// Fill out your copyright notice in the Description page of Project Settings.


#include "Tanque.h"

ATanque::ATanque()
{
    PrimaryActorTick.bCanEverTick = true;
    Blindaje = 200.0f; 
}

void ATanque::BeginPlay()
{
    Super::BeginPlay();
}

void ATanque::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector NuevaPosicion = GetActorLocation() + FVector((VelocidadMovimiento * 0.5f) * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}