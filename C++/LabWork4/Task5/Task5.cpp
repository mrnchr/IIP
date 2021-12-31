#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b;

	std::cin >> a >> b;

	cout << "Сумма модулей: " << abs(a) + abs(b) << endl;
	cout << "Разность модулей: " << abs(a) - abs(b) << endl;
	cout << "Произведение модулей: " << abs(a)*abs(b) << endl;
	cout << "Частное модулей: " << abs(a)/abs(b) << endl;

	system("pause");
	return 0;
}