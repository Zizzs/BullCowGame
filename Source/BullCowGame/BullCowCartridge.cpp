// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    //Welcoming The Player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!")); // Magic Number Remove!
    PrintLine(TEXT("Press enter to continue..."));

    //Setting Up Game
    HiddenWord = TEXT("cake"); // Set the HiddenWord

    // Set Lives

    // Promp Player For Guess
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    // CHecking PlayerGuess

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        PrintLine(TEXT("You have Lost!"));
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
