// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

<<<<<<< HEAD
	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play~~~"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));
>>>>>>> c906c9e ([Other] MyActor 클래스 리팩토링)
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

<<<<<<< HEAD
	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking~~~"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));
>>>>>>> c906c9e ([Other] MyActor 클래스 리팩토링)
}

