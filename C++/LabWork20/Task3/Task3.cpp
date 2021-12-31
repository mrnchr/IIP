#include <iostream>

using namespace std;

int main() {
	int* a, * b, N, K, cycle, last, k, sizeK;

	cout << "Enter the size of the array: ";
	cin >> N;

	cout << "Enter K: ";
	cin >> K;

	a = new int[N];
	b = new int[N];

	cycle = 1;
	sizeK = 1;

	cout << "Enter the array: ";
	cin >> a[0];
	if (cycle == K) {
		k = 0;
	}
	for (int i(1); i < N; i++) {
		cin >> a[i];
		if (cycle == K && a[i] == a[i - 1])
			sizeK++;
		if (a[i] != a[i - 1]) {
			cycle++;
			if (cycle == K) {
				k = i;
			}
			last = i;
		}
	}

	system("cls");

	cout << "Your array: ";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i(0); i < N; i++) {
		bool is_swap = false;
		if (i >= k && i < last) {
			while (i - k + last < N) {
				b[i] = a[last];// Заполнением массива b элемнтами последней серии
				i++;
			}
			b[i] = a[i + sizeK - N + last];// Заполняем массив b элементами, находящимися между концом K-той 
			// серии и началом последней
		}
		else if (i >= last) {
			b[i] = a[k];// Заполнение массива b элементами K - той серии
		}
		else {
			b[i] = a[i];// Заполнение массива b элементами до K-той серии
		}	
	}

	cout << "New array: \n";
	for (int i(0); i < N; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	system("pause");
	delete[] a;
	delete[] b;
	return 0;
}