#include <iostream>

using namespace std;

int Sign(double X) {
	return X == 0 ? 0 : -(X < 0) + (X > 0);
}

int main() {
	double A, B;

	cout << "Enter numbers A and B: ";
	cin >> A >> B;

	cout << "Answer: " << Sign(A) + Sign(B) << endl;

	system("pause");
	return 0;
}