#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, c, ac, bc;

	cout << "������� ���������� ����� A: ";
	cin >> a;

	cout << "������� ���������� ����� B: ";
	cin >> b;

	cout << "������� ���������� ����� C: ";
	cin >> c;

	ac = abs(a - c);
	bc = abs(b - c);

	cout << "�� = " << ac << endl;
	cout << "BC = " << bc << endl;
	cout << "AC + BC = " << ac + bc << endl;

	system("pause");
	return 0;
}