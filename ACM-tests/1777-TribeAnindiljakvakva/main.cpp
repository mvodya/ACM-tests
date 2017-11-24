// http://acm.timus.ru/problem.aspx?space=1&num=1777
#include <iostream>
#include <vector>

using namespace std;

vector<long long> x(3); // Массив групп камней
int n = 0; // Количество заданных вопросов (для ответа)

// Расчитываем минимальную разницу
long long difference(vector<__int64> *v) {
	long long minimum = LLONG_MAX;
	for (size_t i = 0; i < x.size(); i++) {
		for (size_t j = 0; j < x.size(); j++) {
			if (minimum > abs(x[i] - x[j]) && i != j)
				minimum = abs(x[i] - x[j]);
		}
	}
	return minimum;
}

int main() {
	scanf_s("%lld %lld %lld", &x[0], &x[1], &x[2]); // Ввод данных

	while (true) {
		long long diff = difference(&x);
		n++; // Инкрементируем количество заданных вопросов
		if (diff == 0) break; // Если разница равна нулю - прерываем цикл
		x.push_back(diff); // Кидаем разницу в конец массива камней
			
	}

	// Ответ
	printf("%d", n);

	system("pause");
	return 0;
}