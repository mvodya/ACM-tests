// 1893 A380
// http://acm.timus.ru/problem.aspx?space=1&num=1893
#include <iostream>
#include <string>

using namespace std;

enum place { AISLE, WINDOW, NEITHER };

// Решение задачи
place solve(char letter, char row) {
  // Палуба?
  if (row < 21) {
    // Верхняя палуба
    // Класс?
    if (row < 3) {
      // Премиум
      if (letter % 3 == 1) return WINDOW;
      if (letter == 2 || letter == 3) return AISLE;
    } else {
      // Бизнес
      if (letter % 5 == 1) return WINDOW;
      return AISLE;
    }
  } else {
    // Нижняя палуба
    if (letter % 9 == 1) return WINDOW;
    if (letter == 3 || letter == 4 || letter == 7 || letter == 8) return AISLE;
  }
  return NEITHER;
}

int main() {
  // Ввод
  string input;
  cin >> input;

  // Разбор ввода
  char letter, row;
  letter = input[input.size() - 1] - 64;
  if (letter > 8) letter--; // Костыль из-за буквы I
  input.erase(input.size() - 1, 1);
  row = atoi(input.c_str());

  // Ответ
  switch (solve(letter, row)) {
    case AISLE:
      cout << "aisle";
      break;
    case WINDOW:
      cout << "window";
      break;
    case NEITHER:
      cout << "neither";
      break;
  }
  return 0;
}