//version 1.8
#include "tier0.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <tchar.h>
#include <math.h>

double num1, num2;
char op;

void reset() {
    num1.clear();
}

void calc() {
    SetConsoleTitle(_T("Simple calculator"));
    while (1) {
    std::cout << "Enter numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Your entered numbers are : " << num1 << " and " << num2 << "\n";
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
    Pause("jsi kokot ne");
    }
}

int main()
{
        calc();
        return 0;
}

