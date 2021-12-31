#include <iostream>

using namespace std;

int main() {
	int* a, N;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];

	cout << "Enter the elements of the array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
	}
	system("cls");

	cout << "Your order: ";

	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << "\nGood order: ";

	for (int i(0); i * 2 < N; i++) {
		cout << a[i] << " ";
		if (N % 2 == 0 || i != N / 2) {
			cout << a[N - i - 1] << " ";
		}
	}
	cout << endl;

	system("pause");
	delete[] a;
	return 0;
}