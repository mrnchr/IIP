#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M, N, index, x;
	bool* is_odd;

	index = 0;

	cout << "������� ������ ������� (��� ����� ����� ������): ";
	cin >> M >> N;

	is_odd = new bool[N];

	cout << "��������� �������\n";
	for (int i(0); i < M; i++) {
		cout << "������� " << i+1 << " ������ �������: ";
		for (int j(0); j < N; j++) {
			is_odd[j] = i == 0 ? 1 : is_odd[j];

			cin >> x;
			is_odd[j] *= x % 2;
		}
	}

	for (int i(0); i < N; i++) {
		if (is_odd[i] == 1) {
			index = i;
			break;
		}
	}

	cout << "�������, ���������� ������ �������� ����� ��������� ��� �������: " << index + 1 << endl;

	system("pause");
	delete[] is_odd;
	return 0;
}