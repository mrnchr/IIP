#include <iostream>
#include <math.h>

using namespace std;

int y(int x) {
	return 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
}

int main() {
	int x;

	cout << "Enter x: ";

	cin >> x;

	cout << "y(x) = " << y(x) << endl;

	system("pause");
	return 0;
}
