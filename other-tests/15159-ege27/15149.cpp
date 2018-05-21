#include <iostream>

using namespace std;

int main() {
  int n;         // Кол-во цифр
  int m[10]{0};  // Кол-во цифр с нужным остатком (разрядом)

  // Ввод количества цифр
  cin >> n;
  // Ввод и обработка цифр
  for (int i = 0; i < n; i++) {
    int a, c;
    cin >> a;    // Получаем число
    c = a % 10;  // Получаем последний разряд
    m[c]++;      // Подсчитываем количество с таким разрядом
  }

  int s = 0;
  s += ((float)(m[0]) / 2) * (m[0] - 1); // Подсчитываем пары 0/0
  s += ((float)(m[5]) / 2) * (m[5] - 1); // Подсчитываем пары 5/5
  for (int i = 1; i < 6; i++)
    s += m[i] * m[10 - i];  // Подсчитываем пары 1/9, 2/8, 3/7,..., 6/4

  // Ответ
  cout << s << endl;

  return 0;
}