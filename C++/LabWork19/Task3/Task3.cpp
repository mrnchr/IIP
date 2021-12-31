#include <iostream>

using namespace std;

int main() {
	int* a, N, maxim, minim, imax, imin;

	maxim = 0;
	minim = 1000000;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];

	cout << "Enter the array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
		if (a[i] < minim) {
			minim = a[i];
			imin = i;
		}
		if (a[i] > maxim) {
			maxim = a[i];
			imax = i;
		}
	}

	system("cls");

	cout << "Your array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	cout << "Changed array: \n";
	for (int i(0); i < N; i++) {
		if (i == imin)
			cout << 0 << " ";
		cout << a[i] << " ";
		if (i == imax)
			cout << 0 << " ";
	}
	cout << endl;

	system("pause");
	delete[] a;
	return 0;	
}