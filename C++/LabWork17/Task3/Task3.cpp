#include <iostream>

using namespace std;

int main() {
	int N, x, minim;

	minim = 10000000;

	cout << "Enter the size of the array: ";
	cin >> N;

	cout << "Enter the array: ";

	for (int i(0); i < N; i++) {
		cin >> x;
		if (x < minim && i % 2)
			minim = x;
	}

	cout << "Answer: " << minim << endl;

	system("pause");
	return 0;
}