#include <iostream>

using namespace std;

int main() {
	int N, A, D, An;

	cout << "Enter the number of members of the geometric progression: ";
	cin >> N;
	cout << "Enter the first member of the geometric progression: ";
	cin >> A;
	cout << "Enter the denominator of the geometric progression: ";
	cin >> D;

	An = A;

	for (int i(0); i < N; i++) {
		cout << i+1 << " member of the progression is equal " << An << endl;
		An *= D;
	}

	system("pause");
	return 0;
}