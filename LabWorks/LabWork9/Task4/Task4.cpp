#include <iostream>

using namespace std;

int main() {
	int a, b, c, K, dS;

	cout << "Enter A, B and C: ";
	cin >> a >> b >> c;

	K = (a / c) * (b / c);

	dS = a * b - K * c * c;

	cout << "The number of squares is " << K << "\nS = " << dS << endl;

	system("pause");
	return 0;
}