// http://acm.timus.ru/problem.aspx?space=1&num=1100
#include <iostream>
#include <algorithm>

using namespace std;

// Структура команды
struct Team {
	int ID, solved;

	// Сравнение команд по кол-ву решеных задач
	bool operator<(const Team &x) const {
		return solved > x.solved;
	}
} *teams; // Объявляем указатель

int main() {
	int n;
	// Ввод количество команд
	scanf_s("%d", &n);

	teams = new Team[n];

	// Ввод команд
	for (size_t i = 0; i < n; i++)
		scanf_s("%d %d", &teams[i].ID, &teams[i].solved);

	// Сортируем команды
	stable_sort(teams, teams + n);

	// Выводим ответ
	for (size_t i = 0; i < n; i++)
		printf("%d %d\n", teams[i].ID, teams[i].solved);

	system("pause");
	return 0;
}