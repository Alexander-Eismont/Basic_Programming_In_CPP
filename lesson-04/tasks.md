<details>
<summary><font size="+1">Задача 1. Фигуры. Количество сторон</font></summary><br>

В этом задании вы построите первую простую иерархию классов для заданной предметной области.

Предметная область выглядит следующим образом: есть сущность фигура. Фигуры бывают двух типов: треугольник и четырёхугольник. У фигуры есть количество сторон. Для неизвестной фигуры будем считать это количество равным нулю. У треугольника три стороны, у четырёхугольника четыре стороны. У любой фигуры мы хотим узнавать количество её сторон, но мы не должны быть способны **изменить** количество сторон для заданной фигуры извне.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру каждого класса и выведите информацию о количестве его сторон на консоль.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Количество сторон:
Фигура: 0
Треугольник: 3
Четырёхугольник: 4
```
</details>
</details>
<br>

<details>
<summary><font size="+1">Task 1. Shapes. Number of sides</font></summary><br>

In this assignment, you will build the first simple class hierarchy for a given problem domain.

The subject area looks like this: there is a figure entity. There are two types of shapes: triangle and quadrilateral. A figure has a number of sides. For an unknown figure, we will assume that this quantity is equal to zero. A triangle has three sides, a quadrilateral has four sides. For any figure, we want to know the number of its sides, **but we should not be able to change the number of sides for a given figure from the outside**.

Task: design and implement classes that describe the subject area. Demonstrate how they work: create one instance of each class and print information about the number of its sides to the console.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Number of sides:
Figure: 0
Triangle: 3
Quadrangle: 4
```
</details>
</details>
<br>

<details>
<summary><font size="+1">Задача 2. Фигуры. Стороны и углы</font></summary><br>

В этом задании вы усложните иерархию классов для усложнённой предметной области.

У вас появляется информация о длине сторон и углах ваших фигур, а также несколько более конкретных фигур.
Теперь в треугольнике вы должны хранить информацию о длине всех его трёх сторон (`a`, `b`, `c`) и значениях его трёх углов (`A`, `B`, `C`).
В четырёхугольнике вы храните информацию о длине его четырёх сторон (`a`, `b`, `c`, `d`) и значениях его четырёх углов (`A`, `B`, `C`, `D`).

Также у вас появляются более конкретные фигуры: 
 - прямоугольный треугольник (угол `C` всегда равен 90);
 - равнобедренный треугольник (стороны `a` и `c` равны, углы `A` и `C` равны);
 - равносторонний треугольник (все стороны равны, все углы равны 60);
 - прямоугольник (стороны `a`,`c` и `b`,`d` попарно равны, все углы равны 90);
 - квадрат (все стороны равны, все углы равны 90);
 - параллелограмм (стороны `a`,`c` и `b`,`d` попарно равны, углы `A`,`C` и `B`,`D` попарно равны);
 - ромб (все стороны равны, углы `A`,`C` и `B`,`D` попарно равны).
 
Вы должны иметь возможность узнать у каждой фигуры длины её сторон и значения её углов, но извне вы не должны быть способны изменить длины сторон и углы.

Не должно быть возможности создать фигуры, не удовлетворяющие перечисленным условиям. Например, нельзя создать квадрат с разными углами. Геометрические соотношения проверять не нужно. Например, сумма углов в треугольнике может быть не равна 180.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. Значения используйте произвольные.

Инициализацию длин сторон и величин углов нужно выполнить с помощью вызова базовых конструкторов.

Для вывода информации о фигуре создайте функцию `print_info`, которая будет принимать в качестве аргумента указатель на базовый класс фигуры.

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
<summary><font size="+1"> Task 2. Shapes. Sides and corners</font></summary><br>

In this task you will complicate the class hierarchy for a complex subject area.

You get information about the side lengths and angles of your shapes, as well as a few more specific shapes. Now in a triangle you must store information about the length of all its three sides (`a`, `b`, `c`) and the values of its three angles (`A`, `B`, `C`). In a quadrilateral, you store information about the length of its four sides (`a`, `b`, `c`, `d`) and the values of its four corners (`A`, `B`, `C`, `D`).

You also get more specific shapes:

- right triangle (angle `C` is always 90);
- isosceles triangle (sides `a` and `c` are equal, angles `A` and `C` are equal);
- equilateral triangle (all sides are equal, all angles are equal to 60);
- rectangle (sides `a`,`c` and `b`,`d` are equal in pairs, all angles are equal to 90);
- square (all sides are equal, all angles are 90);
- parallelogram (sides `a`,`c` and `b`,`d` are equal in pairs, angles `A`,`C` and `B`,`D` are equal in pairs);
- rhombus (all sides are equal, angles `A`, `C` and `B`, `D` are equal in pairs).
  
You should be able to find out from each figure the lengths of its sides and the values ​​of its angles, but you should not be able to change the lengths of the sides and angles from the outside.

It should not be possible to create shapes that do not satisfy the listed conditions. For example, you cannot create a square with different angles. There is no need to check geometric relationships. For example, the sum of the angles in a triangle may not equal 180.

Task: design and implement classes that describe the subject area. Demonstrate their work: create one copy of each shape and display information about the lengths of its sides and the size of its angles. Use arbitrary values.

Initialization of side lengths and angle values must be done by calling base constructors.

