#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

int main() {
	int a;

	cout << "Enter a (0 < a < 360): ";
	cin >> a;

	cout << "a = " << M_PI / 180 * a << " rad\n";

	system("pause");
	return 0;
}

