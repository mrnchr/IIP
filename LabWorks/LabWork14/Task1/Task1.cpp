#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Enter two integer positive numbers A and B: ";
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		for (int j(0); j < i; j++) {
			cout << i;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}