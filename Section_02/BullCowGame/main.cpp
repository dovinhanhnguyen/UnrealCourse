#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

// The entry point for our application
int main() 
{
	bool bPlayAgain = false; //  convention: prefix b for a boolean
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	}
	while (bPlayAgain);
	return 0; // exit the application
}

// Introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5; // const so must assign value immediately; this is only in the scope of this function
	std::cout << "Welcome to Bulls and Cows, a fun word game!" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << std::endl << std::endl;
	return; // void function so returns nothing
}

// Play the game once
void PlayGame()
{
	// loop for the number of turns asking for and printing out guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess is " << Guess << std::endl << std::endl;
	}
}

// Get a guess from the player
std::string GetGuess()
{
	std::string Guess = "";
	std::cout << "Enter your guess: ";
	getline(std::cin, Guess); // problem with cin: cin reads until a space character then it stops
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	getline(std::cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y'); // Response[0] to get the first character of Response; character type so quotes ''
}
