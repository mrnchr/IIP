#include <iostream> 
using namespace std;

int main() {
	double A, t;
	int N;
	double sum;
	sum = 0;

	cout << "Enter numbers A and N: ";
	cin >> A >> N;

	t = 1;

	for (int i(0); i < N; i++) {
		sum += t;
		t *= -A;
	}

	cout << "Answer: " << sum << endl;

	system("pause");
	return 0;
}