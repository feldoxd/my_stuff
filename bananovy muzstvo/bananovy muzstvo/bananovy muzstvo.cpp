
#include <iostream>


std::string command;
int CMDConvert(std::string command) {
#ifdef _DEBUG
	std::cout << command << "\n";
#endif	
	int k = 0;
	const char *cmds[4] = { "help", "list", "exit", "version" };
	while (1) {
				if (command == cmds[0]) {
					std::cout << "kastan\n";
					return 0;
				}
				if (command == cmds[1]) {
					std::cout << "kastan2\n";
					return 0;
				}
				if (command == cmds[2]) {
					std::cout << "kastan3\n";
					return 1;
				}
				if (command == cmds[3]) {
					std::cout << "kastan4\n";
					return 0;
				}
				while (1) {
				if (cmds[k] != command) {
					std::cout << "NEZNAMY KOMANK DXDDDDDDDDDDDDD\n";
					return 0;
					k++;
				}
				}
				
	
	}
}

int main()
{
	while (1) {
		std::cin >> command;
		CMDConvert(command);
	}
	return 0;
}
