#include <iostream>

using namespace std;

int main() {
	int a, b, c, t;

	cout << "Enter A, B and C: ";
	cin >> a >> b >> c;

	t = c;
	c = b;
	b = a;
	a = t;

	cout << "A = " << a << "\nB = " << b << "\nC = " << c << endl;

	system("pause");
	return 0;
}
	
	