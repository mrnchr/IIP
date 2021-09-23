#include <iostream>

using namespace std;

int main () {
	double a1, a2, b1, b2, c1 ,c2;

	cout << "Enter the coefficients of the first equation of the system: ";
	cin >> a1 >> b1 >> c1;
	cout << "Enter the coefficients of the second equation of the system: "; 
	cin >> a2 >> b2 >> c2;

	double y, x;

	y = (a2 * c1 - a1 * c2) / (a2 * b1 - a1 * b2);
	x = (c2 - b2 * y) / a2;

	cout << "x = " << x << "\ny = " << y << endl;

	system("pause");
	return 0;
}