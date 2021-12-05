#include <iostream>

using namespace std;

int main() {

	char c;

	cout << "Enter the symbol: ";
	cin >> c;

	cout << "According to ASCII table for symbol \'" << c << "\': " << endl;
	cout << "The previous symbol is \'" << char(c - 1) << "\'" << endl;
	cout << "The next symbol is \'" << char(c + 1) << "\'" << endl;

	system("pause");
	return 0;
}