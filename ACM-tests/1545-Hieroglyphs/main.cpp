// http://acm.timus.ru/problem.aspx?space=1&num=1545
#include <iostream>
#include <string>

using namespace std;

int n;            // ���������� ����������
char letter;      // �����, ��������� �����
char *dictionary; // ������� ���� ����������

int main() {
	// ���� ���������� ���������� �������
	cin >> n;
	// �������� ������ �������
	dictionary = new char[n * 2];

	// ���� ����������
	for (size_t i = 0; i < n * 2; i++)
	{
		cin >> dictionary[i];
	}

	// ���� �����
	cin >> letter;

	// ����� ��������� ���������� (�����)
	for (size_t i = 0; i < n; i++)
	{
		if (letter == dictionary[i * 2])
			cout << dictionary[i * 2] << dictionary[i * 2 + 1] << endl;
	}

	system("pause");
	return 0;
}