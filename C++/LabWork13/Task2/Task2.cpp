#include <iostream>

using namespace std;

int main() {
	int N;
	double mult, k = 1.1;

	cout << "Enter the number N: ";
	cin >> N;

	mult = 1;

	for (int i(0); i < N; i++) {
		mult *= k;
		k += 0.1;
	}

	cout << "Answer: " << mult << endl;
	
	system("pause");
	return 0;
}