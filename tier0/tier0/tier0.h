#include <iostream>

#ifdef TIER0_EXPORTS
#define TIER0_API __declspec(dllexport)
#else
#define TIER0_API __declspec(dllimport)
#endif

extern "C" TIER0_API int Pause(std::string CustomMSG);

extern "C" TIER0_API int Void();