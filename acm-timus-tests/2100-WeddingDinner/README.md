# Свадебный обед / 2100

* Ограничение времени: 1.0 секунды
* Ограничение памяти: 64 МБ

Маршалл и Лили женятся! Они отослали всем друзьям приглашения на свадьбу. На каждом приглашении можно отметить +one — это значит, что друг хочет прийти со своей парой (не из числа приглашённых). Все друзья ответили на приглашения, и теперь Лили хочет узнать, на сколько гостей организовывать обед в ресторане. Все гости будут сидеть за одним большим столом. Маршалл очень суеверный, поэтому если за столом окажутся ровно 13 человек (включая Маршалла и Лили), то Лили попросит сотрудников ресторана посадить манекен и обслуживать его наравне со всеми. Сколько же потратит молодая пара на этот обед, если обслуживание одного человека (или манекена) стоит $100?

## Исходные данные

В первой строке вводится одно целое число n — количество друзей Маршалла и Лили, которым они отослали приглашение (1 ≤ n ≤ 20).
Затем в n строках описываются ответы на приглашения. Каждый ответ имеет вид name[+one]. Это имя приглашённого друга и +one, если друг отметил этот вариант. Гарантируется, что длина каждого имени не превосходит 20, и каждое имя состоит только из букв латинского алфавита.

## Результат

Выведите одно целое число — стоимость обеда в долларах.

## Примеры

| исходные данные | результат |
| --------------- | --------- |
| 3               | 600       |
| Ted+one         |           |
| Robin           |           |
| Barney          |           |

| исходные данные | результат |
| --------------- | --------- |
| 6               | 1400      |
| Alice+one       |           |
| Bob+one         |           |
| carl            |           |
| Debora+one      |           |
| Enrique+one     |           |
| FRED+one        |           |

---

* Автор задачи: Алексей Данилюк
* Источник задачи: Чемпионат УрФУ среди юниоров 2016
* Сложность: 38