// http://acm.timus.ru/problem.aspx?space=1&num=1319
#include <iostream>

using namespace std;

int n;       // Размер полки
int **shelf; // Сама полка, которую будем заполнять

int main() {
	// Получаем размер полки
	scanf_s("%d", &n);

	// Выделяем память полке
	shelf = new int *[n];
	for (size_t i = 0; i < n; i++)
	{
		shelf[i] = new int[n];
	}

	// Генерируем полку (первую часть)
	int a = 0;
	for (size_t i = n; i > 0; i--)
	{
		for (size_t j = 0; j <= n - i; j++)
		{
			a++;
			shelf[j][i + j - 1] = a;
		}
	}
	// Генерируем вторую часть полки
	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 0; j < n - i; j++)
		{
			a++;
			shelf[i + j][j] = a;
		}
	}

	// Выводим ответ
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