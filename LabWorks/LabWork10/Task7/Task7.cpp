#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;

	if (a + b > c) {
		if (b + c > a) {
			if (a + c > b)
				cout << "Yes" << endl;
		}
	}
	else cout << "No" << endl;

	system("pause");
	return 0;
}