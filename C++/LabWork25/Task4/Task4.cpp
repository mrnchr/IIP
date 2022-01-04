#include <iostream>
#include <fstream>

using namespace std;

void Rewrite(ifstream& fiNew, ofstream& foOld) {

	char ch;

	while (!fiNew.eof()) {
		ch = fiNew.get();

		if (!fiNew.eof())
			foOld << ch;
	}
}

bool Check(ifstream& fi, ofstream& fo) {
	if (!fi || !fo) {
		system("cls");
		if (!fi)
			cout << "New file is not found!\n";
		if (!fo)
			cout << "Old file is not found!\n";
		system("pause");
		return 0;
	}

	return 1;
}

int main() {
	const string nameFile = "Task4.txt";
	const string workFile = '$' + nameFile;
	ifstream fi(nameFile);
	ofstream fo(workFile);

	if (!Check(fi, fo))
		return -1;

	char x, y;

	y = fi.get();

	while (!fi.eof()) {
		x = fi.get();

		if (!(x == y && x == ' ')) {
			fo << y;

			y = x;
		}
	}

	fi.close();
	fo.close();

	fi.open(workFile);
	fo.open(nameFile);

	Rewrite(fi, fo);

	fi.close();
	fo.close();

	if (remove(&workFile[0])) {
		system("cls");
		cout << "Error! File is not deleted!\n";
		system("pause");
		return -2;
	}

	cout << "Successfully\n";

	system("pause");
	return 0;
}