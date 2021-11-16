#include <iostream>

int main () {
	setlocale(LC_ALL, "Russian");

	double a, b;

	std::cin >> a >> b;

	std::cout << "Сумма квадратов: " << a*a+b*b << std::endl;
	std::cout << "Разность квадратов: " << a*a-b*b << std::endl;
	std::cout << "Произведение квадратов: " << a*a*b*b << std::endl;
	std::cout << "Частное квадратов: " << a*a/(b*b) << std::endl;
	
	system("pause");
	return 0;
}
