// 1837 Число Исенбаева
// http://acm.timus.ru/problem.aspx?space=1&num=1837
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Участник
struct member {
  string name;      // Имя
  int digit = 999;  // Число Исенбаева
  // Сравнение имен
  bool operator==(const member& m) { return name == m.name ? 1 : 0; }
  bool operator<(const member& m) { return name < m.name ? 1 : 0; }
  // Конструктор
  member(string n) : name(n) {}
};

// Массив со списком участников
vector<member> members;
// Номер чемпиона в массиве
int master = -1;

// Матрица смежности
vector<int> graph[301];

// Добавление ребра в графе
void addEdge(int u, int v) {
  if (find(graph[u].begin(), graph[u].end(), v) == graph[u].end())
    graph[u].push_back(v);
  if (find(graph[v].begin(), graph[v].end(), u) == graph[v].end())
    graph[v].push_back(u);
}

// Обход графа
void dfs(int a) {
  for (int e : graph[a]) {
    if (members[e].digit > members[a].digit) {
      members[e].digit = members[a].digit + 1;
      dfs(e);
    }
  }
}

int main() {
  // Ввод количества участников
  int n;
  cin >> n;
  members.reserve(n);

  // Ввод участников
  string name[3];
  for (int i = 0; i < n; i++) {
    // Ввод 3-х имен
    int id[3];
    for (int j = 0; j < 3; j++) {
      cin >> name[j];
      // Поиск участника
      auto m = find(members.begin(), members.end(), name[j]);
      if (m == members.end()) {
        // Добавление участника, если не существует
        id[j] = members.size();
        members.push_back(name[j]);
        // А вдруг это чемпион?..
        if (name[j] == "Isenbaev") master = id[j];
      } else {
        // Получение индекса, если существует
        id[j] = distance(members.begin(), m);
      }
    }
    // Запись в матрицу смежности
    for (int j = 0; j < 3; j++) {
      addEdge(id[j], id[(j + 1) % 3]);
      addEdge(id[j], id[(j + 2) % 3]);
    }
  }

  // Начинаем обход графа от чемпиона
  if (master != -1) {
    members[master].digit = 0;
    dfs(master);
  }

  // Сортировка участников
  sort(members.begin(), members.end());

  // Вывод ответа
  for (member m : members) {
    cout << m.name << " ";
    if (m.digit == 999)
      cout << "undefined\n";
    else
      cout << m.digit << endl;
  }
}