#include <iostream>

using namespace std;

double PowerA3(double A) {
	double B;
	B = A * A * A;
	return B;
}

int main() {
	double input[5];
	double output[5];

	cout << "Enter five numbers: ";
	for (int i(0); i < 5; i++) {
		cin >> input[i];
		output[i] = PowerA3(input[i]);
	}
	cout << "Let's find third extent of these numbers\n";
	for (int i(0); i < 5; i++) {
		cout << "For number " << input[i] << " is " << output[i] << endl;
	}

	system("pause");
	return 0;
}