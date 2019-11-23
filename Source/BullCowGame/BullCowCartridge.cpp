// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug Line
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    if(bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else
    {
        if (Input == HiddenWord)
        {
            PrintLine(TEXT("You have Won!"));
            EndGame();
        }
        else
        {
            if (Input.Len() != HiddenWord.Len())
            {
                PrintLine(TEXT("The Hidden Word is %i characters long.\nYou have lost!"), HiddenWord.Len());
                EndGame();
            }
        }
    }
    // Check If Isogram
    // Promp To Guess Again
    // Check Right Number of Characters
    // Promp To Guess Again

    // Remove Life

    // Check If Lives > 0
    // If True, PlayAgain
    // If False, Show GameOver and HiddenWord?
    // Promp To Play Again, Press Enter To Play Again?
    // Check User Input
    // PlayAgain Or Quit
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cakes");
    Lives = 4;
    bGameOver = false;

    //Welcoming The Player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len());
    PrintLine(TEXT("Type in your guess and press enter."));
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again."));
}
