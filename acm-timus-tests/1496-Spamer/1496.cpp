// 1496. Спамер
// http://acm.timus.ru/problem.aspx?space=1&num=1496

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;  // Количество команд за 10 минут
struct team {
  string name;      // Название
  bool spamer = 0;  // Это спамер?
  team(string n) { name = n; }
};
vector<team> teams;  // Массив команд

int main() {
  // Ввод количества команд
  cin >> n;

  // Ввод названия команд
  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    // Поиск или добавление команды в стек
    bool spamer = false;
    for (auto& t : teams)
      if (t.name == name) t.spamer = spamer = true;  // Это спамер!
    // Добавление команды
    if (!spamer) teams.push_back(team(name));
  }

  // Вывод команд спамера
  for (auto& t : teams)
    if (t.spamer) cout << t.name << endl;
  return 0;
}