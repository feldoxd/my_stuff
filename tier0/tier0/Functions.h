#include <iostream>
#include <conio.h>
#include <tchar.h>
#include <windows.h>

int Pause() {
    std::cout << "Press any key to continue...";
    _getch();
	return 0;
}

class delX {
public:
	std::string delA;
	std::string delB = "";
};


int Void() {
	delX del;
	if (del.delA != del.delB) {
		del.delA = "";
	}
	return 0;
}