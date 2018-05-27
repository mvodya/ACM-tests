#include <iostream>

using namespace std;

int main() {
  int n;
  int m[8]{0};
  // Ввод количества цифр
  cin >> n;
  // Ввод и обработка цифр
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    // Распределяем по группам (по остатку от деления на 8)
    m[x % 8]++; 
  }

  int s = 0;
  // Подсчитываем ответ
  s += m[0] * (m[0] - 1) / 2;
  s += m[4] * (m[4] - 1) / 2;
  for (int i = 1; i < 4; i++)
    s += m[i] * m[8 - i];
  
  cout << s;

  return 0;
}