// 2100 Свадебный обед
// http://acm.timus.ru/problem.aspx?space=1&num=2100
#include <iostream>
#include <string>

#define DEVIL_NUMBER = 13

using namespace std;

int n, price = 200, cguest = 2;

int main() {
  scanf_s("%d", &n);

  // Чистка буффера
  cin.clear();
  cin.ignore(INT_MAX, '\n');

  string guest;
  for (size_t i = 0; i < n; i++) {
    bool plus = false;
    getline(cin, guest);
    // Проверяем на наличие дополнительного гостья
    for (size_t j = 0; j < guest.length(); j++) {
      if (guest[j] == '+') {
        plus = true;
        break;
      }
    }
    // Добавляем цену (и счет реальных людей)
    if (plus) {
      price += 200;
      cguest += 2;
    } else {
      price += 100;
      cguest++;
    }
  }

  // Добавляем манекен, если 13 человек
  if (cguest == 13) {
    price += 100;
  }

  // Ответ
  printf("%d", price);

  system("pause");
  return 0;
}