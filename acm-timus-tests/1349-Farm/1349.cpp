// 1349 Ферма
// http://acm.timus.ru/problem.aspx?space=1&num=1349
#include <iostream>

using namespace std;

int main() {
  int n;
  // Ввод числа n
  scanf("%d", &n);

  // Всего есть два варианта ответа для a^n+b^n=c^n
  // По Великой теореме Ферма такое уравнение не имеет решений
  // для ненулевых целых a, b, c при n > 2
  // Т.е. мы во всех иных случаях, кроме n = 1 или n = 2 выдаем
  // ответ -1
  switch (n) {
    case 1:
      printf("1 2 3");
      break;
    case 2:
    printf("3 4 5");
      break;
    default:
      printf("-1");
  }
  return 0;
}