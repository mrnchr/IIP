#include <iostream>

using namespace std;

int main() {
	double price;

	cout << "Enter the price of 1 kg of sweets: ";
	cin >> price;

	for (double i(0.1); i <= 1; i+=0.1) {
		cout << i <<  " kg of sweets costs " << i * price << " rubbles\n";
	}

	system("pause");
	return 0;
}