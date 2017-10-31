// http://acm.timus.ru/problem.aspx?space=1&num=1263
#include <iostream>

using namespace std;

int n = 0, m = 0;
int *candidates;

int main() {
	scanf_s("%d %d", &n, &m); // Читаем изначальные данные
	candidates = new int[n];  // Выделяем память массиву кандидатов

	// Забиваем значения (нулевые) в массив кандидатов
	for (size_t i = 0; i < n; i++) {
		candidates[i] = 0;
	}

	// Читаем голоса избирателей
	for (size_t i = 0; i < m; i++) {
		int a = 0;
		scanf_s("%d", &a);
		candidates[a - 1]++;
	}

	// Выводим ответ
	for (size_t i = 0; i < n; i++) {
		float rate = ((float)candidates[i] / m) * 100; // Переводим в проценты
		printf("%.2f%% \n", rate); // Ответ, два знака после запятой и знак %
	}

	system("pause");
	return 0;
}