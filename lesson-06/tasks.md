<details>
<summary><font size="+2">Задача 1. Препроцессорные директивы</font></summary><br>

В этом задании вы используете некоторые препроцессорные директивы, которые вы изучили ранее.

В вашей программе выполните действия:
1. Объявите символьную константу MODE с целочисленным значением.
2. Проверьте, что константа определена, иначе программа не должна скомпилироваться и должна выдать сообщение о необходимости определить MODE.
3. В случае, если MODE имеет значение 0, выведите на консоль «Работаю в режиме тренировки».
4. Если MODE имеет значение 1, определите функцию `add`, которая должна складывать два числа. Выведите на консоль «Работаю в боевом режиме», попросите пользователя ввести два числа и выведите результат сложения с помощью функции `add` на консоль.
5. Если MODE имеет любое другое значение, выведите на консоль «Неизвестный режим. Завершение работы».
 
Обратите внимание: функция `add` должна быть определена **только**, если MODE имеет значение 1.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Работаю в боевом режиме
Введите число 1: 4
Введите число 2: 6
Результат сложения: 10
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Preprocessor directives</font></summary><br>

In this assignment, you use some of the preprocessor directives that you learned earlier.

In your program do the following:
1. Declare a character constant `MODE` with an integer value.
2. Check that the constant is defined, otherwise the program should not compile and should display a message telling you to define `MODE`.
3. If `MODE` is `0`, display `“Working in training mode”` to the console.
4. If `MODE` is `1`, define an `add` function that adds two numbers. Print `"Working in combat mode"` to the console, ask the user to enter two numbers and print the result of the addition using the `add` function to the console.
5. If `MODE` is any other value, print `“Unknown mode. Completion of work."`

Note that the `add` function should **only** be defined if `MODE` is `1`.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
I'm working in combat mode
Enter number 1: 4
Enter number 2: 6
Addition result: 10
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Макрос SUB</font></summary><br>

В этом задании вы создадите простой макрос.

Ваша задача — определить макрос `SUB`, который должен вычитать числа друг из друга и использоваться следующим образом:

```cpp
int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
```

Программа должна выводить результат, указанный ниже:

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
1
2
-2
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Marcos SUB</font></summary><br>

In this task you will create a simple macros.

Your task is to define a `SUB` macros that should subtract numbers from each other and be used like this:

```C++
int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
```
<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
1
2
-2
```
</details>
</details>
<br>
