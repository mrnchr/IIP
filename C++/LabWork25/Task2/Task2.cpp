#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream fo;
	string nameFile;

	int N, K;

	cout << "Enter a filename where you want to write data down in: ";
	cin >> nameFile;

	cout << "Enter two numbers: ";
	cin >> N >> K;

	fo.open(nameFile + ".txt");

	for (int i(0); i < N; i++) {
		for (int j(0); j < K; j++) {
			fo << "*";
		}
		fo << endl;
	}

	cout << "Successfully\n";
	system("pause");
	return 0;
}