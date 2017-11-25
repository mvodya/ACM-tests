// http://acm.timus.ru/problem.aspx?space=1&num=1327
#include <iostream>

using namespace std;

int a, b, c;

int main() {
	// Ввод данных
	scanf_s("%d %d", &a, &b);

	// Вычисляем
	c = (b - a) + (a % 2) + (b % 2);
	c /= 2;

	// Ответ
	printf("%d", c);

	system("pause");
	return 0;
}