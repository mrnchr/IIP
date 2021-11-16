#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Enter A and B: ";
	cin >> a >> b;

	a == b ? a = 0, b = 0 : a > b ? b = a : a = b;

	cout << "A = " << a << ", B = " << b << endl;

	system("pause");
	return 0;
}