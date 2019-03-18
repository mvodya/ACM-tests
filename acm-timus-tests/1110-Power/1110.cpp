// 1110 Степень
// http://acm.timus.ru/problem.aspx?space=1&num=1110
#include <iostream>

using namespace std;

int main() {
  short int n, m, y;
  // Ввод чисел
  scanf("%d %d %d", &n, &m, &y);

  // Вычисление
  bool empty = true;
  for (int x = 0; x < m; x++) {
    // Запросто нам могут подкинуть (а конкретно в 6 тесте) ситуацию когда
    // m = 998 и n = 998. Собственно главная сложность всей задачи в этом и
    // кроется. Потому реализуем pow ручками (перебором) и применяем модуль по
    // ходу действия, чтобы не городить длинную арифметику, которая тут
    // однозначно не зачем.
    int r = 1;
    for (int i = 1; i <= n; i++)
      r = (r * x) % m;  // Возводим в степень и получаем модуль
    if (r == y) {        // Сравниваем
      printf("%d ", x);  // Ответ
      empty = false;
    }
  }
  if (empty) printf("-1");  // Если таких чисел нет выводим -1

  return 0;
}