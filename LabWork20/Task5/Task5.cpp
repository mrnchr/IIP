#include <iostream>
#include <math.h>

using namespace std;

struct point {
	int x, y;
};

double d(point a, point b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double S(point a, point b, point c) {
	double ab, bc, ac, p;
	ab = d(a, b);
	bc = d(b, c);
	ac = d(a, c);
	p = (ab + bc + ac) / 2;

	return sqrt(p * (p - ab) * (p - bc) * (p - ac));
}

int main() {
	int N;
	point *a, A, B, C;
	double  maxS, maxD;

	cout << "Enter size of the array: ";
	cin >> N;

	a = new point[N];

	maxD = 0;
	maxS = 0;

	cout << "Enter the coordinates of the points: \n";
	for (int i(0); i < N; i++) {
		cin >> a[i].x >> a[i].y;
	}

	for (int i(0); i < N; i++) {
		for (int j(i + 1); j < N; j++) {
			if (d(a[i], a[j]) > maxD) {
				maxD = d(a[i], a[j]);
				A = a[i];
				B = a[j];
			}
		}
	}

	for (int i(0); i < N; i++) {
		if (maxS < S(A, B, a[i])) {
			maxS = S(A, B, a[i]);
			C = a[i];
		}
	}

	cout << "Points forming the biggest triangle: \n";
	cout << A.x << " " << A.y << endl;
	cout << B.x << " " << B.y << endl;
	cout << C.x << " " << C.y << endl;

	system("pause");
	delete[] a;
	return 0;
}