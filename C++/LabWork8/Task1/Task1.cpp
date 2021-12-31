#include <iostream>

using namespace std;

int main() {
	int size;

	cout << "Enter the file size: ";
	cin >> size;

	cout << "The file size is " << size / 1024 << " kb\n";

	system("pause");
	return 0;
}