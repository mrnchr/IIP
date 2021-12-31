#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

double RingsS(double R1, double R2) {
	return M_PI * (R1 * R1 - R2 * R2);
}

int main() {
	double rings[3][2];
	double delS[3];

	cout << "Enter three pairs of internal and external radiuses of the ring\n";
	cout << "(the first number more than second one)\n";
	for (int i(0); i < 3; i++) {
		cout << "Enter the " << i + 1 << " pair of radiuses: ";
		cin >> rings[i][0] >> rings[i][1];
		delS[i] = RingsS(rings[i][0], rings[i][1]);
	}
	
	for (int i(0); i < 3; i++) {
		cout << "Square the " << i + 1 << " ring is equal " << delS[i] << endl;
	}

	system("pause");
	return 0;
}