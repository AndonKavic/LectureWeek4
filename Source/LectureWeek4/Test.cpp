// Fill out your copyright notice in the Description page of Project Settings.


#include "Test.h"

// Sets default values for this component's properties
UTest::UTest()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTest::BeginPlay()
{
	Super::BeginPlay();

    //DEFINE_LOG_CATEGORY(PlayerError);
    //test
    //Test2

    class players
    {
    public:
        int32 score;
        int32 health;
    };
    try
    {
        players player1;
        player1.score = 10;
        player1.health = 10;
        players player2;
        player2.score = 15;
        player2.health = 10;


        if (player1.score > player2.score)
        {
            throw 100;
        }
        else if (player1.score < player2.score)
        {
            throw 200;
        }
        else
        {
            if (player1.health > player2.health)
            {
                throw 101;
            }
            else if (player1.health < player2.health)
            {
                throw 201;
            }
            else
            {
                throw 0;
            }
        }
    }
    catch (int32 e)
    {
        if (e == 100)
        {
            UE_LOG(LogTemp, Log, TEXT("Player 1 won"));
        }
        else if (e == 101)
        {
            UE_LOG(LogTemp, Log, TEXT("Player 1 won by having the most health"));
        }
        else if (e == 200)
        {
            UE_LOG(LogTemp, Log, TEXT("Player 2 won"));
        }
        else if (e == 201)
        {
            UE_LOG(LogTemp, Log, TEXT("Player 2 won by having the most health"));
        }
        else if (e == 0)
        {
            UE_LOG(LogTemp, Log, TEXT("It's a draw"));
        }
    }
	// ...
	
}


// Called every frame
void UTest::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

