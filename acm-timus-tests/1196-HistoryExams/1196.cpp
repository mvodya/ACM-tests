// 1196 Экзамен по истории
// http://acm.timus.ru/problem.aspx?space=1&num=1196
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long int> teacher, pupil;

int main() {
  int n, m, answer = 0;
  // Ввод списка учителя
  scanf("%d", &n);
  teacher.resize(n);
  for (int i = 0; i < n; i++) scanf("%lld", &teacher[i]);
  // Ввод списка ученика
  scanf("%d", &m);
  pupil.resize(m);
  for (int i = 0; i < m; i++) scanf("%lld", &pupil[i]);

  // Сортировка массивов
  sort(teacher.begin(), teacher.end());
  sort(pupil.begin(), pupil.end());

  // Быстрая проверка сортированного массива на совпадения
  int i = 0, j = 0;
  while (i <= n && j <= m) {
    if (teacher[i] == pupil[j]) {
      answer++;  // Совпадение
      j++;  // Смещаем границу в массиве ученика
    }
    // Сразу смещаем границы, если элементы не совпадают
    if (teacher[i] < pupil[j]) i++;
    if (teacher[i] > pupil[j]) j++;
  }

  // Ответ
  printf("%d", answer);

  return 0;
}