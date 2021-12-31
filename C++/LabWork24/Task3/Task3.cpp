#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, temp;
	char firstLetter;
	bool isWord, isFirst;

	isWord = 0;
	temp = "";
	isFirst = 0;

	cout << "Enter the string: ";
	getline(cin, s);

	for (int i(0); i < s.length(); i++) {
		if (!isWord && s[i] != ' ') {
			isWord = 1;
			firstLetter = s[i];
			isFirst = 1;
		}
		if (isWord && s[i] == ' ') {
			isWord = 0;
		}

		if (s[i] == firstLetter && isWord && !isFirst)
			temp += '.';
		else
			temp += s[i];

		isFirst = 0;
	}

	cout << "Modified string: " << temp << endl;

	system("pause");
	return 0;
}