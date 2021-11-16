#include <iostream>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Russian");
	double x1, y1, x2, y2;

	std::cout << "Введите координаты первой точки через пробел: ";
	std::cin >> x1 >> y1;
	std::cout << "Введите координаты второй точки через пробел: ";
	std::cin >> x2 >> y2;

	std::cout << "Расстояние между точками: " << sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2)) << std::endl;
	
	system("pause");
	return 0;
}