To print information about a shape, create a `print_info` function that takes as an argument a pointer to the base class of the shape.

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
<summary><font size="+1">Задача 3. Фигуры. Методы</font></summary><br>

В этом задании вы добавите в вашу иерархию классов больше функциональности.

Теперь ваши фигуры должны уметь немного больше:
 - выводить информацию о себе;
 - проверять правильность своих данных.

Ваши фигуры:
 - фигура (количество сторон равно 0); 
 - треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180); 
 - прямоугольный треугольник (угол `C` всегда равен 90);
 - равнобедренный треугольник (стороны `a` и `c` равны, углы `A` и `C` равны);
 - равносторонний треугольник (все стороны равны, все углы равны 60);
 - четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
 - прямоугольник (стороны `a`,`c` и `b`,`d` попарно равны, все углы равны 90);
 - квадрат (все стороны равны, все углы равны 90);
 - параллелограмм (стороны `a`,`c` и `b`,`d` попарно равны, углы `A`,`C` и `B`,`D` попарно равны);
 - ромб (все стороны равны, углы `A`,`C` и `B`,`D` попарно равны).
 
Вы должны иметь возможность попросить фигуру вывести информацию о себе на консоль, а также узнать, является ли фигура правильной, то есть выполняются ли условия, указанные в списке выше.

Информация о фигуре включает в себя:
 - название фигуры;
 - количество сторон;
 - длины её сторон, если есть;
 - величины её углов, если есть;
 - является ли фигура правильной.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

Реализуйте методы вывода на консоль и проверки правильности фигуры с помощью виртуальных функций и переопределений. Используйте вызов базовой версии метода.

Ваша задача — работать с экземплярами дочерних классов **полиморфно**, то есть с помощью указателя на базовый класс.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Фигура:
Правильная
Количество сторон: 0

Треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Прямоугольный треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=40 C=90

Равнобедренный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Правильная
Количество сторон: 3
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Неправильная
Количество сторон: 4
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Правильная
Количество сторон: 4
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Правильная
Количество сторон: 4
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Неправильная
Количество сторон: 4
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Неправильная
Количество сторон: 4
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
```
</details>
</details>
<br>

<details>
<summary><font size="+1">Task 3. Shapes. Methods</font></summary><br>

In this assignment you will add more functionality to your class hierarchy.

Your shapes should now be able to do a little more:
- display information about yourself;
- check the accuracy of your data.

Your figures:
- figure (number of sides is 0);
- triangle (the sides and angles are arbitrary, the number of sides is 3, the sum of the angles is 180);
- right triangle (angle `C` is always 90);
- isosceles triangle (sides `a` and `c` are equal, angles `A` and `C` are equal);
- equilateral triangle (all sides are equal, all angles are equal to 60);
- quadrilateral (the sides and angles are arbitrary, the number of sides is 4, the sum of the angles is 360);
- rectangle (sides `a`,`c` and `b`,`d` are equal in pairs, all angles are equal to 90);
- square (all sides are equal, all angles are 90);
- parallelogram (sides `a`,`c` and `b`,`d` are equal in pairs, angles `A`,`C` and `B`,`D` are equal in pairs);
- rhombus (all sides are equal, angles `A`, `C` and `B`, `D` are equal in pairs).

You should be able to ask the figure to print information about itself to the console, and also know if the figure is valid, that is, if the conditions specified in the list above are met.

Figure information includes:
- name of the figure;
- number of sides;
- the lengths of its sides, if any;
- the magnitude of its angles, if any;
- whether the figure is correct.

Task: design and implement classes that describe the subject area. Demonstrate how they work: Create one instance of each shape and display information about the shapes.

Implement console output and figure validation methods using virtual functions and overrides. Use a call to the base version of the method.

Your task is to work with instances of child classes polymorphically, that is, using a pointer to the base class.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Figure:
Correct
Number of sides: 0

Triangle:
Correct
Number of sides: 3
Sides: a=10 b=20 c=30
Angles: A=50 B=60 C=70

Right triangle:
Incorrect
Number of sides: 3
Sides: a=10 b=20 c=30
Angles: A=50 B=60 C=90

Right triangle:
Correct
Number of sides: 3
Sides: a=10 b=20 c=30
Angles: A=50 B=40 C=90

Isosceles triangle:
Incorrect
Number of sides: 3
Sides: a=10 b=20 c=10
Angles: A=50 B=60 C=50

Equilateral triangle:
Correct
Number of sides: 3
Sides: a=30 b=30 c=30
Angles: A=60 B=60 C=60

Quadrangle:
Incorrect
Number of sides: 4
Sides: a=10 b=20 c=30 d=40
Angles: A=50 B=60 C=70 D=80

Rectangle:
Correct
Number of sides: 4
Sides: a=10 b=20 c=10 d=20
Angles: A=90 B=90 C=90 D=90

Square:
Correct
Number of sides: 4
Sides: a=20 b=20 c=20 d=20
Angles: A=90 B=90 C=90 D=90

Parallelogram:
Incorrect
Number of sides: 4
Sides: a=20 b=30 c=20 d=30
Angles: A=30 B=40 C=30 D=40

Rhombus:
Incorrect
Number of sides: 4
Sides: a=30 b=30 c=30 d=30
Angles: A=30 B=40 C=30 D=40
```
</details>
</details>
<br>