#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, temp;
	int min, numSym;

	numSym = 0;
	temp = "";
	min = 10000;

	cout << "Enter the string: ";
	getline(cin, s);

	for (int i(0); i < s.length(); i++) {
		if (s[i] == ' ') {
			temp = "";
			if (numSym < min && numSym != 0)
				min = numSym;
			numSym = 0;
		}
		else {
			temp += s[i];
			numSym++;
		}
	}

	if (numSym < min && numSym != 0)
		min = numSym;

	cout << "The length of the smallest word in the string is " << min << endl;

	system("pause");
	return 0;
}