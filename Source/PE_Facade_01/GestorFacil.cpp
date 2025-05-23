// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorFacil.h"

AGestorFacil::AGestorFacil()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EasyMeshFinder(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if (EasyMeshFinder.Succeeded())
	{
		EasyMesh = EasyMeshFinder.Object;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo cargar el mesh para dificultad fácil"));
	}
}

void AGestorFacil::BeginPlay()
{
	Super::BeginPlay();

	FVector SpawnLocation = FVector(-500.0f, -20.0f, 290.0f);
	FRotator SpawnRotation = FRotator::ZeroRotator;
	AGoombaEnemigo* Goomba = GetWorld()->SpawnActor<AGoombaEnemigo>(AGoombaEnemigo::StaticClass(), SpawnLocation, SpawnRotation);
	if (Goomba)
	{
		Goomba->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
		if (EasyMesh)
		{
			Goomba->SetMesh(EasyMesh);
		}
	}
}

// Called every frame
void AGestorFacil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorFacil::EnemyLife()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemyLife(EnemyLifeEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
	}
}

void AGestorFacil::EnemySpeed()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemySpeed(EnemySpeedEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La velocidad del enemigo es: %f"), EnemySpeedEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la velocidad del enemigo"));
	}
}

void AGestorFacil::EnemyDamage()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemyDamage(EnemyDamageEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El da�o del enemigo es: %f"), EnemyDamageEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el da�o del enemigo"));
	}
}

void AGestorFacil::EnemyOleadas()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemyOleadas(EnemyOleadasEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La oleada del enemigo es: %d"), EnemyOleadasEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la oleada del enemigo"));
	}
}

void AGestorFacil::Bonuses()
{
	if (GEngine)
	{
		//Bonus -> SetBonus(BonusesEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El bonus del enemigo es: %d"), BonusesEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el bonus del enemigo"));
	}
}

