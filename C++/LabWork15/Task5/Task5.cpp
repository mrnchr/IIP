#include <iostream>

using namespace std;

double Fact2(double N) {
	if (N < 2)
		return 1;
	else
		return N * Fact2(N - 2);
}

int main() {
	int n;

	cout << "Enter the number N: ";
	cin >> n;

	cout << "N!! = " << Fact2(n) << endl;

	system("pause");
	return 0;
}