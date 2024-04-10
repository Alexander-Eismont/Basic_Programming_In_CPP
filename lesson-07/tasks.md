<details>
<summary><font size="+2">Задача 1. Простое исключение</font></summary><br>

В этом задании вы попробуете выбросить и обработать исключение.

Создайте функцию `int function(std::string str, int forbidden_length)`. Эта функция должна возвращать длину переданной строки, если эта длина не равна значению переданного параметра `forbidden_length`. В противном случае она должна выбрасывать исключение `bad_length`.

Для проверки функции организуйте работу с пользователем. В начале задайте запретную длину, а затем считывайте пользовательские строки и выводите их длину до тех пор, пока пользователь не введёт строку запретной длины. После этого сообщите ему, что он ввёл строку запретной длины, и завершите программу.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Введите запретную длину: 5
Введите слово: Привет
Длина слова "Привет" равна 6
Введите слово: мир
Длина слова "мир" равна 3
Введите слово: пирог
Вы ввели слово запретной длины! До свидания
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Simple exception</font></summary><br>

In this task you will try to throw and handle an exception.

Create a function `int function(std::string str, int forbidden_length)`. This function must return the length of the passed string if this length is not equal to the value of the passed `forbidden_length` parameter. Otherwise it should throw a `bad_length` exception.

To test the function, organize work with the user. First set the forbidden length, and then read user strings and print their length until the user enters a forbidden length string. After that, tell him that he entered a string of prohibited length, and terminate the program.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Enter prohibited length: 5
Enter a word: Hello
The length of the word "Hello" is 6
Enter the word: world
The length of the word "world" is 3
Enter the word: pie
You have entered a word of prohibited length! Goodbye
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Исключения в конструкторах</font></summary><br>

В этом задании вы запретите создавать экземпляры классов геометрических фигур с неправильными данными.

Создайте собственный класс исключения для ошибки создания геометрической фигуры. Подумайте, от какого типа его унаследовать, и не забудьте поместить новый класс в отдельную пару файлов.

Возьмите иерархию классов из [предыдущего задания](https://github.com/Alexander-Eismont/Netology-Ch3-Basic-programming-in-CPP/tree/main/lesson-05/3_Class_Hierarchy). Теперь при создании экземпляров классов вам нужно проверять аргументы, которые поступают на вход конструктору. Если аргументы не соответствуют ограничениям, объект не должен быть создан, а на консоль должно быть выведено соответствующее сообщение. Причина ошибки должна быть сформулирована на уровне конструктора и выведена на экран при обработке ошибок.

Ограничения:
 - треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180); 
 - прямоугольный треугольник (угол `C` всегда равен 90);
 - равнобедренный треугольник (стороны `a` и `c` равны, углы `A` и `C` равны);
 - равносторонний треугольник (все стороны равны, все углы равны 60);
 - четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
 - прямоугольник (стороны `a`,`c` и `b`,`d` попарно равны, все углы равны 90);
 - квадрат (все стороны равны, все углы равны 90);
 - параллелограмм (стороны `a`,`c` и `b`,`d` попарно равны, углы `A`,`C` и `B`,`D` попарно равны);
 - ромб (все стороны равны, углы `A`,`C` и `B`,`D` попарно равны).

Для проверки попробуйте создать разные геометрические фигуры — правильные и неправильные. В случае успешного создания выводите на экран сообщение об успешном создании и параметры фигуры. В случае, если создание не удалось, выведите причину ошибки.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Прямоугольный треугольник (стороны 3, 4, 5; углы 30, 60, 90) создан
Ошибка создания фигуры. Причина: сумма углов не равна 180
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Exceptions in constructors</font></summary><br>

In this assignment, you will prevent geometric shape classes from being instantiated with incorrect data.

Create your own exception class for the geometry creation error. Think about what type to inherit it from, and don't forget to put the new class in a separate pair of files.

Take the class hierarchy from the [previous assignment](https://github.com/Alexander-Eismont/Netology-Ch3-Basic-programming-in-CPP/tree/main/lesson-05/3_Class_Hierarchy). Now, when creating class instances, you need to check the arguments that are passed to the constructor. If the arguments do not meet the constraints, the object should not be created and a corresponding message should be printed to the console. The cause of the error must be stated at the constructor level and displayed during error handling.

Restrictions:

- triangle (the sides and angles are arbitrary, the number of sides is 3, the sum of the angles is 180);
- right triangle (angle `C` is always 90);
- isosceles triangle (sides `a` and `c` are equal, angles `A` and `C` are equal);
- equilateral triangle (all sides are equal, all angles are equal to 60);
- quadrilateral (the sides and angles are arbitrary, the number of sides is 4, the sum of the angles is 360);
- rectangle (sides `a`,`c` and `b`,`d` are equal in pairs, all angles are equal to 90);
- square (all sides are equal, all angles are 90);
- parallelogram (sides `a`,`c` and `b`,`d` are equal in pairs, angles `A`,`C` and `B`,`D` are equal in pairs);
- rhombus (all sides are equal, angles `A`, `C` and `B`, `D` are equal in pairs).

To check, try creating different geometric shapes - regular and irregular. If creation is successful, display a message about successful creation and the shape parameters. If creation fails, print the reason for the error.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
A right triangle (sides 3, 4, 5; angles 30, 60, 90) created
Error creating figure. Reason: sum of angles does not equal 180
```
</details>
</details>
<br>