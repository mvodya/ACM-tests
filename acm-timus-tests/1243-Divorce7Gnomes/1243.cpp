// 1243 Развод семи гномов
// http://acm.timus.ru/problem.aspx?space=1&num=1243
#include <iostream>
#include <string>

using namespace std;

// Числа для проверки признака делимости на 7 (признак Паскаля)
// https://ru.wikipedia.org/wiki/Признак_Паскаля#Признак_делимости_на_7
int digits[]{1, 3, 2, 6, 4, 5};
// Количество гномов
int const GNOMES = 7;

int main() {
  string n = "";
  int result = 0, a = 0;

  // Ввод данных
  cin >> n;

  // Разбираем число на запчасти
  // проверям делимость по призкнаку Паскаля
  for (int i = n.size() - 1; i >= 0; i--) {
    result += digits[a % 6] * (n[i] - '0');
    a++;
  }

  // Выковыриваем остаток (если есть)
  result %= 7;

  // Ответ
  printf("%d", result);
  return 0;
}