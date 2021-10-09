#include <iostream>

using namespace std;

int main() {
	int N, x, y, z, index;

	cout << "Enter the size of the array: ";
	cin >> N;

	cout << "Enter the array: ";
	cin >> x >> y;

	for (int i(2); i < N - 2; i++) {
		cin >> z;
		if (y > z && y > x) {
			index = i - 1;
		}

		x = y;
		y = z;
	}

	cout << "Answer: " << index << endl;

	system("pause");
	return 0;
}