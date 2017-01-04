#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// The entry point for our application
int main() 
{
	PrintIntro();

	GetGuessAndPrintBack();
	GetGuessAndPrintBack();

	return 0;
}

// Introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5; // const so must assign value immediately; this is only in the scope of this function
	cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
	return; // void function so returns nothing
}

// Get a guess from the player
string GetGuessAndPrintBack()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess); // problem with cin: cin reads until a space character then it stops
	cout << "Your guess is " << Guess << endl;
	return Guess;
}