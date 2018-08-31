// 1295 Бред
// http://acm.timus.ru/problem.aspx?space=1&num=1295
#include <iostream>

using namespace std;

// (1^n + 2^n + 3^n + 4^n) mod 10 == 0 если в конце один ноль
// (1^n + 2^n + 3^n + 4^n) mod 100 == 0 если в конце два нуля
//
// (1^n + 2^n + 3^n + 4^n) mod 10 =>
// (1 + (2^n mod 10) + (3^n mod 10) + (4^n mod 10)) mod 10
//
// Например разложить (4^n mod 10) можно как:
// (((4 mod 10) * 4) mod 10) * 4) mod 10  ... n раз
// т.е. сначала mod 10, потом * 4 и все это n раз

int main() {
  int a[4];
  int N;
  // Ввод числа n
  cin >> N;

  for (int m = 100; m >= 10; m /= 10) {
    // Заполняем массив единицами
    fill_n(a, 4, 1);
    for (int i = 0; i < N; i++)
      for (int j = 0; j < 3; j++)
        a[j] = (a[j] * (j + 2)) % m;  // Самая хитрожопая часть

    // Итог
    int sum = (1 + a[0] + a[1] + a[2]) % m;
    // Проверка на кол-во нулей
    if (!sum && m == 100) {
      cout << 2;
      return 0;
    }
    if (!sum && m == 10) {
      cout << 1;
      return 0;
    }
  }
  // Ничего не получилось. Значит и нулей нет
  cout << 0;
  return 0;
}