//version 1.3
#include <iostream>
#include <classes.h>
#include <windows.h>
#include <conio.h>
#include <tchar.h>


using namespace std;

int IniGui() {
    cout << "fish" << "\n";
    _getch();
    return 0;
}


void calcNogui() {
    SetConsoleTitle(_T("Simple calculator"));
    pl numbs;
    char op;
    cout << "Enter numbers: ";
    cin >> numbs.num1 >> numbs.num2;
    cout << "Your entered numbers : " << numbs.num1 << " and " << numbs.num2 << "\n";
    cout << "Enter operator: +, -, * or /: \n";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << numbs.num1 + numbs.num2 << "\n";
        break;

    case '-':
        cout << numbs.num1 - numbs.num2 << "\n";
        break;

    case '*':
        cout << numbs.num1 * numbs.num2 << "\n";
        break;

    case '/':
        cout << numbs.num1 / numbs.num2 << "\n";
        break;

    default:
        cout << "Error! operator is not correct" << "\n";
        break;
    }
    // you like bread 
    cout << "Press any key to continue...";
    _getch();
    return;
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

}

