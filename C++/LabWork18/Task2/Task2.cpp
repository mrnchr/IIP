#include <iostream>

using namespace std;

int main() {
	int* a, N, sum;
	double *b;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];
	b = new double[N];

	sum = 0;

	cout << "Enter the array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
		sum += a[i];
		b[i] = (double)sum / (i + 1);
	}

	system("cls");

	cout << "Your array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

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