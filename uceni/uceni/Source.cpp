#include <iostream>
#include "tier0.h"
#include <windows.h>
int main() {
	bool crashAno;
	int crash;
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	std::cout << "cs" << "\n";
	Sleep(5000);
	std::cout << "chces crashnout pc?" << "\n";
	std::cin >> crash;
	switch (crash) {
	case '0':
		crashAno = true;
		break;
	case '1':
		crashAno = true;
		break;
	default:
	std::cout << "kys";
	Pause();
		break;
	}
	return 0;
}