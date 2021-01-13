#include "pch.h"
#include "CMDMain.h"

#include <stdio.h>
#include <iostream>
#include "cls.h"
#ifdef _DEBUG
#include <csignal>
#endif

void list(){
	for (int i = 0; 4 > i; i++) {
		std::cout << cmds[i] << "\n";
	}
}

//kapis to? nevim jak spatny tento kod je ale urcite neni nejlepsi
//je to samy if statement.
//tak trapny. nevim jestli tu je este neco jinyho nebo jinak jak to muzu udelat
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
			//std::cout << "kastan\n";
			return 0;
		}
		if (command == cmds[1]) {
			list();
			return 0;
		}
		if (command == cmds[2]) {
			system("exit");
			return 1;
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
		if (command == debugcmds[1]) {
			std::raise(SIGABRT);
			return 1;
		}
		if (command == debugcmds[2]) {
			if (!useSystemResources) {
				std::cout << "Enabled system resources (warning slow)\n";
				useSystemResources = true;
				return 0;
			}
			else
			{
				std::cout << "Disabled system resources(some functions may be broken)\n";
				useSystemResources = false;
				return 0;
			}
		}
#endif //_debug
		while (1) {
			if (cmds[k] || debugcmds[k] != command) {
				std::cout << "NEZNAMY KOMANK DXDDDDDDDDDDDDD\n";
				return 0;
				k++;
			}
		}
	}
	return 1;
}