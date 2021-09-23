#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Enter A and B separated by space: ";
	cin >> a >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "A = " << a << "\nB = " << b << endl;

	system("pause");
	return 0;
}

