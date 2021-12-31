#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	cout << "Enter the string: ";
	cin >> s;

	cout << "Symbols of the entered string by spaces: ";
	for (int i(0); i < s.length(); i++) {
		cout << s[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}