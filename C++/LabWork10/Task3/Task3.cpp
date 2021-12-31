#include <iostream>

using namespace std;

int main() {
	int a;

	cout << "Enter the number: ";
	cin >> a;

	cout << (a >= 10 && a < 100 && a % 2 == 0 ? "Yes" : "No") << endl;

	system("pause");
	return 0;
}