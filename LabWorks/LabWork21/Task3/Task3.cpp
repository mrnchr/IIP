#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M, N, * a, x, ans, index;

	cout << "������� ������ ������� (��� ����� ����� ������): ";
	cin >> M >> N;

	a = new int[N];

	cout << "��������� �������\n";

	for (int i(0); i < M; i++) {
		cout << "������� " << i + 1 << " ������ �������: ";
		for (int j(0); j < N; j++) {
			a[j] = i == 0 ? 1 : a[j];
			cin >> x;
			a[j] *= x;
		}
	}

	ans = a[0];
	index = 0;

	for (int i(1); i < N; i++) {
		if (ans > a[i]) {
			ans = a[i];
			index = i;
		}
	}

	cout << "������������ ��������� " << index + 1 << " ������� ����� " << ans << " � �������� ����������\n";

	system("pause");
	delete[] a;
	return 0;
}