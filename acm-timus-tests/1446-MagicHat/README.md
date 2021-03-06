# Волшебная шляпа / 1446

* Ограничение времени: 1.0 секунды
* Ограничение памяти: 64 МБ

В начале каждого учебного года в Хогвартсе происходит исключительно важное событие — распределение юных колдунов по факультетам. Находчивые и изобретательные попадают в Слизерин, отважные — в Гриффиндор, трудолюбивые — в Хаффлпаф, а сообразительные — в Рэйвенкло. Распределение проходит следующим образом: когда называется фамилия очередного первокурсника, он выходит в центр зала и надевает знаменитую шляпу Гриффиндора. Шляпа, оценив обстановку в голове колдуна или ведьмы, громко выкрикивает факультет. Специальный эльф ведет протокол распределения. После распределения ему надо срочно составить список учеников по факультетам. Члены общества Против Угнетения Колдовских Народов-Изгоев предлагают вам помочь уставшему за много лет эльфу в этом нелегком деле.

## Исходные данные

В первой стоке указано количество учеников-первогодников N (1 ≤ N ≤ 1000). В следующих 2N строках указаны их имена и факультеты, которые назвала шляпа. Имя ученика может содержать прописные и заглавные буквы латинского алфавита, пробелы и знак дефиса. Длина каждого имени не больше 200 символов.

## Результат

Выведите список учеников по факультетам: сначала название факультета, потом двоеточие, в следующих сроках список учеников по одному в строке. Первым должен идти список Слизерина, потом — Хаффлпаф, Гриффиндор, и Рэйвенкло. Между списками факультетов надо оставлять пустую строку. Ученики в списках по факультетам должны идти в том же порядке, в котором их вызывали на примерку шляпы. Известно, что каждый год на каждый факультет попадает по крайней мере один ученик.

## Пример

| исходные данные            | результат                  |
| -------------------------- | -------------------------- |
| 7                          | Slytherin:                 |
| Ivan Ivanov                | Zlobeus Zlei               |
| Gryffindor                 | Um Bridge                  |
| Mac Go Nagolo              |                            |
| Hufflepuff                 | Hufflepuff:                |
| Zlobeus Zlei               | Mac Go Nagolo              |
| Slytherin                  |                            |
| Um Bridge                  | Gryffindor:                |
| Slytherin                  | Ivan Ivanov                |
| Tatiana Henrihovna Grotter | Garry Potnyj               |
| Ravenclaw                  | Herr Mionag-Ranger         |
| Garry Potnyj               |                            |
| Gryffindor                 | Ravenclaw:                 |
| Herr Mionag-Ranger         | Tatiana Henrihovna Grotter |
| Gryffindor                 |                            |

---

* Автор задачи: Станислав Васильев
* Источник задачи: X командный Чемпионат Урала по спортивному программированию, 24-25 марта 2006 года
* Сложность: 94