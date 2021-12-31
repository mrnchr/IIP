#include <iostream>
#include <string>

using namespace std;

int main() {
	char x, c;
	string s, ans;
	ans = "";

	cout << "Enter the symbol: ";
	cin >> c;

	cout << "Enter the string: ";
	cin >> s;

	for (int i(0); i < s.length(); i++) {
		ans += s[i];
		if (s[i] == c) {
			ans += c;
		}
	}

	cout << "Let's double symbol \'" << c << "\' in the entered string\n";
	cout << "It will turn out: " << ans << endl;

	system("pause");
	return 0;
}