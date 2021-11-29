#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int M, N, * a, x;

	cout << "������� ������ �������: ";
	cin >> M >> N;

	a = new int[M * N];

	cout << "��������� �������\n";
	for (int i(0); i < M; i++) {
		cout << "������� " << i + 1 << " ������ �������: ";
		for (int j(0); j < N; j++) {
			cin >> x;
			a[N * i + j] = x;
		}
	}

	system("cls");
	cout << "��������� �������: \n";
	for (int i(0); i < M; i++) {
		for (int j(0); j < N; j++) {
			cout << a[N * i + j] << " ";
		}
		cout << endl;
	}

	cout << "���������� �������: \n";
	for (int i(0); i < M; i++) {
		for (int j(0); j < N; j++) {
			if (i < M / 2 && j < N / 2) 
				swap(a[N * i + j], a[N * (M - i - 1) + N - j - 1]);
			cout << a[N * i + j] << " ";
		}
		cout << endl;
	}

	system("pause");
	delete[] a;
	return 0;
}