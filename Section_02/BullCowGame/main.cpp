#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
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
	cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl << endl;
	return; // void function so returns nothing
}

// Play the game once
void PlayGame()
{
	// loop for the number of turns asking for and printing out guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++)
	{
		string Guess = GetGuess();
		cout << "Your guess is " << Guess << endl << endl;
	}
}

// Get a guess from the player
string GetGuess()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess); // problem with cin: cin reads until a space character then it stops
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? (y/n) ";
	string Response = "";
	getline(cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y'); // Response[0] to get the first character of Response; character type so quotes ''
}
