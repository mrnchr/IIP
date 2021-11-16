#include <iostream>
#include <math.h>

using namespace std;

int y(int x) {
	return 3 * pow(x, 6) - 6 * x * x - 7;
}

int main() {
	int x;

	cout << "Enter x: ";
	cin >> x;

	cout << "y(x) = " << y(x) << endl;

	system("pause");
	return 0;
}
