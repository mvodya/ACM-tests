# Выборы / 1263

* Ограничение времени: 1.0 секунды
* Ограничение памяти: 64 МБ

Грядут очередные выборы. Снова все заборы оклеены листовками, почтовые ящики забиты макулатурой, с экранов телевизоров на нас взирают мордатые дядьки, обещающие сделать нашу жизнь лучше… А программист Васечкин снова завален работой. Необходимо написать программу, которая облегчит подсчет голосов избирателей.

## Исходные данные

Первая строка содержит целые числа N — число кандидатов (1 ≤ N ≤ 10000) и M — число избирателей, принявших участие в выборах (1 ≤ M ≤ 10000). Далее следуют M строк, в каждой из которых находится номер кандидата, за которого проголосовал избиратель. Кандидаты пронумерованы целыми числами от 1 до N.

## Результат

Выведите N строк, в i-й строке должен быть указан процент избирателей, проголосовавших за i-го кандидата (с точностью до двух знаков после десятичной точки).

## Пример

| исходные данные | результат  |
| --------------- | ---------- |
| 3 6             | 50.00%     |
| 1               | 33.33%     |
| 2               | 16.67%     |
| 3               |            |
| 2               |            |
| 1               |            |
| 1               |            |

---

* Автор задачи: Ден Расковалов
* Источник задачи: Открытое командное соревнование школьников Свердловской области по программированию, 11 октября 2003 года
* Сложность: 46