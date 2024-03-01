#include "include/EquilateralTriangle.h"
#include "include/IsoscelesTriangle.h"
#include "include/RightTriangle.h"
#include "include/Triangle.h"
#include "include/Parallelogram.h"
#include "include/Quadrangle.h"
#include "include/Rectangle.h"
#include "include/Rhombus.h"
#include "include/Square.h"

int main()
{
    Triangle triangle;
    triangle.printFigureInfo();

    RightTriangle rightTriangle;
    rightTriangle.printFigureInfo();

    IsoscelesTriangle isoscelesTriangle;
    isoscelesTriangle.printFigureInfo();

    EquilateralTriangle equilateralTriangle;
    equilateralTriangle.printFigureInfo();

    Quadrangle quadrangle;
    quadrangle.printFigureInfo();

    Parallelogram parallelogram;
    parallelogram.printFigureInfo();

    Rectangle rectangle;
    rectangle.printFigureInfo();

    Rhombus rhombus;
    rhombus.printFigureInfo();

    Square square;
    square.printFigureInfo();

    system("pause");

    return 0;
}