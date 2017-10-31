// http://acm.timus.ru/problem.aspx?space=1&num=1585
#include <iostream>
#include <string>

using namespace std;

struct Penguin
{
	string name; // Имя вида
	int count;   // Количество
};

Penguin penguins[3] = { { "Emperor Penguin", 0 },{ "Little Penguin", 0 },{ "Macaroni Penguin", 0 } };

int n; // Количество записей в блокноте

int main() {
	scanf_s("%d", &n);

	for (size_t i = 0; i <= n; i++)
	{
		string strbuf;
		getline(cin, strbuf);
		for (size_t j = 0; j < 3; j++)
		{
			if (strbuf == penguins[j].name) {
				penguins[j].count++;
			}
		}
	}

	int max = 0; int penguinID;
	for (size_t j = 0; j < 3; j++)
	{
		if (penguins[j].count > max) {
			max = penguins[j].count;
			penguinID = j;
		}
	}

	// Ответ
	printf("%s", penguins[penguinID].name.c_str());

	system("pause");
	return 0;
}