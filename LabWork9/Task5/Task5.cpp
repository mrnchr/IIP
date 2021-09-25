#include <iostream>

using namespace std;

int main() {
	int N;

	cout << "Enter a year: ";
	cin >> N;

	N = (N - 1) / 100 + 1;

	cout << "This is " << N;

	//Output of the end depending on the century
	if (N / 10 != 1) {
		switch (N % 10) {
		case 1: cout << "st";
			break;
		case 2: cout << "nd";
			break;
		case 3: cout << "rd";
			break;
		default: cout << "th";
			break;
		}
	}
	else {
		cout << "th";
	}

	cout << " century\n";

	system("pause");
	return 0;
}