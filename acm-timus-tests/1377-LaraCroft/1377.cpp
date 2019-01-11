#include <iostream>

using namespace std;

// Размеры кладбища
int n, m;

// Две могилки с сокровищами (координаты)
struct {
  int n, m;
  bool finded = false;
} treasures[2];

// Направление движения Лары
enum { RIGHT, DOWN, LEFT, UP };

// Карта раскопок Лары
bool **dungeon;

// Лара Крофт
struct {
  int n = 1, m = 0;  // Координаты
  int d = RIGHT;     // Направление
  int firstdays = -1;  // Когда было найдено первое сокровище
  int days = 0;  // Кол-во уже затраченных дней
} lara;

// Попытка копания
bool dig() {
  int tn = lara.n, tm = lara.m;
  // Меняем временные координаты в зависимости от направления движения
  switch (lara.d) {
    case RIGHT:
      tm++;
      break;
    case DOWN:
      tn++;
      break;
    case LEFT:
      tm--;
      break;
    case UP:
      tn--;
      break;
  }

  // Проверка выхода за пределы стен
  if (tn > n || tm > m || tn <= 0 || tm <= 0) return false;
  // Проверка на актуальность могилы
  if (dungeon[tn - 1][tm - 1]) return false;

  // День лары потрачен
  lara.days++;

  // Проверка касания сокровищ 1
  if (treasures[0].n == tn && treasures[0].m == tm && !treasures[0].finded) {
    treasures[0].finded = true;
    if (lara.firstdays == -1) lara.firstdays = lara.days;
  }
  // Проверка касания сокровищ 2
  if (treasures[1].n == tn && treasures[1].m == tm && !treasures[1].finded) {
    treasures[1].finded = true;
    if (lara.firstdays == -1) lara.firstdays = lara.days;
  }

  // Записываем новые координаты Лары
  lara.n = tn;
  lara.m = tm;

  // Помечаем вырытую могилу
  dungeon[tn - 1][tm - 1] = true;

  return true;
}

int main() {
  // Получаем размеры кладбища
  scanf("%d %d", &n, &m);
  // Создаем кладбище
  dungeon = new bool *[n];
  for (int i = 0; i < n; i++) {
    dungeon[i] = new bool[m];
    for (int j = 0; j < m; j++) dungeon[i][j] = false;
  }

  // Получаем координаты двух могилок с сокровищами
  scanf("%d %d", &treasures[0].n, &treasures[0].m);
  scanf("%d %d", &treasures[1].n, &treasures[1].m);

  // Основной цикл (работает до тех пор, пока все две могилы не будут найдены)
  while (!treasures[0].finded || !treasures[1].finded) {
    if (!dig()) lara.d = (lara.d + 1) % 4;

    /*for (int i = 0; i < n; i++) { Красивая графическая отрисовка процесса
      for (int j = 0; j < m; j++) {
        cout << (int)dungeon[i][j];
      }
      cout << endl;
    }
    cout << "  d: " << lara.days;
    cout << endl << "---------------------\n\n";*/
  }

  // Нас просят вывести сколько прошло дней с момента открытия первой могилы
  printf("%d", lara.days - lara.firstdays);

  return 0;
}