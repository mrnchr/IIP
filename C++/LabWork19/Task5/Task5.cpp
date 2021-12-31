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

	cout << "Your array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	cout << "Changed array: \n";
	for (int i(0); i < N; i++) {
		if (a[i] > 0)
			cout << 0 << " ";
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	delete[] a;
	return 0;
}