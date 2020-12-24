#pragma once

#ifdef CMDMain_EXPORTS
#define CMDMain_API __declspec(dllexport)
#else
#define CMDMain_API __declspec(dllimport)
#endif


extern "C++" CMDMain_API bool initiateCommands();

extern "C++" CMDMain_API bool list();

extern "C++" CMDMain_API bool version();