// http://acm.timus.ru/problem.aspx?space=1&num=1446
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Названия всех факультетов
const string FACULTIES[4] = {"Slytherin", "Hufflepuff", "Gryffindor", "Ravenclaw"};
// Массив студентов
vector< vector<string> > students(4);
int n;

// Название факультета -> номер факультета в массиве
int facultyName(string faculty) {
	for (size_t i = 0; i < 4; i++)
		if (FACULTIES[i] == faculty) return i;
	return 0;
}

int main() {
	cin >> n; // Ввод количества студентов
	cin.ignore(INT_MAX, '\n'); // Сбрасываем буффер

	// Ввод студентов и их факультетов
	string name, faculty;
	for (size_t i = 0; i < n; i++)
	{
		getline(cin, name); // Имя
		getline(cin, faculty); // Факультет
		students[facultyName(faculty)].push_back(name);
	}

	// Вывод ответа
	for (size_t i = 0; i < 4; i++)
	{
		cout << FACULTIES[i] << ":\n";
		for (size_t j = 0; j < students[i].size(); j++)
		{
			cout << students[i][j] << endl;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}