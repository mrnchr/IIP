#include <iostream>

using namespace std;

void QuickSort(int* p, int left, int right) {
	int l = left, r = right, middle = p[(right + left) / 2];

	while (l <= r) {
		while (p[l] < middle) l++;
		while (p[r] > middle) r--;

		if (l <= r) {
			swap(p[l], p[r]);
			l++;
			r--;
		}
	}

	if (left < r) {
		QuickSort(p, left, r);
	}
	if(l < right) {
		QuickSort(p, l, right);
	}
}

int main() {
	int N, *a, d;
	bool is_prg;

	cout << "Enter the size of the array: ";
	cin >> N;

	a = new int[N];

	cout << "Enter the array: ";
	for (int i(0); i < N; i++) {
		cin >> a[i];
	}

	QuickSort(a, 0, N - 1);
	d = a[1] - a[0];
	is_prg = true;

	for (int i(2); i < N; i++) {
		if (a[i] - a[i - 1] != d) {
			is_prg = false;
			break;
		}
	}
	cout << "Answer: " << (is_prg ? d : 0) << endl;

	system("pause");
	delete[] a;
	return 0;
}