#pragma once

#include <iostream>

bool points = false;
bool useSystemResources = false;

#define CMDMain_APIExport __declspec(dllexport)
#define CMDMain_APIImport __declspec(dllimport)
#ifdef _DEBUG
const char* debugcmds[3] = { "pointers", "break", "usesystem" };
#endif
const char* cmds[4] = { "help", "list", "exit", "version" };

std::string command;
std::string version = "0.0.0.2";

CMDMain_APIExport int CMDConvert(std::string command);



