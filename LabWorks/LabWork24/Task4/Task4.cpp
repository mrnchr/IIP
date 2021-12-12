#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

bool IsVowel(char ch) 
{
	char a[10] = { 'à', 'å', '¸', 'è', 'î', 'ó', 'û', 'ý', 'þ', 'ÿ' };

	for (int i(0); i < 10; i++) {
		if (a[i] == int(ch)) {
			return true;
		}
	}

	return false;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string s;
	int count;

	count = 0;

	cout << "Enter the string: ";
	getline(cin, s);

	for (int i(0); i < s.length(); i++) {
		count += IsVowel(s[i]);
	}

	cout << "There are " << count << " vowels in this sentence" << endl;

	system("pause");
	return 0;
}