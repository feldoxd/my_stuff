#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Settings.h"
#include "Functions.h"
#include <functional>
//this enables/disables dev features that are in development
//or enables cheats lol
bool EXPERIMENTALFEATURES = true;

//Checklist or todo things lol: settings
// some games
// GUI
int numberGuessGame();
//idk
void initiliaze(int& i) {
	i = 1;
}
//select menu
int inigame(){
	if (EXPERIMENTALFEATURES == true) {
		system("cls");
		std::string name;
		std::cout << "Enter nickname:";
		std::cin >> name;
	}
	char chsgm;
	system("cls");
	std::cout << "Select game." << "\n";
	std::cout << "1. Guess a number" << "\n";
	std::cout << "2." << "\n";
	std::cout << "3." << "\n";
	std::cin >> chsgm;
	switch (chsgm)
	{
	case '1':
		numberGuessGame();
		break;
	case '2':
		break;
	case '3':
		break;
	default:
		return 0;
	}
	return 0;
}
//main menu
int main()
{
	char op;
	std::cout << "Version 0.1" << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "My game lol" << "\n";
	std::cout << "1. Game start" << "\n";
	std::cout << "2. Exit" << "\n";
	std::cout << "\n";
	std::cout << "Enter 1 or 2: ";
	std::cin >> op;
	switch (op)
	{

	case '1':
		inigame();
			break;
			
	case '2':
		return 0;
			break;

	default:
		std::cout << "You have entered wrong option" << "\n";
			Pause();
			break;
	}
}
//game01
int numberGuessGame(){
	system("cls");
	int y, x;
	int NumberOfGuesses = 0;
	int limitOfguesses = 0;
	int guessedNumber;
	char diff;
	bool diffEasy = false;
	bool diffNormal = false;
	bool diffHard = false;
	bool youLost = false;
	initiliaze(guessedNumber);
	std::cout << "Select a difficulty:" << "\n";
	std::cout << "1. Hard" << "\n";
	std::cout << "2. Normal" << "\n";
	std::cout << "3. Easy" << "\n";
	std::cin >> diff;
	switch (diff)
	{
	case '1':
		diffHard = true;
		break;
	case '2':
		diffNormal = true;
		break;
	case '3':
		diffEasy = true;
		break;
	default:
		diffNormal = true;
		break;
	}
	if (diffEasy == true) {
		y = 1;
		x = 10;
		limitOfguesses = 6;
	}
	else
	if (diffNormal == true)
		{
		y = 1;
		x = 20;
		limitOfguesses = 4;
		}
	else
	if (diffHard == true)
		{
		y = 1;
		x = 30;
		limitOfguesses = 3;
		}
	int result = 1 + (rand() % x);
	while(result != guessedNumber){
		system("cls");
		if (EXPERIMENTALFEATURES == true) {
			std::cout << result << "\n";
		}
		if (NumberOfGuesses < limitOfguesses) {
		std::cout << "Your number of guesses " << NumberOfGuesses << " / " << limitOfguesses << "\n";
		std::cout << "Guess a number between " << y << " and " << x << "\n";
		std::cout << "Good luck!\n";
		std::cin >> guessedNumber;
		NumberOfGuesses++;
		}
		else {
			youLost = true;
			break;
		}
	}

	if (youLost == true) {
		system("cls");
		std::cout << "You lose\n";
		Pause();
		inigame();
	}
	else {
		system("cls");
		std::cout << "You won.\n";
		Pause();
		inigame();
	}
		return 0;
}