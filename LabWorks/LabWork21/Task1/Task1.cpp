#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

void Print(int **A, bool **B, int M) {
	for (int i(0); i < M; i++) {
		for (int j(0); j < M; j++) {
			if (B[i][j])
				cout << A[i][j] << " ";
			else
				cout << "   ";
		}
		cout << endl;
	}
}

void Clean(int** A, bool** B, int M) {
	for (int i(0); i < M; i++) {
		delete[] A[i];
		delete[] B[i];
	}
}

int main() {
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int M, x;

	cout << "Введите порядок квадратной матрицы: ";
	cin >> M;

	int** A;
	bool** B;

	A = new int*[M];
	B = new bool*[M];

	cout << "Заполните матрицу " << M << "*" << M << endl;
	for (int i(0); i < M; i++) {
		A[i] = new int[M];
		B[i] = new bool[M];
		cout << "Введите " << i + 1 << " строку: ";
		for (int j(0); j < M; j++) {
			cin >> A[i][j];
			B[i][j] = 0;
		}
	}

	system("cls");
	Sleep(500);

	for (int i(0); i < M * 2 - 2; i++) {
		for (int j((i + 3) / 4); j < (M - (i + 1) / 4); j++) {
			if (i % 2) {
				if (i % 4 % 3)
					B[M - i / 4 - 1][j] = 1;
				else 
					B[i / 4][M - j - 1] = 1;
			}
			else {
				if (i % 4 == 0)
					B[j][i / 4] = 1;
				else
					B[M - j - 1][M - i / 4 - 1] = 1;
			}
			Print(A, B, M);
			Sleep(500);
			system("cls");
		}
	}

	B[M / 2][M / 2] = 1;
	Print(A, B, M);
	
	system("pause");
	Clean(A, B, M);
	return 0;
}