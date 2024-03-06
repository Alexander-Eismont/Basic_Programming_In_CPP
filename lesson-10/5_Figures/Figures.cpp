#include "Triangles/include/EquilateralTriangle.h"
#include "Triangles/include/IsoscelesTriangle.h"
#include "Triangles/include/RightTriangle.h"
#include "Triangles/include/Triangle.h"
#include "Quadrangles/include/Parallelogram.h"
#include "Quadrangles/include/Quadrangle.h"
#include "Quadrangles/include/Rectangle.h"
#include "Quadrangles/include/Rhombus.h"
#include "Quadrangles/include/Square.h"

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