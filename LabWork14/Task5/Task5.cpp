#include <iostream>
using namespace std;

int NOD(int a, int b) {
	if (a == 0 || b == 0)
		return a + b;
	else if (a > b)
		return NOD(b, a%b);
	else return NOD(a, b%a);
}

int main() {
	int A, B;

	cout << "Enter numbers A and B: ";
	cin >> A >> B;

	int ans = NOD(A, B);

	cout << "GCD(A, B) = " << ans << endl;

	system("pause");
	return 0;
}