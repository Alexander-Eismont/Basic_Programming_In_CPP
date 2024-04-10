<details>
<summary><font size="+2">Задача 1. Калькулятор двух чисел</font></summary><br>

В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу

Создайте класс `Calculator`. Класс должен содержать два поля `num1` и `num2` для хранения дробных чисел. Также класс должен содержать следующие методы:
 - `double add()` - метод должен возвращать результат сложения `num1` и `num2`
 - `double multiply()` - метод должен возвращать результат перемножения `num1` и `num2`
 - `double subtract_1_2()` - метод должен возвращать результат вычитания `num2` из `num1`
 - `double subtract_2_1()` - метод должен возвращать результат вычитания `num1` из `num2`
 - `double divide_1_2()` - метод должен возвращать результат деления `num1` на `num2`
 - `double divide_2_1()` - метод должен возвращать результат деления `num2` на `num1`
 - `bool set_num1(double num1)` - метод должен установить значение поля `num1` равное значению аргумента `num1` в случае, если значение аргумента не равно `0`. Возвращает `true`, если установка произошла успешно, в обратном случае `false`
 - `bool set_num2(double num2)` - метод должен установить значение поля `num2` равное значению аргумента `num2` в случае, если значение аргумента не равно `0`. Возвращает `true`, если установка произошла успешно, в обратном случае `false`

Напишите код, демонстрирующий работу класса `Calculator`. Попросите пользователя ввести два числа. После этого выведите пользователю результаты всех операций или попросите его ввести значение ещё раз, если предыдущий ввод был некорректен

Программа спрашивает пользователя бесконечно, пока он сам не закроет консоль

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Введите num1: 3
Введите num2: 6
num1 + num2 = 9
num1 - num2 = -3
num2 - num1 = 3
num1 * num2 = 18
num1 / num2 = 0.5
num2 / num1 = 2
Введите num1: 5
Введите num2: 0
Неверный ввод!
Введите num2: 5
num1 + num2 = 10
num1 - num2 = 0
num2 - num1 = 0
num1 * num2 = 25
num1 / num2 = 1
num2 / num1 = 1
```
</details>
</details>
<br>

<details>
<summary><font size="+2">1. Two numbers calculator</font></summary><br>

In this assignment you will need to create a class that performs simple arithmetic operations on two numbers and demonstrate how it works

Create a Calculator class. The class must contain two fields num1 and num2 to store fractional numbers. The class must also contain the following methods:

- `double add()` - the method should return the result of adding num1 and num2
- `double multiply()` - the method must return the result of multiplying num1 and num2
- `double subtract_1_2()` - the method should return the result of subtracting num2 from num1
- `double subtract_2_1()` - the method should return the result of subtracting num1 from num2
- `double divide_1_2()` - the method should return the result of dividing num1 by num2
- `double divide_2_1()` - the method should return the result of dividing num2 by num1
- `bool set_num1(double num1)` - the method must set the value of the num1 field equal to the value of the num1 argument if the argument value is not equal to 0. Returns true if the setting was successful, false otherwise
- `bool set_num2(double num2)` - the method must set the value of the num2 field equal to the value of the num2 argument if the argument value is not equal to 0. Returns true if the setting was successful, false otherwise

Write code that demonstrates how the Calculator class works. Ask the user to enter two numbers. After this, display the results of all operations to the user or ask him to enter the value again if the previous input was incorrect

The program asks the user endlessly until he closes the console himself

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Enter num1: 3
Enter num2: 6
num1 + num2 = 9
num1 - num2 = -3
num2 - num1 = 3
num1 * num2 = 18
num1 / num2 = 0.5
num2 / num1 = 2
Enter num1:5
Enter num2: 0
Invalid input!
Enter num2: 5
num1 + num2 = 10
num1 - num2 = 0
num2 - num1 = 0
num1 * num2 = 25
num1 / num2 = 1
num2 / num1 = 1
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Счётчик</font></summary><br>

В этом задании вам нужно будет создать класс-счётчик

Создайте класс `Counter`. Класс должен выполнять функцию счётчика, для этого он должен предоставлять:
- возможность увеличить своё значение на 1
- возможность уменьшить своё значение на 1
- возможность посмотреть своё текущее значение
- возможность создания экземпляра класса с начальным значением по умолчанию (`1`)
- возможность создания экземпляра класса с инициализирующим начальным значением

Обратите внимание на то, что у внешнего кода не должно быть возможности изменить внутреннее значение счётчика напрямую

Напишите код, демонстрирующий работу класса `Counter`. Спросите у пользователя, хочет ли он указать начальное значение для счётчика. Если хочет, дайте ему возможность это сделать. Затем предоставьте пользователю возможность вводить команды:
- `+`: увеличьте счётчик на 1
- `-`: уменьшите счётчик на 1
- `=`: выведите текущее значение счётчика
- `x`: завершите работу программы

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Вы хотите указать начальное значение счётчика? Введите да или нет: да
Введите начальное значение счётчика: 6
Введите команду ('+', '-', '=' или 'x'): +
Введите команду ('+', '-', '=' или 'x'): +
Введите команду ('+', '-', '=' или 'x'): =
8
Введите команду ('+', '-', '=' или 'x'): -
Введите команду ('+', '-', '=' или 'x'): =
7
Введите команду ('+', '-', '=' или 'x'): x
До свидания!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">2. Counter</font></summary><br>

In this task you will need to create a counter class

Create a `Counter` class. The class must perform the function of a counter, for this it must provide:

- the ability to increase your value by 1
- ability to decrease your value by 1
- ability to see your current value
- ability to create an instance of a class with a default initial value (1)
- the ability to create an instance of a class with an initializing value

Please note that external code should not be able to change the internal counter value directly

Write code that demonstrates how the `Counter` class works. Ask the user if he wants to specify an initial value for the counter. If he wants, give him the opportunity to do it. Then allow the user to enter commands:

- `+`: increase the counter by 1
- `-`: decrease the counter by 1
- `=`: print the current counter value
- `x`: exit the program

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Do you want to specify the initial value of the counter? Enter yes or no: yes
Enter the initial counter value: 6
Enter the command ('+', '-', '=' or 'x'): +
Enter the command ('+', '-', '=' or 'x'): +
Enter the command ('+', '-', '=' or 'x'): =
8
Enter the command ('+', '-', '=' or 'x'): -
Enter the command ('+', '-', '=' or 'x'): =
7
Enter the command ('+', '-', '=' or 'x'): x
Goodbye!
```
</details>
</details>
<br>