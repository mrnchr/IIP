#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cout << "Enter A, B and C: ";
	cin >> a >> b >> c;

	cout << (a < b&& b < c ? "Yes" : "No") << endl;

	system("pause");
	return 0;
}