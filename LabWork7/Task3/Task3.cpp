#include <iostream>

using namespace std;

int main() {
	int X, A, Y;

	cout << "Enter X, A and Y separated by space: ";
	cin >> X >> A >> Y;

	cout << "1 kg of sweets costs " << (double)A / X << " rub\n";
	cout << Y << " kg of sweets cost " << (double)A / X * Y << " rub\n";

	system("pause");
	return 0;
}