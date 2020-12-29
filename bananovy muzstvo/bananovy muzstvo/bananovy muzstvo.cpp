
#include <iostream>

std::string command;

int stringToInt(std::string command) {
	int n = 0;
#ifdef _DEBUG
	std::cout << command << "\n";
#endif	
	const char *cmds[4] = { "help", "list", "exit", "version" };
	while (1) {
		if (cmds[n] == command) {

			if (cmds[n] == cmds[0]) {
				std::cout << "f\n";
				return 0;
			}
			if (cmds[n] == cmds[1]) {
				std::cout << "ffff\n";
				return 0;
			}
			if (cmds[n] == cmds[2]) {
				return 1;
			}
			if (cmds[n] == cmds[3]) {
				std::cout << "ffggggtgff\n";
				return 0;
			}
			if (cmds[n] == cmds[3]) {
				std::cout << "ffggggtgff\n";
				return 0;
			if (cmds[n] != command)
				return 0;
			}
		} else 
			n++;			

	
	}
}

int main()
{
	while (1) {
		std::cin >> command;
		stringToInt(command);
	}
}
