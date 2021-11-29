#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int M, N, * a, imax, imin, x;

	cout << "Введите размер матрицы: ";
	cin >> M >> N;

	a = new int[M * N];

	cout << "Заполните матрицу\n";
	for (int i(0); i < M; i++) {
		cout << "Введите " << i + 1 << " строку матрицы: ";
		for (int j(0); j < N; j++) {
			cin >> x;
			a[N * i + j] = x;
		}
	}

	system("cls");
	cout << "Введенная матрица: \n";
	for (int i(0); i < M; i++) {
		for (int j(0); j < N; j++) {
			cout << a[N * i + j] << " ";
		}
		cout << endl;
	}

	for (int i(0); i < N; i++) {
		imax = imin = 0;
		for (int j(0); j < M; j++) {
			if (a[i + N * j] < a[i + N*imin])
				imin = j;
			if (a[i + N * j] > a[i + N*imax])
				imax = j;
		}
		swap(a[i + N * imax], a[i + N * imin]);
	}

	cout << "Измененная матрица: \n";
	for (int i(0); i < M; i++) {
		for (int j(0); j < N; j++) {
			cout << a[N * i + j] << " ";
		}
		cout << endl;
	}

	system("pause");
	delete[] a;
	return 0;
}