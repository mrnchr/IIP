#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b;

	std::cin >> a >> b;

	cout << "����� �������: " << abs(a) + abs(b) << endl;
	cout << "�������� �������: " << abs(a) - abs(b) << endl;
	cout << "������������ �������: " << abs(a)*abs(b) << endl;
	cout << "������� �������: " << abs(a)/abs(b) << endl;

	system("pause");
	return 0;
}