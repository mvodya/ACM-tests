// 1991 Битва у болота
// http://acm.timus.ru/problem.aspx?space=1&num=1991
#include <iostream>
#include <string>

using namespace std;

int n, k, *bombooms;
int unused, surrvied;

int main() {
  scanf_s("%d %d\n", &n, &k);

  bombooms = new int[n];
  string input, buffer = "";
  int c = 0;
  getline(cin, input);

  // Косячный ввод данных
  for (char a : input) {
    if (a == ' ') {
      bombooms[c] = stoi(buffer);
      buffer.clear();
      c++;
    } else {
      buffer += a;
    }
  }
  bombooms[c] = stoi(buffer);

  // Не менее косячная обработка данных
  for (size_t i = 0; i < n; i++) {
    int a = k - bombooms[i];
    if (a < 0) {
      unused += abs(a);
    } else {
      surrvied += a;
    }
  }

  // Ответ
  printf("%d %d", unused, surrvied);

  system("pause");
  return 0;
}