#include <iostream> 

using namespace std;

int main() {
	int a;

	cout << "Enter the number: ";
	cin >> a;

	a = a % 100 * 10 + a / 100;

	cout << "Answer: " << a << endl;

	system("pause");
	return 0;
}