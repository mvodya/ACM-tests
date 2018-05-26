#include <iostream>

using namespace std;

int main() {
  int n;             // Всего цифр
  int even = 0,      // Четных
      fourteen = 0,  // Кратных 14
      seven = 0;     // Кратных 7

  // Ввод количества цифр
  cin >> n;
  // Ввод и обработка цифр
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 14 == 0)  // Кратно 14
      fourteen++;
    else if (x % 7 == 0)  // Кратно 7
      seven++;
    else if (x % 2 == 0)  // Четное
      even++;
  }

  int s;
  s = (n * (n - 1) / 2) -  // Кол-во пар
      (fourteen * (n - fourteen)) -  // 14 с остальными не кратными 14
      (fourteen * (fourteen - 1) / 2) -  // 14 с другими кратными 14
      (even * seven);                    // 7 и четные
  // Ответ
  cout << s;

  return 0;
}