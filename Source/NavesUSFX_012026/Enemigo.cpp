// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigo::AEnemigo()
{
    PrimaryActorTick.bCanEverTick = true;

    EnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemigoMesh"));
    RootComponent = EnemigoMesh;

    // Mesh básico
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    if (MeshAsset.Succeeded())
    {
        EnemigoMesh->SetStaticMesh(MeshAsset.Object);
    }

    Velocidad = 100.0f; // velocidad inicial
}

void AEnemigo::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento simple hacia adelante en eje X
    FVector NuevaPosicion = GetActorLocation();
    NuevaPosicion.X += Velocidad * DeltaTime;
    SetActorLocation(NuevaPosicion);
}