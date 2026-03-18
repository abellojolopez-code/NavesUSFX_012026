// Fill out your copyright notice in the Description page of Project Settings.


#include "Submarino.h"

ASubmarino::ASubmarino()
{
    PrimaryActorTick.bCanEverTick = true;
    ProfundidadMaxima = -500.0f; 
}

void ASubmarino::BeginPlay()
{
    Super::BeginPlay();
}

void ASubmarino::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector Posicion = GetActorLocation();
    Posicion += FVector(0, VelocidadNado * DeltaTime, 0);
    Posicion.Z = ProfundidadMaxima;
    SetActorLocation(Posicion);
}