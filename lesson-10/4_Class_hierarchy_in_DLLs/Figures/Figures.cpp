#include "../TriangleLib/Triangle.h"
#include "../TriangleLib/RightTriangle.h"
#include "../TriangleLib/IsoscelesTriangle.h"
#include "../TriangleLib/EquilateralTriangle.h"
#include "../QuadrangleLib/Quadrangle.h"
#include "../QuadrangleLib/Parallelogram.h"
#include "../QuadrangleLib/Rectangle.h"
#include "../QuadrangleLib/Rhombus.h"
#include "../QuadrangleLib/Square.h"

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