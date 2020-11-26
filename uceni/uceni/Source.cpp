#include <iostream>

int main() {
	int x = 45;
	std::cout << x << endl;
	int& ref = x;
	ref = 20;
	std::cout << x << ref << endl;
	x = 50;
	std::cout << x << ref << endl;
	return 0;
}