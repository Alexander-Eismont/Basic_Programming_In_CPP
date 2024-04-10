<details>
<summary><font size="+2">Задача 1. Адреса</font></summary><br>

В этом задании вы будете читать адреса из файла и выводить их в другой файл в другом формате.

Вам дан файл `in.txt`, в котором находится `N` адресов. Число `N` идёт первым в файле. После числа `N` располагаются `N` блоков по 4 строки в каждом. Каждый блок состоит из следующих строк: название города, название улицы, номер дома, номер квартиры.

Задача программы заключается в том, чтобы считать адреса из файла `in.txt` и вывести их в файл `out.txt` в другом формате и в обратном порядке. Не забудьте вывести количество адресов в начале.

Формат вывода адреса: `<название города>, <название улицы>, <номер дома>, <номер квартиры>`.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### in.txt
```
3
Москва
Строителей
34
12
Омск
Пушкина
2
13
Новосибирск
Мира
85
64
```

#### out.txt
```
3
Новосибирск, Мира, 85, 64
Омск, Пушкина, 2, 13
Москва, Строителей, 34, 12
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Address</font></summary><br>

In this assignment, you will read addresses from a file and output them to another file in a different format.

You are given a file `in.txt`, which contains `N` addresses. The number `N` comes first in the file. After the number `N` there are `N` blocks of 4 lines each. Each block consists of the following lines: city name, street name, house number, apartment number.

The program's task is to read addresses from the `in.txt` file and output them to the `out.txt` file in a different format and in reverse order. Don't forget to print the number of addresses at the beginning.

Address output format: `<city name>, <street name>, <house number>, <apartment number>`.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### in.txt
```
3
Moscow
Builders
34
12
Omsk
Pushkin
2
13
Novosibirsk
Mira
85
64
```

#### out.txt
```
3
Novosibirsk, Mira, 85, 64
Omsk, Pushkina, 2, 13
Moscow, Stroiteley, 34, 12
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Сортируем адреса</font></summary><br>

В этом задании вы будете читать из файла адреса и выводить их в другой файл в другом формате, отсортированными по названию города.

Вам дан файл `in.txt`, в котором находится `N` адресов. Число `N` идёт первым в файле. После числа `N` располагаются `N` блоков по 4 строки в каждом. Каждый блок состоит из следующих строк: название города, название улицы, номер дома, номер квартиры.

Задача программы заключается в том, чтобы считать адреса из файла `in.txt`, отсортировать их по названию города и вывести отсортированный список адресов в файл `out.txt` в другом формате. Не забудьте вывести количество адресов в начале.

Города должны быть отсортированы в алфавитном порядке.

Формат вывода адреса: `<название города>, <название улицы>, <номер дома>, <номер квартиры>`.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### in.txt
```
5
Москва
Строителей
34
12
Новокузнецк
Науки
5
16
Омск
Пушкина
2
13
Москва
Арбат
4
1
Новосибирск
Мира
85
64
```

#### out.txt
```
5
Москва, Строителей, 34, 12
Москва, Арбат, 4, 1
Новокузнецк, Науки, 5, 16
Новосибирск, Мира, 85, 64
Омск, Пушкина, 2, 13
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Address sorting</font></summary><br>

In this task you will read addresses from a file and output them to another file in a different format, sorted by city name.

You are given a file `in.txt`, which contains `N` addresses. The number `N` comes first in the file. After the number `N` there are `N` blocks of 4 lines each. Each block consists of the following lines: city name, street name, house number, apartment number.

The program's task is to read addresses from the `in.txt` file, sort them by city name and output the sorted list of addresses to the `out.txt` file in a different format. Don't forget to print the number of addresses at the beginning.

Cities should be sorted alphabetically.

Address output format: `<city name>, <street name>, <house number>, <apartment number>`.

#### in.txt
```
5
Moscow
Builders
34
12
Novokuznetsk
Science
5
16
Omsk
Pushkin
2
13
Moscow
Arbat
4
1
Novosibirsk
Mira
85
64
```

#### out.txt
```
5
Moscow, Stroiteley, 34, 12
Moscow, Arbat, 4, 1
Novokuznetsk, Nauki, 5, 16
Novosibirsk, Mira, 85, 64
Omsk, Pushkina, 2, 13
```
</details>
</details>
<br>