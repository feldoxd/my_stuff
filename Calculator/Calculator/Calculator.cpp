//version 1.0
#include <iostream>
#include <classes.h>
#include <windows.h>


using namespace std;

int main()
{
	pl numbs;
	numbs.num1 = 0;
	numbs.num2 = 0;
    char op;
	cout << "Enter numbers: ";
	cin >> numbs.num1 >> numbs.num2;
	cout << "Your entered numbers : " << numbs.num1 << " and " << numbs.num2 << "\n";
    cout << "Enter operator: \n";
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
    cout << "Shutting down program in few seconds.";
    Sleep(5000);
    return 0;
}

