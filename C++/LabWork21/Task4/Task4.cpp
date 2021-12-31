#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M, N, ** a, num;
	double *avrg;

	cout << "Введите размер матрицы (два числа через пробел): ";
	cin >> M >> N;

	a = new int* [M];
	avrg = new double [N];

	cout << "Заполните матрицу\n";
	for (int i(0); i < M; i++) {
		a[i] = new int[N];
		cout << "Введите " << i + 1 << " строку матрицы: ";
		for (int j(0); j < N; j++) {
			avrg[j] = i == 0 ? 0 : avrg[j];
			cin >> a[i][j];
			avrg[j] += a[i][j] /(double) N;
		}
	}

	for (int i(0); i < N; i++) {
		num = 0;
		cout << "В " << i+1 << " столбце число элементов больших среднего арифметического равно ";
		for (int j(0); j < M; j++) {
			if (a[j][i] > avrg[i])
				num++;
		}
		cout << num << endl;
	}

	system("pause");
	delete[] avrg;
	for (int i(0); i < M; i++) {
		delete[] a[i];
	}
	return 0;
}