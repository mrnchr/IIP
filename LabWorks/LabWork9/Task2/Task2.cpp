#include <iostream>

using namespace std;

int main() {
	int c, K;

	cout << "Enter the day: ";
	cin >> K;

	cout << "The weekday is " << K % 7 << endl;

	system("pause");
	return 0;
}