# Задание ЕГЭ #27

* Вычисление контрольного значения
* Источник: Де­мон­стра­ци­он­ная версия ЕГЭ—2015 по информатике.

На спутнике «Фотон» установлен прибор, предназначенный для измерения энергии космических лучей. Каждую минуту прибор передаёт по каналу связи неотрицательное вещественное число — количество энергии, полученной за последнюю минуту, измеренное в условных единицах. Временем, в течение которого происходит передача, можно пренебречь. Необходимо найти в заданной серии показаний прибора минимальное произведение двух показаний, между моментами передачи которых прошло не менее 6 минут. Количество энергии, получаемое прибором за минуту, не превышает 1000 условных единиц. Общее количество показаний прибора в серии не превышает 10 000. Напишите на любом языке программирования программу для решения поставленной задачи.

Вам предлагаются два задания, связанные с этой задачей: **задание А** и **задание Б**. Вы можете решать оба задания А и Б или одно из них по своему выбору.

Итоговая оценка выставляется как максимальная из оценок за задания А и Б. Если решение одного из заданий не представлено, то считается, что оценка за это задание составляет 0 баллов.

Задание Б является усложненным вариантом задания А, оно содержит дополнительные требования к программе. Перед программой укажите версию языка программирования.

**А.** Напишите на любом языке программирования программу для решения поставленной задачи, в которой входные данные будут запоминаться в массиве, после чего будут проверены все возможные пары элементов.

Обязательно укажите, что программа является решением задания А.

Максимальная оценка за выполнение задания А – 2 балла.

**Б.** Напишите программу для решения поставленной задачи, которая будет эффективна как по времени, так и по памяти (или хотя бы по одной из этих характеристик).

Программа считается эффективной по времени, если время работы программы пропорционально количеству элементов последовательности N, т.е. при увеличении N в k раз время работы программы должно увеличиваться не более чем в k раз. Обязательно укажите, что программа является решением задания Б.

Перед программой укажите версию языка и кратко опишите использованный алгоритм. В первой строке задаётся число N — общее количество показаний прибора. Гарантируется, что N > 6. В каждой из следующих N строк задаётся одно неотрицательное вещественное число — очередное показание прибора.

Пример входных данных:

``` text
11
12
45.3
5.5
4
25
23
21
20
10
12
26
```

Программа должна вывести одно число — описанное в условии произведение.

Пример выходных данных для приведённого выше примера входных данных:
``` text
48
```