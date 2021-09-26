#include <iostream>

using namespace std;

int main() {
	int x, y;

	cout << "Enter the coordinates of point: ";
	cin >> x >> y;

	if (x > 0 && y > 0) {
		cout << "The point is the first quarter\n";
	}
	else if (x < 0 && y > 0) {
		cout << "The point is the second quarter\n";
	}
	else if (x < 0 && y < 0) {
		cout << "The point is the third quarter\n";
	}
	else {
		cout << "The point is the fourth quarter\n";
	}

	system("pause");
	return 0;
}