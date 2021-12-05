#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, s0;
	int k, count;

	count = 0;
	k = 0;
	
	cout << "Enter the string: ";
	cin >> s;

	cout << "Enter another string larger than the previous one: ";
	cin >> s0;

	for (int i(0); i < s0.length(); i++) {
		if (s[k] != s0[i])
			k = 0;
		k += s[k] == s0[i];
		if (k == s.length()) {
			count++;
			k = 0;
		}
	}

	cout << "The string \"" << s << "\" is included in the string \"" << s0 << "\" " << count << " times\n";

	system("pause");
	return 0;
}