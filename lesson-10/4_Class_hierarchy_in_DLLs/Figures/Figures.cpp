#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

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

    return 0;
}