#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, ans;

	ans = "";

	cout << "Enter the string: ";
	getline(cin, s);

	for (int i(1); i >= 0; i--) {
		for (int j(i); j < s.length() / 2 + 1; j++) {
			ans += s[2 * j - i];
		}
	}

	cout << "The modified string: " << ans << endl;

	system("pause");
	return 0;
}