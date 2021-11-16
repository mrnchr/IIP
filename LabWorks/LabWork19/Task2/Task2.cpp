#include <iostream>

using namespace std;

int main() {
	int* a, N, count, k = 0;
	bool* b;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];
	b = new bool[N];

	cout << "Enter the array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
		b[i] = 0;
	}

	system("cls");

	cout << "Your array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i(0); i < N; i++) {
		count = 0;
		for (int j(0); j < N; j++) {
			count += a[i] == a[j];
		}
		if (count == 2) {
			k++;
			b[i] = 1;
		}
	}

	cout << "New array is composed of the " << N - k << " elements\n";

	cout << "Changed array: \n";
	for (int i(0); i < N; i++) {
		if (!b[i])
			cout << a[i] << " ";
	}

	cout << endl;

	system("pause");
	delete[] a;
	delete[] b;
	return 0;
}