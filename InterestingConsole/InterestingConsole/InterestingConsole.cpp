

#include <iostream>

#include "CMDMain.h"

int main()
{
	std::cout << "Console version 0.0.0.8 build 14\n";
	std::cout << "CMDMain version " << version << "\n";
	while (1) {
	std::cout << "(> ";
	std::cin >> command;
	CMDConvert(command);
	}


return 0;
}
