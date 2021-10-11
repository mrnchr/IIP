#include <iostream>
#include <vector>

using namespace std;

int main() {
	int* a, N, k;
	vector <int> b;
	vector <int> c;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];

	k = 1;

	cout << "Etner the array: ";
	cin >> a[0];
	c.push_back(a[0]);
	for (int i(1); i < N; i++) {
		cin >> a[i];
		if (a[i] == a[i - 1]) {
			k++;
		}
		else {
			b.push_back(k);
			c.push_back(a[i]);
			k = 1;
		}
	}
	b.push_back(k);

	system("cls");

	cout << "Your array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl; 

	cout << "Two new arrays: \n";
	for (int i: b) {
		cout << i << " ";
	}

	cout << endl;

	for (int i : c) {
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	delete[] a;
	return 0;
}