#include <iostream>

using namespace std;

int main() {
	int max, k1, k2, a, b, c;

	cout << "Enter the three number: ";
	cin >> a >> b;

	//Finding the cathets and hypotenuse
	max = a > b ? a, k1 = b : b, k1 = a;
	cin >> c;
	
	if (c > max) {
		k2 = max;
		max = c;
	}
	else k2 = c;

	cout << (k1 * k1 + k2 * k2 == max * max ? "Yes" : "No") << endl;

	system("pause");
	return 0;
}