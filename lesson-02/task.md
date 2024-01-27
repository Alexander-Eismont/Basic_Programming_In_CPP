### 1. Two numbers calculator

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

### 2. Counter

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