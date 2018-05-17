// 1876 Утро сороконожки
// http://acm.timus.ru/problem.aspx?space=1&num=1876
#include <iostream>

using namespace std;

const int SLIPPERS = 40;  // Количество ног у сороконожки (воу)
int leftSlippers, rightSlippers;  // Количество тапок (левых, правых)

int main() {
  // Ввод данных
  scanf_s("%d %d", &leftSlippers, &rightSlippers);

  int a, b;
  // Ищем наихудшие случаи (их может быть 2)
  a = SLIPPERS + 2 * rightSlippers;  // Выбираются только правые тапочки (пока
                                     // они не закончатся) + 40 левых тапочек
  b = 2 * leftSlippers + (SLIPPERS - 1);
  // Выбираются 39 правых тапочек, потом выбираются все левые тапочки,
  // затем отыскивается последняя правая тапочка

  // Ответ, выводим наибольший
  if (a > b)
    printf("%d", a);
  else
    printf("%d", b);

  system("pause");
  return 0;
}