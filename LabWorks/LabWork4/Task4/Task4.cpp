#include <iostream>

int main () {
	setlocale(LC_ALL, "Russian");

	double a, b;

	std::cin >> a >> b;

	std::cout << "����� ���������: " << a*a+b*b << std::endl;
	std::cout << "�������� ���������: " << a*a-b*b << std::endl;
	std::cout << "������������ ���������: " << a*a*b*b << std::endl;
	std::cout << "������� ���������: " << a*a/(b*b) << std::endl;
	
	system("pause");
	return 0;
}
