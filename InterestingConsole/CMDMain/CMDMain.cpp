#include "pch.h"
#include "CMDMain.h"


#include <stdio.h>
#include <iostream>
#include "cls.h"

int cmdcount = 0;
/*bool initiateCommands(){
		
	std::cout << "Command count: " << cmdcount << "\n";
	exit();
	cls();
	std::cout << "Command count: " << cmdcount << "\n";
	list();
	cls();
	std::cout << "Command count: " << cmdcount << "\n";
	return false;
}*/

void exit(){
	system("exit");
}

void list(){
	std::cout << "k";
}
