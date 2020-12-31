#pragma once

#include <iostream>

bool points = false;

#define CMDMain_APIExport __declspec(dllexport)
#define CMDMain_APIImport __declspec(dllimport)

const char* debugcmds[2] = { "pointers", "break" };
const char* cmds[4] = { "help", "list", "exit", "version" };

std::string command;
std::string version = "0.0.0.2";

CMDMain_APIExport int CMDConvert(std::string command);



