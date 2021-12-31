#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, ans, temp, t;
	int numDir;

	numDir = 0;
	temp = "";
	ans = "";

	cout << "Enter the string: ";
	cin >> s;

	for (int i(0); i < s.length(); i++) {
		if (s[i] == '\\') {
			numDir++;
			ans = temp;
			temp = "";
		}
		else {
			temp += s[i];
		}
	}

	if (numDir > 1)
		cout << "File is in the directory " << ans << endl;
	else
		cout << "\\\n";

	system("pause");
	return 0;
}