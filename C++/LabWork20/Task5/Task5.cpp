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
	point* a;
	int inA, inB, inC;
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
				inA = i;
				inB = j;
			}
		}
	}

	for (int i(0); i < N; i++) {
		if (maxS < S(a[inA], a[inB], a[i])) {
			maxS = S(a[inA], a[inB], a[i]);
			inC = i;
		}
	}

	cout << "Points forming the biggest triangle: \n";
	
	if (inA > inB)
		swap(inA, inB);
	if (inC < inB)
		swap(inC, inB);
	if (inC < inA)
		swap(inC, inA);
	
	cout << a[inA].x << " " << a[inA].y << endl;
	cout << a[inB].x << " " << a[inB].y << endl;
	cout << a[inC].x << " " << a[inC].y << endl;

	system("pause");
	delete[] a;
	return 0;
}