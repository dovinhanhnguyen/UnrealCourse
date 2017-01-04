#include <iostream>
#include <string>

using namespace std;

int main() 
{
	/*Introduce the game*/
	constexpr int WORD_LENGTH = 5; // const so must assign value immediately
	cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;

	/*Get a guess from the player*/
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess); // problem with cin: cin reads until a space character then it stops

	/*Return the guess back to them*/
	cout << "Your guess is " << Guess << endl;

	return 0;
}