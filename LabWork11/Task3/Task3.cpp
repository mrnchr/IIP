#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a1, a2, b1, b2, c1, c2;
	double ab, ac;

	cout << "Enter the coordinates of point A: ";
	cin >> a1 >> a2;

	cout << "Enter the coordinates of point B: ";	
	cin >> b1 >> b2;

	cout << "Enter the coordinates of point C: ";
	cin >> c1 >> c2;

	ab = sqrt(pow(abs(a1 - b1),2) + pow(abs(a2 - b2), 2));
	ac = sqrt(pow(abs(a1 - c1), 2) + pow(abs(a2 - c2), 2));

	if (ab < ac) {
		cout << "The point B is close by A\nThe lenght AB is equal to " << ab << endl;
	}
	else {
		cout << "The point C is close by A\nThe lenght AC is equal to " << ac << endl;
	}

	system("pause");
	return 0;
}