#include <iostream>

using namespace std;

int main() {
	int K, N;

	cout << "Enter the day of year and the weekday of January 1st: ";
	cin >> K >> N;

	cout << "The number of weekday is " << (K + N - 1) % 7 << endl;

	system("pause");
	return 0;
}