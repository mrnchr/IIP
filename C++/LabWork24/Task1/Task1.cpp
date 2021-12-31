#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	bool isWord;
	int numWord;

	numWord = 0;
	isWord = 0;

	cout << "Enter the string: ";
	getline(cin, s);

	for (int i(0); i < s.length(); i++) {
		if (!isWord && s[i] != ' ') {
			isWord = 1;
			numWord++;
		}

		if (isWord && s[i] == ' ') {
			isWord = 0;
		}
	}

	cout << "The number of words in string is " << numWord << endl;

	system("pause");
	return 0;
}