#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char C;
	int N;
	int index = 4;// 4 ����� ������������� ������������� ������� �� ������� �� 4
	char direction[4] = { '�', '�', '�', '�' };

	cout << "������� �������� ����������� ������ � �������: ";
	cin >> C >> N;

	for (int i(0); i < 4; i++) {
		if (direction[i] == C)
			index += i;
	}

	index += N;

	cout << "����������� ������: " << direction[index % 4] << endl;

	system("pause");
	return 0;
}