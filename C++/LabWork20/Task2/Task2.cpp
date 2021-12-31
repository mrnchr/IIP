#include <iostream>
#include <vector>

using namespace std;

int main() {
	int L, N, * a, k;
	vector <int> b;

	cout << "Enter the size of the array: ";
	cin >> N;

	cout << "Enter L: ";
	cin >> L;

	a = new int[N];

	k = 1;

	cout << "Enter the array: ";
	cin >> a[0];
	for (int i(1); i < N; i++) {
		cin >> a[i];
		if (a[i] == a[i - 1]) {
			k++;
		}
		else {
			if (k > L) {
				b.push_back(0);
			}
			else {
				for (int j(0); j < k; j++)
					b.push_back(a[i - 1]);
			}

			k = 1;
		}
	}
	
	if (k > L) {
		b.push_back(0);
	}
	else {
		for (int j(0); j < k; j++)
			b.push_back(a[N - 1]);
	}

	system("cls");

	cout << "Your array: \n";
	for (int i(0); i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "New array: \n";
	for (int i : b) {
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	delete[] a;
	return 0;

}