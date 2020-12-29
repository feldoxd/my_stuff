#pragma once

#include <iostream>
#include <stdio.h>

#define CMDMain_APIExport __declspec(dllexport)
#define CMDMain_APIImport __declspec(dllimport)


//CMDMain_APIExport bool initiateCommands();

CMDMain_APIExport void exit();

CMDMain_APIExport void list();

std::string command;

switch(command){
	case 'help':
		break;
	default:
		break;
}
