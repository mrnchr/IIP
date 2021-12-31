#include <iostream>
#include <math.h>

using namespace std;

double Length(double x1, double y1, double x2, double y2) {
	return sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
}

double TriangleS(double a, double b, double c) {
	double p = (a + b + c) / 2;

	return sqrt(p * (p - a)*(p - b)*(p - c));
}

int main() {
	setlocale(LC_ALL, "Russian");

	double x1, y1, x2, y2, x3, y3, a, b, c;

	cout << "������� ���������� ������ ����� ����� ������: ";
	cin >> x1 >> y1;
	cout << "������� ���������� ������ ����� ����� ������: ";
	cin >> x2 >> y2;
	cout << "������� ���������� ������ ����� ����� ������: ";
	cin >> x3 >> y3;

	a = Length(x1, y1, x2, y2);
	b = Length(x2, y2, x3, y3);
	c = Length(x3, y3, x1, y1);

	cout << "�������� ������������ P = " << a + b + c << endl;
	cout << "������� ������������ S = " << TriangleS(a, b, c) << endl;

	system("pause");
	return 0;
}

	