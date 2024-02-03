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