#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, c;
	cout << "������� ���������� ����� A: ";
	cin >> a;

	cout << "������� ���������� ����� B: ";
	cin >> b;

	cout << "������� ���������� ����� C: ";
	cin >> c;

	cout << "AC * BC = " << (c - a) * (b - c) << endl;

	system("pause");
	return 0;	
}