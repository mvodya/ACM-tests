#include <iostream>
#include <string>

using namespace std;

int *bags;  // Ячейки, в них записано время освобождения ячейки
string history;  // Вывод ответа

int main() {
  int n, m;
  scanf("%d", &n);      // Ввод числа пассажиров
  scanf("%d", &m);      // Ввод числа ячеек
  bags = new int[m]();  // Выделяем память массиву
  // Перебор и чтение пассажиров
  for (int i = 0; i < n; i++) {
    char name[20];
    int s1, s2, e1, e2;
    scanf("%s %d:%d %d:%d", &name, &s1, &s2, &e1, &e2);
    s1 = s1 * 60 + s2;  // Переводим время в минуты
    e1 = e1 * 60 + e2;  // s - время сдачи, e - время освобождения
    // Перебираем все ячейки
    for (int j = 0; j < m; j++) {
      if (bags[j] <= s1) {  // Время начала больше времени освобождения
        bags[j] = e1;  // Записываем новое время освобождения
        history.append(name);  // Записи имени
        history.append(" " + to_string(j + 1) + "\n");  // + номер ячейки
        break;
      }
      // Если не нашли свободной ячейки - ничего не делаем, пассажир уходит
    }
  }

  printf("%s", history.c_str());  // Вывод ответа
  return 0;
}