#include "pch.h"
#include "CMDMain.h"

#include <iostream>

std::string CMDS = "list, version, exit";
std::string Sversion = "1.0.0.0";

bool initiateCommands() {
	std::cout << "Initiating commands:" << "\n";
	Sleep(3000);
	std::cout << "Basic commands:" << "\n";
	list();
	version();
	return false;
}

bool list() {
	if (list) {
	std::cout << "list" << "\n";
		return false;
	}
	else {
	std::cout << "List of commands:" << "\n";
	std::cout << CMDS;

	return false;
	}
}

bool version() {
	if (version) {
		std::cout << "version" << "\n";
		return false;
	}
	else {
		std::cout << Sversion << "\n";
		return false;
	}
}