// http://acm.timus.ru/problem.aspx?space=1&num=1567
#include <iostream>
#include <string>

using namespace std;

int clickCounter(char c);

string message; // SMS сообщение

int main() {
	getline(cin, message); // Ввод SMS сообщение

	int price = 0;
	for (size_t i = 0; i < message.length(); i++)
	{
		price += clickCounter(message[i]); // Вычисляем цену
	}

	printf("%d", price); // Выводим ответ

	system("pause");
	return 0;
}


// Количество нажатий на требуемый символ
int clickCounter(char c) {
	switch (c)
	{
	case 'a': case 'd':  case 'g': case 'j': case 'm': case 'p': case 's': case 'v': case 'y': case '.': case ' ': return 1;
	case 'b': case 'e':  case 'h': case 'k': case 'n': case 'q': case 't': case 'w': case 'z': case ',': return 2;
	case 'c': case 'f':  case 'i': case 'l': case 'o': case 'r': case 'u': case 'x': case '!': return 3;
	default: break;
	}
	return 0;
}