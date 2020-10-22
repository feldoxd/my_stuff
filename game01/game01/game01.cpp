#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Settings.h"

using namespace std;

int inigame() {
	string name;
	for (int i = 1; i <= 100; i++) {
		cout << endl;
	}

	//cout << "Enter nickname:";
	//cin >> name.playerName;
	name = "feldo";
	cout << "sorry no game for now but ill keep working on it.";
	Sleep(5000);

	return 0;
}

int main()
{
	char op;
	cout << "Version 0.1" << "\n";
	cout << "\n";
	cout << "\n";
	cout << "My game lol" << "\n";
	cout << "1. Game start" << "\n";
	cout << "2. Exit" << "\n";
	cout << "\n";
	cout << "Enter 1 or 2: ";
	cin >> op;
	switch (op)
	{

	case '1':
		inigame();
			break;
			
	case '2':
		return 0;
			break;

	default:
		cout << "You have entered wrong option" << "\n";
			break;
	}
	return 0;
}

