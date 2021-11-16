#include <iostream>

using namespace std;

int main() {
	int* a, N;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];

	cout << "Enter the array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
	}

	system("cls");

	cout << "Origin array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i(1); i < N; i++) {
		if (a[i] < a[i - 1])
			swap(a[i], a[i - 1]);
	}

	cout << "Changed array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	delete[] a;
	return 0;
}