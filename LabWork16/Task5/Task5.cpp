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

	for (int i(1); i < N; i += 2) {
		cout << a[i] << " ";
	}
	for (int i(N - 2 + N % 2); i > -1; i -= 2) {
		cout << a[i] << " ";
	}

	cout << endl;

	system("pause");
	delete[] a;
	return 0;
}