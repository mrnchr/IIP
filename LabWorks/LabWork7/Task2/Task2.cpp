#include <iostream>
#include <math.h>
#include <Windows.h>

#define _USE_MATH_DEFINES

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a;

	cout << "Enter a (0 < a < " << 2 * M_PI << "): ";
	cin >> a;

	cout << "a = " << 180 / M_PI * a << "°\n";

	system("pause");
	return 0;
}