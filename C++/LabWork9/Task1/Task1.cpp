#include <iostream>

using namespace std;

int main() {
	int N;

	cout << "Enter the number of second: ";
	cin >> N;

	cout << N % 60 << " sec have passed since the last minute\n";

	system("pause");
	return 0;
}