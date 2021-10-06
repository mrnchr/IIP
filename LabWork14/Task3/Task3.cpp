#include <iostream>

using namespace std;

int main() {
	int N, k;
	int sum;

	cout << "Enter the number N: ";
	cin >> N;

	sum = 0;

	for (k = 1; sum < N; k++) {
		sum += k;
	}
	k--;

	cout << "K = " << k << endl << "Sum = " << sum << endl;

	system("pause");
	return 0;
}