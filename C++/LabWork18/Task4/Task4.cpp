#include <iostream>

using namespace std;

int main() {
	int* a, N, minim, maxim, imax, imin;

	maxim = 0;
	minim = 10000000;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];

	cout << "Enter the array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
		if (a[i] > maxim) {
			imax = i;
			maxim = a[i];
		}
		if (a[i] < minim) {
			minim = a[i];
			imin = i;
		}
	}

	system("cls");

	cout << "Origin array: ";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	if (imax < imin)
		swap(imax, imin);

	cout << "Changed array: ";
	for (int i(0); i < N; i++) {
		if (i > imin && i < imax)
			a[i] = 0;
		cout << a[i] << " ";
	}

	cout << endl;

	system("pause");
	delete[] a;
	return 0;
}