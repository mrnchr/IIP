#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const string nameFile = "Task5.txt";

	ifstream fi(nameFile);

	int redLine, numSpace;
	char x;
	bool isParagraph = false;

	numSpace = 0;
	redLine = 0;

	while (!fi.eof()) {
		x = fi.get();

		if (x == ' ') {
			if(!isParagraph)
				numSpace++;
		}
		else if (x == '\n') {
			numSpace = 0;
			isParagraph = false;
		}
		else {
			if (numSpace == 5) {
				isParagraph = true;
				redLine++;
				numSpace = 0;
			}
		}
	}

	cout << "The number of paragraphs is equal " << redLine << endl;

	system("pause");
	return 0;
}