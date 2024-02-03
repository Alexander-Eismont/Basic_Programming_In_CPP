#include "figure.h"
#include "triangle.h"
#include "quadrangle.h"

int main()
{
    Figure figure;
    figure.printFigureInfo();

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

    Square square;
    square.printFigureInfo();

    Rhombus rhombus;
    rhombus.printFigureInfo();

    return 0;
}
