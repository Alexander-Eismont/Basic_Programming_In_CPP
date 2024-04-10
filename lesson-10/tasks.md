<details>
<summary><font size="+2">Задача 1. Статическая библиотека</font></summary><br>

В этом задании вам нужно создать статическую библиотеку и использовать её.

Создайте класс `Greeter`, который определяет один метод `greet`, принимающий на вход строку и возвращающий строку с приветствием значения той строки, которую ему передали.

Поместите этот класс в статическую библиотеку и воспользуйтесь им из консольного приложения для приветствия пользователя, который введёт своё имя.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Введите имя: Владислав
Здравствуйте, Владислав!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Static library</font></summary><br>

In this task you need to create a static library and use it.

Create a `Greeter` class that defines one `greet` method that takes a string as input and returns a greeting string with the value of the string that was passed to it.

Place this class in a static library and use it from a console application to greet the user when they enter their name.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Enter name: Vladislav
Hello, Vladislav!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Динамическая библиотека</font></summary><br>

В этом задании вам нужно создать динамическую библиотеку и использовать её.

Создайте класс `Leaver`, который определяет один метод `leave`, принимающий на вход строку и возвращающий строку с прощанием со значением той строки, которую ему передали.

Поместите этот класс в динамическую библиотеку и воспользуйтесь им из консольного приложения для прощания с пользователем, который введёт своё имя.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Введите имя: Анатолий
До свидания, Анатолий!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Dynamic library</font></summary><br>

In this task you need to create a dynamic library and use it.

Create a `Leaver` class that defines one `leave` method that takes a string as input and returns a string saying goodbye to the value of the string that was passed to it.

Place this class in a dynamic library and use it from a console application to say goodbye to the user who enters his name.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Enter name: Anatoly
Goodbye, Anatoly!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 3. Динамическая библиотека CMake</font></summary><br>

В этом задании вам нужно создать динамическую библиотеку и использовать её при помощи CMake.

Создайте класс `Leaver`, который определяет один метод `leave`, принимающий на вход строку и возвращающий строку с прощанием со значением той строки, которую ему передали.

Поместите этот класс в динамическую библиотеку и воспользуйтесь им из консольного приложения для прощания с пользователем, который введёт своё имя.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Введите имя: Анатолий
До свидания, Анатолий!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3. CMake dynamic library</font></summary><br>

In this task you need to create a dynamic library and use it using CMake.

Create a `Leaver` class that defines one `leave` method that takes a string as input and returns a string saying goodbye to the value of the string that was passed to it.

Place this class in a dynamic library and use it from a console application to say goodbye to the user who enters his name.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Enter name: Anatoly
Goodbye, Anatoly!
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 4*. Иерархия классов в DLL, проекты VC++</font></summary><br>

В этом задании вам нужно создать более сложную динамическую библиотеку с помощью проектов Visual C++.

Возьмите иерархию классов из [предыдущего задания](https://github.com/Alexander-Eismont/Basic-programming-in-CPP/tree/main/lesson-05/3_Class_Hierarchy) и поместите её в динамическую библиотеку. В вашем консольном приложении должен остаться только код для общения с пользователем и использования классов из библиотеки.

Продемонстрируйте работоспособность вашей библиотеки.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Равнобедренный треугольник:
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 4*. Class hierarchy in DLLs, VC++ projects</font></summary><br>

In this assignment, you will create a more complex dynamic library using Visual C++ projects.

Take the class hierarchy from [the previous assignment](https://github.com/Alexander-Eismont/Basic-programming-in-CPP/tree/main/lesson-05/3_Class_Hierarchy) and place it in a dynamic library. Your console application should only contain code for communicating with the user and using classes from the library.

Demonstrate the functionality of your library.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Triangle:
Sides: a=10 b=20 c=30
Angles: A=50 B=60 C=70

Right triangle:
Sides: a=10 b=20 c=30
Angles: A=50 B=60 C=90

Isosceles triangle:
Sides: a=10 b=20 c=10
Angles: A=50 B=60 C=50

Equilateral triangle:
Sides: a=30 b=30 c=30
Angles: A=60 B=60 C=60

Quadrangle:
Sides: a=10 b=20 c=30 d=40
Angles: A=50 B=60 C=70 D=80

Rectangle:
Sides: a=10 b=20 c=10 d=20
Angles: A=90 B=90 C=90 D=90

Square:
Sides: a=20 b=20 c=20 d=20
Angles: A=90 B=90 C=90 D=90

Parallelogram:
Sides: a=20 b=30 c=20 d=30
Angles: A=30 B=40 C=30 D=40

Rhombus:
Sides: a=30 b=30 c=30 d=30
Angles: A=30 B=40 C=30 D=40
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 5*. Иерархия классов в DLL и CMake</font></summary><br>

В этом задании вам нужно собрать вашу динамическую библиотеку с помощью CMake.

Возьмите исходники из [предыдущего задания](https://github.com/Alexander-Eismont/Basic-programming-in-CPP/tree/main/lesson-05/3_Class_Hierarchy) и соберите из них работоспособную программу с помощью CMake.

Продемонстрируйте работоспособность вашей программы.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Равнобедренный треугольник:
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 5*. Class hierarchy in DLL and CMake</font></summary><br>

In this task you need to build your dynamic library using CMake.

Take the sources from [the previous task](https://github.com/Alexander-Eismont/Basic-programming-in-CPP/tree/main/lesson-05/3_Class_Hierarchy) and assemble them into a working program using CMake.

Demonstrate the functionality of your program.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Triangle:
Sides: a=10 b=20 c=30
Angles: A=50 B=60 C=70

Right triangle:
Sides: a=10 b=20 c=30
Angles: A=50 B=60 C=90

Isosceles triangle:
Sides: a=10 b=20 c=10
Angles: A=50 B=60 C=50

Equilateral triangle:
Sides: a=30 b=30 c=30
Angles: A=60 B=60 C=60

Quadrangle:
Sides: a=10 b=20 c=30 d=40
Angles: A=50 B=60 C=70 D=80

Rectangle:
Sides: a=10 b=20 c=10 d=20
Angles: A=90 B=90 C=90 D=90

Square:
Sides: a=20 b=20 c=20 d=20
Angles: A=90 B=90 C=90 D=90

Parallelogram:
Sides: a=20 b=30 c=20 d=30
Angles: A=30 B=40 C=30 D=40

Rhombus:
Sides: a=30 b=30 c=30 d=30
Angles: A=30 B=40 C=30 D=40
```
</details>
</details>
<br>