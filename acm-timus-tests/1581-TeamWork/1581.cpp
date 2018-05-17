// 1581 Работа в команде
// http://acm.timus.ru/problem.aspx?space=1&num=1581
#include <iostream>
#include <string>

using namespace std;

int n;
int* numbers;
string buffer;

int main() {
  scanf_s("%d", &n);  // Количество цифр
  numbers = new int[n];  // выделяем память массиву с цифрами

  cin.clear();                // Чистим буфер
  cin.ignore(INT_MAX, '\n');  // Отбрасываем до новой строки
  getline(cin, buffer);       // Получаем строку с цифрами

  // Обрабатываем строку с цифрами и вставляем ее в массив
  string strbuf;
  int next = 0;
  for (size_t i = 0; i <= buffer.length(); i++) {
    if (buffer[i] != ' ') {
      strbuf += buffer[i];
    }
    if (buffer[i] == ' ' || buffer.length() == i) {
      numbers[next] = atoi(strbuf.c_str());
      next++;
      strbuf.clear();
    }
  }

  int last = numbers[0], count = 1;
  for (size_t i = 1; i <= n; i++) {
    if (last == numbers[i]) {
      count++;
    }  // Подсчет количества цифр
    else {
      // Вывод ответа
      printf("%d %d ", count, last);
      count = 1;
      last = numbers[i];
    }
  }

  system("pause");
  return 0;
}