#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M, N, K, * a;
	int sum = 0;
	int mult = 1;

	cout << "������� ������ ������� (��� ����� ����� ������): ";
	cin >> M >> N;

	a = new int[M * N];

	cout << "��������� ������� �������\n";
	for (int i(0); i < M; i++) {
		cout << "������� " << i + 1 << " ������ �������: ";
		for (int j(0); j < N; j++) {
			cin >> a[i * N + j];
		}
	}

	cout << "������� ����� ����� (����� ������ �������): ";
	cin >> K;

	K--;

	for (int i(N* K); i < N * (K + 1); i++) {
		sum += a[i];
		mult *= a[i];
	}

	cout << "����� " << K + 1 << " ������ ����� " << sum << endl;
	cout << "����������� " << K + 1 << " ������ ����� " << mult << endl;

	system("pause");
	delete[] a;
	return 0;
}