# Задание ЕГЭ #27

* Вычисление контрольного значения
* Источник: ЕГЭ — 2018. До­сроч­ная волна

На вход программы поступает последовательность из N целых положительных чисел, все числа в последовательности различны. Рассматриваются все пары различных элементов последовательности (элементы пары не обязаны стоять в последовательности рядом, порядок элементов в паре не важен). Необходимо определить количество пар, для которых произведение элементов не делится на 34.

Описание входных и выходных данных

В первой строке входных данных задаётся количество чисел N (1≤N≤1000). В каждой из последующих N строк записано одно целое положительное число, не превышающее 10 000. В качестве результата программа должна напечатать одно число: количество пар, в которых произведение элементов не кратно 34.

Пример входных данных:

```text
5
3
4
10
11
17
```

Пример выходных данных для приведённого выше примера входных данных:

```text
8
```

Пояснение. Из четырёх заданных чисел можно составить 10 попарных произведений: 3·4, 3·10, 3·11, 3·17, 4·10, 4·11, 4·17, 10·11, 10·17, 11·17 (результаты: 12, 30, 33, 51, 40, 44, 68, 110, 170, 187). Из них на 34 не делятся 8 произведения (3·4=12, 3·10=30, 3·11=33, 3·17=51, 4·10=40, 4·11=44, 10·11=110, 11·17=187).

Требуется написать эффективную по времени и по памяти программу для решения описанной задачи.

Программа считается эффективной по времени, если при увеличении количества исходных чисел N в k раз время работы программы увеличивается не более чем в k раз.

Программа считается эффективной по памяти, если память, необходимая для хранения всех переменных программы, не превышает 1 Кбайт и не увеличивается с ростом N.

Максимальная оценка за правильную (не содержащую синтаксических ошибок и дающую правильный ответ при любых допустимых входных данных) программу, эффективную по времени и по памяти, — 4 балла.

Максимальная оценка за правильную программу, эффективную только по времени — 3 балла.

Максимальная оценка за правильную программу, не удовлетворяющую требованиям эффективности, — 2 балла.

Вы можете сдать одну программу или две программы решения задачи (например, одна из программ может быть менее эффективна). Если Вы сдадите две программы, то каждая из них будет оцениваться независимо от другой, итоговой станет бо́льшая из двух оценок.

Перед текстом программы обязательно кратко опишите алгоритм решения. Укажите использованный язык программирования и его версию.