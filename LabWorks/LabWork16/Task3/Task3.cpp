#include <iostream>

using namespace std;

int main() {
	int N, A, B;

	cout << "Enter N, A, B: ";
	cin >> N >> B >> A;

	cout << "1 element is equal " << B << endl;
	cout << "2 element is equal " << A << endl;

	for (int i(0); i < N - 2; i++) {
		A = A + B;
		B = A - B;
		cout << i + 3 << " element is equal " << A << endl;
	}

	system("pause");
	return 0;
}