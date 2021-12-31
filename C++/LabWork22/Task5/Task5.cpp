#include <iostream>
#include <Windows.h>

using namespace std;

void MergeSort(int** p, int l, int r) {
	int n = r - l + 1;
	int* t;

	if (n <= 1) return;
	else if (n == 2) {
		if (p[0][0] > p[1][0]) {
			t = p[0];
			p[0] = p[1];
			p[1] = t;
		}
	}
	else {
		int** new_p = new int* [n];
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

	int M, ** a, x, * sum;

	cout << "Введите размер квадратной матрицы: ";
	cin >> M;

	a = new int* [M];
	sum = new int[2 * M - 2];

	cout << "Заполните матрицу\n";
	for (int i(0); i < M; i++) {
		a[i] = new int[M];
		cout << "Введите " << i + 1 << " строку матрицы: ";
		for (int j(0); j < M; j++) {
			cin >> x;
			a[i][j] = x;
		}
	}

	system("cls");
	cout << "Введенная матрица: \n";
	for (int i(0); i < M; i++) {
		for (int j(0); j < M; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int l(0), m(-M+1); l < 2 * M - 2; l++, m++) {
		m += m == 0;
		int i = m < 0 ? abs(m) : 0;
		int j = m > 0 ? abs(m) : 0;
		sum[l] = 0;
		for (; i < M && j < M; i++, j++) {
			sum[l] += a[i][j];
		}
	}

	cout << "Начиная с левого нижнего угла: ";
	for (int i(0); i < 2 * M - 2; i++) {
		cout << "Сумма элементов " << i + 1 << " диагонали параллельной главной диагонали равна ";
		cout << sum[i] << endl;
	}

	system("pause");
	delete[] a;
	delete[] sum;
	return 0;
}