#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	int k = 1;
	int square = 0;
	string s = "1";

	cout << "Enter the number N: ";
	cin >> N;

	for (int i(0); i < N; i++, k += 2) {
		square += k;

		cout << s << " = " << square << endl;
		s += " + " + to_string(k);
	}

	cout << "N * N = " << square << endl;

	system("pause");
	return 0;
}