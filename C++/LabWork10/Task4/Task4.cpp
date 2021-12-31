#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cout << "Enter the number: ";
	a = getchar();
	b = getchar();
	c = getchar();

	cout << (a < b&& b < c || a > b&& b > c ? "Yes" : "No") << endl;

	system("pause");
	return 0;
}