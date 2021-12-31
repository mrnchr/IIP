#include <iostream>

using namespace std;

int main() {
	double S = 1000;
	double p;
	int k = 0;

	cout << "Initial amount in the bank is " << S << endl;
	cout << "Enter the percent (0 < P < 25): ";
	cin >> p;
	
	while (S < 1100) {
		S += S * p / 100;
		k++;
	}

	cout << "After " << k << " months the amount in the bank will be more than 1100 and equal " << S << endl;

	system("pause");
	return 0;
}