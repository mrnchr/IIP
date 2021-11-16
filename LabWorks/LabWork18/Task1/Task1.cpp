#include <iostream>

using namespace std;

int main() {
	int* a, * b, N;

	cout << "Enter the size of arrays: ";
	cin >> N;

	a = new int[N];
	b = new int[N];

	cout << "Enter elements of the first array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
	}

	cout << "Enter elements of the second array: ";
	for (int i(0); i < N; i++) {
		cin >> b[i];
	}

	cout << "Origin arrays: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i(0); i < N; i++) {
		cout << b[i] << " ";
	}
	cout << endl << endl;

	int* t;

	t = a;
	a = b;
	b = t;

	system("cls");

	cout << "Chandged arrays: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i(0); i < N; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	system("pause");
	delete[]a;
	delete[]b;
	return 0;
}