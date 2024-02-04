### Task 1. Shapes. Number of sides
In this assignment, you will build the first simple class hierarchy for a given problem domain.

The subject area looks like this: there is a figure entity. There are two types of shapes: triangle and quadrilateral. A figure has a number of sides. For an unknown figure, we will assume that this quantity is equal to zero. A triangle has three sides, a quadrilateral has four sides. For any figure, we want to know the number of its sides, **but we should not be able to change the number of sides for a given figure from the outside**.

Task: design and implement classes that describe the subject area. Demonstrate how they work: create one instance of each class and print information about the number of its sides to the console.

### 2. Shapes. Sides and corners
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

### 3. Shapes. Methods
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