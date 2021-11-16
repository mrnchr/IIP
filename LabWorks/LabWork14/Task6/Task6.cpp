#include <iostream>

using namespace std;

int main() {
	int N;
	int k1, k2;
	int index = 2;

	cout << "Enter N - the Fibonacci number: ";
	cin >> N;

	k1 = 1;
	k2 = 0;

	if (N == 0) index--;
	else if (N != 1) {
		while (k1 != N) {
			k1 = k1 + k2;
			k2 = k1 - k2;
			index++;
		}
	}

	cout << "Answer: " << index << endl;

	system("pause");
	return 0;
}