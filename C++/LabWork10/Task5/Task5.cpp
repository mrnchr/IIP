#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;

	cout << "Enter the number: ";
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();

	cout << (a == d && b == c ? "Yes" : "No") << endl;

	system("pause");
	return 0;
}