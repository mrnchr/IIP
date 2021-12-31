#include <iostream>

using namespace std;

int main() {

	int a, b, c, t;

	cout << "Enter A, B and C separated by space: ";
	cin >> a >> b >> c;

	t = a;
	a = b;
	b = c;
	c = t;

	cout << "A = " << a << "\nB = " << b << "\nC = " << c << endl;

	system("pause");
	return 0;
}
