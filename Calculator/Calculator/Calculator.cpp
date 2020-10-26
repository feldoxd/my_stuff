//version 1.5
//My custom header files
#include <classes.h>
#include <Functions.h>

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <tchar.h>

//this will wait
void IniGui() {
    std::cout << "fish" << "\n";
    getInput();
}
//still learning c++ soooooo...........
void calcNogui() {
    SetConsoleTitle(_T("Simple calculator"));
    pl numbs;
    char op;
    std::cout << "Enter numbers: ";
    std::cin >> numbs.num1 >> numbs.num2;
    std::cout << "Your entered numbers : " << numbs.num1 << " and " << numbs.num2 << "\n";
    std::cout << "Enter operator: +, -, * or /: \n";
    std::cin >> op;
    switch (op)
    {
    case '+':
        std::cout << numbs.num1 + numbs.num2 << "\n";
        break;

    case '-':
        std::cout << numbs.num1 - numbs.num2 << "\n";
        break;

    case '*':
        std::cout << numbs.num1 * numbs.num2 << "\n";
        break;

    case '/':
        std::cout << numbs.num1 / numbs.num2 << "\n";
        break;

    default:
        std::cout << "Error! operator is not correct" << "\n";
        break;
    }
    getInput();
}

int main()
{
    bool guiEnable = false;

    if (guiEnable == true){
        IniGui();
    }
    else {
        calcNogui();
    }
    return 0;
}

