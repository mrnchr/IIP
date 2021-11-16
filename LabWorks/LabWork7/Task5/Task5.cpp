#include <iostream>

using namespace std;

int main () {
	double a, b;

	cout << "Enter A and B - the coefficients of the linear equation: ";
	cin >> a >> b;

	cout << "x = " << -b/a << endl;

	system("pause");
	return 0;
}