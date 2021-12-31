#include <iostream>
#include <math.h>

using namespace std;

struct point {
	int x, y;

	double length() {
		return pow(x * x + y * y, 0.5);
	}
};

int main() {
	point a, g;
	int N;

	cout << "Enter the size of the array: ";
	cin >> N;

	g.x = g.y = 0;

	cout << "Enter the coordinates of the points: \n";
	for (int i(0); i < N; i++) {
		cin >> a.x >> a.y;
		if (a.x < 0 && a.y > 0 && a.length() > g.length())
			g = a;
	}

	cout << "Answer: (" << g.x << "; " << g.y << ")" <<endl;

	system("pause");
	return 0;
}