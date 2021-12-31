#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int max, mid;

	cout << "Enter three numbers: ";	
	cin >> a >> b >> c;

	if (a > b) {
		if (a > c) {
			max = a;
			mid = b > c ? b : c;
		}
		else {
			max = c;
			mid = a;
		}
	}
	else if (b > c) {
		max = b;
		mid = a > c ? a : c;
	}
	else {
		max = c;
		mid = b;
	}

	cout << "Answer: " << mid + max << endl;

	system("pause");
	return 0;
}