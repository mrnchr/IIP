#include <iostream>

using namespace std;

int main() {
	int A, M, N;

	cout << "Enter A: " << endl;
	cin >> A;
	
	M = A;
	M = M * M;
	M = M * M;
	M = M * A;
	N = M;
	M = M * M;
	M = N * M;

	cout << "Answer: " << M << endl;

	system("pause");
	return 0;
}