<details>
<summary><font size="+2">Задача 1. Сравнения в дробях</font></summary><br>

В этом задании вы переопределите операторы сравнения для дробей.

Дан код на C++:
```cpp
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
```

Ваша задача — дописать класс Fraction так, чтобы программа компилировалась и работала корректно.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
f1 not == f2
f1 != f2
f1 not < f2
f1 > f2
f1 not <= f2
f1 >= f2
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Comparisons in fractions</font></summary><br>

In this activity, you will redefine comparison operators for fractions.

Given the code in C++:

```C++
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
```

Your task is to add the Fraction class so that the program compiles and works correctly.

<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
f1 not == f2
f1 != f2
f1 not < f2
f1 > f2
f1 not <= f2
f1 >= f2
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Остальные операции с дробями</font></summary><br>

В этом задании вы переопределите остальные операторы для класса дроби.

Необходимо переопределить операторы для класса `Fraction` из предыдущего задания:
 - сложение;
 - вычитание;
 - умножение;
 - деление;
 - унарный минус;
 - инкремент постфиксный и префиксный;
 - декремент постфиксный и префиксный.

Продемонстрируйте работу ваших операторов. Попросите пользователя ввести две дроби и покажите результат каждой операции. Операции декремента и инкремента отнимают и прибавляют к дроби 1 соответственно.

Составьте выражения, содержащие постфиксный и префиксный инкремент и декремент, чтобы продемонстрировать разницу между постфиксной и префиксной версиями.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

#### Консоль
```
Введите числитель дроби 1: 3
Введите знаменатель дроби 1: 4
Введите числитель дроби 2: 4
Введите знаменатель дроби 2: 5
3/4 + 4/5 = 31/20
3/4 - 4/5 = -1/20
3/4 * 4/5 = 3/5
3/4 / 4/5 = 15/16
++3/4 * 4/5 = 7/5
Значение дроби 1 = 7/4
7/4-- * 4/5 = 7/5
Значени дроби 1 = 3/4
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Other operations with fractions</font></summary><br>

In this assignment, you will redefine the remaining operators for the fraction class.

It is necessary to redefine the operators for the Fraction class from the previous task:
- addition;
- subtraction;
- multiplication;
- division;
- unary minus;
- postfix and prefix increment;
- postfix and prefix decrement.

Demonstrate the work of your operators. Ask the user to enter two fractions and show the result of each operation. The decrement and increment operations subtract and add 1 to the fraction, respectively.

Construct expressions containing postfix and prefix increment and decrement to demonstrate the difference between the postfix and prefix versions.
<details>
<summary><font size="+1">Example of program operation</font></summary>

#### Console
```
Enter the numerator of the fraction 1:3
Enter the denominator of the fraction 1:4
Enter the numerator of the fraction 2: 4
Enter the denominator of the fraction 2:5
3/4 + 4/5 = 31/20
3/4 - 4/5 = -1/20
3/4 * 4/5 = 3/5
3/4 / 4/5 = 15/16
++3/4 * 4/5 = 7/5
Fraction value 1 = 7/4
7/4-- * 4/5 = 7/5
Fraction values 1 = 3/4
```
</details>
</details>
<br>