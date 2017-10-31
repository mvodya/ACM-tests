// http://acm.timus.ru/problem.aspx?space=1&num=1319
#include <iostream>

using namespace std;

int n;       // ������ �����
int **shelf; // ���� �����, ������� ����� ���������

int main() {
	// �������� ������ �����
	scanf_s("%d", &n);

	// �������� ������ �����
	shelf = new int *[n];
	for (size_t i = 0; i < n; i++)
	{
		shelf[i] = new int[n];
	}

	// ���������� ����� (������ �����)
	int a = 0;
	for (size_t i = n; i > 0; i--)
	{
		for (size_t j = 0; j <= n - i; j++)
		{
			a++;
			shelf[j][i + j - 1] = a;
		}
	}
	// ���������� ������ ����� �����
	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 0; j < n - i; j++)
		{
			a++;
			shelf[i + j][j] = a;
		}
	}

	// ������� �����
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			printf("%d ", shelf[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}