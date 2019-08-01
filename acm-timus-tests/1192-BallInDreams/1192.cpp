// 1192 Мячик во сне
// http://acm.timus.ru/problem.aspx?space=1&num=1192
#include <iostream>

using namespace std;

const double G = 10;  // Ускорение свободного падения
const double PI = 3.1415926535;

// Расчет баллистического полета (длинны X)
inline double reboundLength(int v, int a) {
  return (((double)v) * ((double)v) * (sin(a * PI * 2 / 180.))) / G;
}

int main() {
  int v, a;  // v - скорость, a - угол броска
  double k;  // ко-эф уменьшения кинетической энергии

  // Ввод данных
  scanf("%d %d %lf", &v, &a, &k);

  // Вычисление
  double r = reboundLength(v, a) / (1. - (1. / k));

  // Ответ
  printf("%.2lf", r);
  return 0;
}