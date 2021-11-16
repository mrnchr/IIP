#include <iostream>

using namespace std;

int main() {
	int N, x, K, L;
	double sum;

	cout << "Enter the size of the array: ";
	cin >> N;

	cout << "Enter numbers K and L: ";
	cin >> K >> L;

	sum = 0;

	cout << "Enter the elements of the array: ";
	for (int i(0); i < N; i++) {
		cin >> x;
		if (i + 1 >= K && i < L) {
			sum += x;
		}
	}

	cout << "Average is equal " << sum / (L - K + 1) << endl;
	system("pause");
	return 0;
}