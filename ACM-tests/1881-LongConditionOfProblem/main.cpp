// http://acm.timus.ru/problem.aspx?space=1&num=1881
#include <iostream>
#include <string>

using namespace std;

int h, w, n;
string line;

int main() {
	// Ввод данных
	cin >> h >> w >> n;

	int wordsize,
		lines = 1,
		pages = 1,
		letters = w;

	// Ввод слов и подсчет на лету
	for (size_t i = 0; i < n; i++)	
	{
		cin >> line;
		wordsize = line.size();
		if (wordsize > letters) {
			lines++;
			if (lines > h) {
				lines = 1;
				pages++;
			}
			letters = w - wordsize - 1;
		} else {
			letters = letters - wordsize - 1;
		}
	}

	// Ответ
	cout << pages << endl;

	system("pause");
	return 0;
}