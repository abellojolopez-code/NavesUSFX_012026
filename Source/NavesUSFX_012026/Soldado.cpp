// Fill out your copyright notice in the Description page of Project Settings.


#include "Soldado.h"

ASoldado::ASoldado()
{
    PrimaryActorTick.bCanEverTick = true;
    Municion = 30; 
}

void ASoldado::BeginPlay()
{
    Super::BeginPlay();
}

void ASoldado::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

   
    FVector NuevaPosicion = GetActorLocation() + FVector(VelocidadMovimiento * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}