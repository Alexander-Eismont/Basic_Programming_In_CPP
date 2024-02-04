#include "triangle.h"
#include "quadrangle.h"

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
