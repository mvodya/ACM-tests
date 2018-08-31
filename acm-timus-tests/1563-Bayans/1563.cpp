// 1563 Баяны
// http://acm.timus.ru/problem.aspx?space=1&num=1563
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Массив магазинов, которые посетили
vector<string> shops;

int main() {
  int n;
  // Количество магазинов
  scanf_s("%d\n", &n);

  // Записываем посещенные магазины
  for (int i = 0; i < n; i++) {
    string shop;
    getline(cin, shop);
    // Проверяем, был ли такой магазин
    if(find(shops.begin(), shops.end(), shop) == shops.end()) {
      // Записываем, если нет совпадений
      shops.push_back(shop);
    }
  }

  // Ответ
  cout << n - shops.size();
  return 0;
}