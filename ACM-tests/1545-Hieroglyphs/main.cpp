// http://acm.timus.ru/problem.aspx?space=1&num=1545
#include <iostream>
#include <string>

using namespace std;

int n;            // Количество иероглифов
char letter;      // буква, введенная Вовой
char *dictionary; // Словарь всех иероглифов

int main() {
	// Ввод количества иероглифов словаря
	cin >> n;
	// Выделяем память словарю
	dictionary = new char[n * 2];

	// Ввод иероглифов
	for (size_t i = 0; i < n * 2; i++)
	{
		cin >> dictionary[i];
	}

	// Ввод буквы
	cin >> letter;

	// Вывод возможных иероглифов (ответ)
	for (size_t i = 0; i < n; i++)
	{
		if (letter == dictionary[i * 2])
			cout << dictionary[i * 2] << dictionary[i * 2 + 1] << endl;
	}

	system("pause");
	return 0;
}