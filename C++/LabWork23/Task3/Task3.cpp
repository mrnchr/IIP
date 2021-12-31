#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int count;

	count = 0;

	cout << "Enter the string: ";
	cin >> s;

	for (int i(0); i < s.length(); i++) {
		if (s[i] >= 97 && s[i] <= 122)
			count++;
	}

	cout << "In the entered string there are " << count << " uppercase Latin letter\n";


	system("pause");
	return 0;
}