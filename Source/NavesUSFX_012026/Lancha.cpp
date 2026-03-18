// Fill out your copyright notice in the Description page of Project Settings.


#include "Lancha.h"

ALancha::ALancha()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadMaxima = 600.0f; 
}

void ALancha::BeginPlay()
{
    Super::BeginPlay();
}

void ALancha::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector NuevaPosicion = GetActorLocation() + FVector(VelocidadMaxima * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}