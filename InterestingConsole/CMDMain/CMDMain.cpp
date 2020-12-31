#include "pch.h"
#include "CMDMain.h"


#include <stdio.h>
#include <iostream>
#include "cls.h"

int exit(){
	system("exit");
	return 1;
}

void list(){
	for (int i = 0; 4 > i; i++) {
		std::cout << cmds[i] << "\n";
	}
}

//const char* cmds[4] = { "help", "list", "exit", "version" };
//kapis to? nevim jak spatny tento kod je ale urcite neni nejlepsi

int CMDConvert(std::string command) {
#ifdef _DEBUG
	if (points) {
		std::cout << "debug: " << &command << "\n";
		std::cout << "debug: " << &cmds << "\n";
	}
#endif	
	int k = 0;
	while (1) {
		if (command == cmds[0]) {
			std::cout << "kastan\n";
			return 0;
		}
		if (command == cmds[1]) {
			list();
			return 0;
		}
		if (command == cmds[2]) {
			system("exit");
			return 0;
		}
		if (command == cmds[3]) {
			std::cout << version << "\n";
			return 0;
		}
#ifdef _DEBUG
		if (command == debugcmds[0]) {

			if (!points) {
				std::cout << "Enabled pointers\n";
			points = true;
			}
			else 
			{
				std::cout << "Disabled pointers\n";
				points = false;
			}
		}
#endif
		while (1) {
			if (cmds[k] || debugcmds[k] != command) {
				std::cout << "NEZNAMY KOMANK DXDDDDDDDDDDDDD\n";
				return 0;
				k++;
			}
		}
	}
}