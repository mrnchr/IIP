#include <iostream>

using namespace std;

int main() {
	int N;	

	cout << "Enter N: ";
	cin >> N;

	for (int i(1); i < N*2; i += 2) {
		cout << i << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}