#include <iostream>

using namespace std;

int main() {
	int a;

	cout << "Enter the number: ";
	cin >> a;

	a = a / 10 + a % 10 * 10;

	cout << "Answer: " << a << endl;

	system("pause");
	return 0;
}