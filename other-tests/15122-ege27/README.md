# Задание ЕГЭ #27

* Анализ пар значений
* Источник: СтатГрад: Тре­ни­ро­воч­ная ра­бо­та 17.01.2018 ИН10301

Дан набор из N целых положительных чисел. Из этих чисел формируются все возможные пары (парой считаются два элемента, которые находятся на разных местах в наборе, порядок чисел в паре не учитывается), в каждой паре вычисляется сумма элементов. Необходимо определить количество пар, для которых полученная сумма делится на 8.

Напишите эффективную по времени и по памяти программу для решения этой задачи.

Программа считается эффективной по времени, если при увеличении количества исходных чисел N в k раз время работы программы увеличивается не более чем в k раз.

Программа считается эффективной по памяти, если память, необходимая для хранения всех переменных программы, не превышает одного килобайта и не увеличивается с ростом N.

Максимальная оценка за правильную (не содержащую синтаксических ошибок и дающую правильный ответ при любых допустимых входных данных) программу, эффективную по времени и по памяти, — 4 балла.

Максимальная оценка за правильную программу, эффективную только по времени или только по памяти, — 3 балла.

Максимальная оценка за правильную программу, не удовлетворяющую требованиям эффективности, — 2 балла.

Вы можете сдать одну или две программы решения задачи. Если Вы сдадите две программы, каждая из них будет оцениваться независимо от другой, итоговой станет бо́льшая из двух оценок.

Перед текстом программы кратко опишите алгоритм решения. Укажите использованный язык программирования и его версию.

## Описание входных и выходных данных

В первой строке входных данных задаётся количество чисел N (1 ≤ N ≤ 1000). В каждой из последующих N строк записано одно натуральное число, не превышающее 10 000.

Пример входных данных:

```text
5
1
5
7
11
1
```

Пример выходных данных для приведённого выше примера входных данных:

```text
3
```

Из 5 чисел можно составить 10 пар. В данном случае у трёх пар сумма делится на 8: 1 + 7, 1 + 7 (в наборе две единицы, поэтому пару 1 + 7 можно составить двумя способами), 5 + 11.