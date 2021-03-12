#include "pch.h"
#include <utility>
#include <iostream>
#include <limits.h>
#include <tchar.h>
#include <conio.h>
#include "tier0.h"
#include <Windows.h>
#include <stdlib.h>
//pausne kdyz pouzito
//update custom message ez
int Pause(std::string CustomMSG) {
    std::cout << CustomMSG;
    _getch();
    return 0;
}
//classa pro void
class delX {
public:
    std::string delA;
    std::string delB = "";
};
//kdyz pouzito tak by to mnelo fungovat jako void a resetovat to co se tam napise
int Void() {
    delX del;
    if (del.delA == del.delB) {
        del.delA = "";
    }
    return 0;
}