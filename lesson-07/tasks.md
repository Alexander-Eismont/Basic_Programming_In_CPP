### 1. Simple exception
In this task you will try to throw and handle an exception.

Create a function `int function(std::string str, int forbidden_length)`. This function must return the length of the passed string if this length is not equal to the value of the passed `forbidden_length` parameter. Otherwise it should throw a `bad_length` exception.

To test the function, organize work with the user. First set the forbidden length, and then read user strings and print their length until the user enters a forbidden length string. After that, tell him that he entered a string of prohibited length, and terminate the program.

### 2. Exceptions in constructors
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