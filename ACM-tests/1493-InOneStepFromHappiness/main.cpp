// http://acm.timus.ru/problem.aspx?space=1&num=1493
#include <iostream>

using namespace std;

int number;

// Сумма трех левых или трех правых чисел
int sumDigit(int v, bool right) {
	if (right) return (number / 100 % 10) + (number / 10 % 10) + (number % 10);
	else return (number / 100000 % 10) + (number / 10000 % 10) + (number / 1000 % 10);
}

int main() {
	// Ввод числа
	cin >> number;

	bool vovanRights = false;

	// Проверяем билеты до и после
	number--;
	if (sumDigit(number, false) - sumDigit(number, true) == 0)
		vovanRights = true;
	number += 2;
	if (sumDigit(number, false) - sumDigit(number, true) == 0)
		vovanRights = true;

	// Ответ
	if (vovanRights) cout << "Yes";
	else cout << "No";

	system("pause");
	return 0;
}