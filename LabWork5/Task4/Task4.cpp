#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double x1, y1, x2, y2, a, b;

	std::cout << "������� ���������� ������ ����� ����� ������: ";
	std::cin >> x1 >> y1;
	std::cout << "������� ���������� ������ ����� ����� ������: ";
	std::cin >> x2 >> y2;

	a = abs(x1 - x2);
	b = abs(y1 - y2);

	cout << "�������� ������������� P = " << 2 * (a + b) << endl;
	cout << "������� �������������� S = " << a * b << endl;

	system("pause");
	return 0;
}

