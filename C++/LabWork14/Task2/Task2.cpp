#include <iostream>

using namespace std;

int main() {
	int a, b;
	int ost;

	cout << "Enter positive numbers A and B: ";
	cin >> a >> b;

	ost = a;
	while (ost >= b) {
		ost -= b;
	}

	cout << "The length of the remained part is " << ost << endl;

	system("pause");
	return 0;
}