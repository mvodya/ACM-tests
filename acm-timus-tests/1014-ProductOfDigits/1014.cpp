// 1014 Произведение цифр
// http://acm.timus.ru/problem.aspx?space=1&num=1014
#include <iostream>
#include <stack>

using namespace std;

int main() {
  // Ввод
  int n;
  cin >> n;

  // Защита от 0 и 1
  if (n == 0) {
    cout << "10";
    return 0;
  } else if (n == 1) {
    cout << "1";
    return 0;
  }

  bool finded = true;
  stack<int> ans;

  // Делим число на составляющее
  while (finded && n != 1) {
    finded = false;
    for (int i = 9; i > 1; i--) {
      if (!(n % i)) {
        ans.push(i);
        n /= i;
        finded = true;
        break;
      }
    }
  }

  // Ответ
  if (finded) {
    // Вывод ответа наоборот
    while (!ans.empty()) {
      cout << ans.top();
      ans.pop();
    }
  } else
    // Нет ответа
    cout << "-1";

  return 0;
}