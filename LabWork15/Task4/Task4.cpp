#include <iostream>

using namespace std;

int Quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	else if (x < 0 && y > 0) return 2;
	else if (x < 0 && y < 0) return 3;
	else return 4;
}

int main() {
	double points[3][2];
	int Q[3];

	cout << "Enter three points\n";
	for (int i(0); i < 3; i++) {
		cout << "Enter the " << i + 1 << " point: ";
		cin >> points[i][0] >> points[i][1];
		Q[i] = Quarter(points[i][0], points[i][1]);
	}

	for (int i(0); i < 3; i++) {
		cout << "The point (" << points[i][0] << "; " << points[i][1] << ") is in the " << Q[i] << " quarter\n";
	}

	system("pause");
	return 0;
}