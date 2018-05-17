#include <iostream>

using namespace std;

const int RANGE = 6;  // Минимальное расстояние

// Функция минимального значения
double dmin(double a, double b) { return (a < b) ? a : b; }

int main() {
  int n;
  double a = 0, min = 1001, m = 1000 * 1000 + 1;
  double buffer[RANGE];
  // Буфер позволяет гарантированно работать с числами, отдаленными
  // на заданный RANGE

  cin >> n;  // Ввод количества элементов
  for (int i = 0; i < n; i++) {  // Чтение элементов
    cin >> a;
    if (i < 6) {
      buffer[i % RANGE] = a;  // Записываем в буфер первые RANGE цифр
    } else {
      min = dmin(min, buffer[i % RANGE]);  // Минимальное значение
      m = dmin(m, a * min);   // Минимальное произведение
      buffer[i % RANGE] = a;  // Обновляем буфер
      // Т.е. на удалинии в 6 мин (и более) будет искаться минимальное
      // число и проводится с ним произведение
    }
  }

  cout << m << endl;  // Ответ

  return 0;
}