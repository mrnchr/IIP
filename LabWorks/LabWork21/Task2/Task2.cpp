#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M, N, K, * a;
	int sum = 0;
	int mult = 1;

	cout << "Введите размер матрицы (два числа через пробел): ";
	cin >> M >> N;

	a = new int[M * N];

	cout << "Заполните матрицу числами\n";
	for (int i(0); i < M; i++) {
		cout << "Введите " << i + 1 << " строку матрицы: ";
		for (int j(0); j < N; j++) {
			cin >> a[i * N + j];
		}
	}

	cout << "Введите целое число (номер строки матрицы): ";
	cin >> K;

	K--;

	for (int i(N* K); i < N * (K + 1); i++) {
		sum += a[i];
		mult *= a[i];
	}

	cout << "Сумма " << K + 1 << " строки равна " << sum << endl;
	cout << "Произвдение " << K + 1 << " строки равно " << mult << endl;

	system("pause");
	delete[] a;
	return 0;
}