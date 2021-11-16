#include <iostream>

using namespace std;

int main () {
	int A, M;

	cout << "Enter A: ";
	cin >> A;

	M = A;

	for(int i(0);i < 3;i++) {
		M = M * M;
	}

	cout << "Answer: " << M << endl;
	
	system("pause");
	return 0;
}
