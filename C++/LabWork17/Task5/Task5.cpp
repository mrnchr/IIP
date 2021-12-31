#include <iostream>

using namespace std;

int main() {
	int N, *a, index1, index2;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];

	cout << "Enter the array: ";

	for (int i(0); i < N; i++) {
		cin >> a[i];
	}

	for (int i(0); i < N; i++) {
		for (int j(i + 1); j < N; j++) {
			if (a[j] == a[i]) {
				index1 = i;
				index2 = j;
			}
		}
	}

	cout << "Answer: " << index1 << " " << index2 << endl;

	system("pause");
	delete[] a;
	return 0;
}