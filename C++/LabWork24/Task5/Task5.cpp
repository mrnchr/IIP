#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, ans, temp;

	cout << "Enter the file path: ";
	cin >> s;

	for (int i(s.length() - 1); i >= 0; i--) {
		if(s[i] == '/' || s[i] == '\\')
			break;

		temp = s[i];
		ans = temp + ans;

		if (s[i] == '.')
			ans = "";
	}

	cout << "Filename is " << ans << endl;

	system("pause");
	return 0;
}