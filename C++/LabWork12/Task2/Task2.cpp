#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char C;
	int N;
	int index = 4;// 4 чтобы предотвратить отрицательный остаток от деления на 4
	char direction[4] = { 'С', 'З', 'Ю', 'В' };

	cout << "Введите исходное направление робота и команду: ";
	cin >> C >> N;

	for (int i(0); i < 4; i++) {
		if (direction[i] == C)
			index += i;
	}

	index += N;

	cout << "Направление робота: " << direction[index % 4] << endl;

	system("pause");
	return 0;
}