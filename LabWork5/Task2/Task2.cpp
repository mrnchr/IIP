#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, c, ac, bc;

	cout << "Введите координату точки A: ";
	cin >> a;

	cout << "Введите координату точки B: ";
	cin >> b;

	cout << "Введите координату точки C: ";
	cin >> c;

	ac = abs(a - c);
	bc = abs(b - c);

	cout << "АС = " << ac << endl;
	cout << "BC = " << bc << endl;
	cout << "AC + BC = " << ac + bc << endl;

	system("pause");
	return 0;
}