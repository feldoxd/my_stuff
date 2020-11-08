//version 1.5
#include <Calculator.h>
#include <tier0.h>

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <tchar.h>
#include <math.h>

double num1, num2;

void calcGui() {
    

}

void calcNogui() {
    SetConsoleTitle(_T("Simple calculator"));
    char op;
    std::cout << "Enter numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Your entered numbers : " << num1 << " and " << num2 << "\n";
    std::cout << "Enter operator: +, -, * or /: \n";
    std::cin >> op;
    switch (op)
    {
    case '+':
        std::cout << num1 + num2 << "\n";
        break;

    case '-':
        std::cout << num1 - num2 << "\n";
        break;

    case '*':
        std::cout << num1 * num2 << "\n";
        break;

    case '/':
        std::cout << num1 / num2 << "\n";
        break;

    default:
        std::cout << "Error! operator is not correct" << "\n";
        break;
    }
    Pause();
}

int main()
{
    bool guiEnable = false;

    if (guiEnable){
        calcGui();
    }
    else
    {
        calcNogui();
    }
    return 0;
}

