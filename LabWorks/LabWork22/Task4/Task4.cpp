#include <iostream>
#include <Windows.h>

using namespace std;

void MergeSort(int** p, int l, int r) {
	int n = r - l + 1;
	int* t;

	if (n <= 1) return;
	else if (n == 2) {
		if (p[0][0] > p[1][0]){
			t = p[0];
			p[0] = p[1];
			p[1] = t;
		}
	}
	else {
		int ** new_p = new int* [n];
		int middle = (l + r) / 2;
		int right = middle + 1;
		int left = l;

		MergeSort(p, l, middle);
		MergeSort(p, middle + 1, r);

		for (int i(0); i < n; i++) {
			if (p[left][0] < p[right][0] && left < middle + 1 && right < r + 1) {
				new_p[i] = p[left];
				left++;
			}
			else if (left < middle + 1 && right < r + 1) {
				new_p[i] = p[right];
				right++;
			}
			else if (left < middle + 1 && right > r + 1) {
				new_p[i] = p[left];
				left++;
			}
			else {
				new_p[i] = p[right];
				right++;
			}
		}

		for (int i(l); i < r + 1; i++) {
			p[i] = new_p[i - l];
		}

		delete[] new_p;
	}
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int M, N, ** a, x, imin;

	cout << "Введите размер матрицы: ";
	cin >> M >> N;

	a = new int*[M];

	cout << "Заполните матрицу\n";
	for (int i(0); i < M; i++) {
		a[i] = new int[N];
		cout << "Введите " << i + 1 << " строку матрицы: ";
		for (int j(0); j < N; j++) {
			cin >> x;
			a[i][j] = x;
		}
	}

	system("cls");
	cout << "Введенная матрица: \n";
	for (int i(0); i < M; i++) {
		for (int j(0); j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i(0); i < M; i++) {
		imin = i;
		for (int j(i + 1); j < M; j++) {
			if (a[imin][0] > a[j][0])
				imin = j;
		}
		for (int j(0); j < N; j++) {
			swap(a[i][j], a[imin][j]);
		}
	}

	cout << "Измененная матрица: \n";
	for (int i(0); i < M; i++) {
		for (int j(0); j < N; j++) {
			
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	delete[] a;
	return 0;
}