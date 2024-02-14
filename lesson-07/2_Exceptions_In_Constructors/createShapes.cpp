#include "equilateralTriangle.h"
#include "geometryException.h"
#include "isoscelesTriangle.h"
#include "parallelogram.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "rhombus.h"
#include "rightTriangle.h"
#include "square.h"
#include "triangle.h"
#include <iostream>

void createShapes()
{
    try
    {
        Triangle triangle;
        triangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Triangle error (smth other error): " << error.what() << "\n";
    }

    try
    {
        RightTriangle rightTriangle;
        rightTriangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Right triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Right triangle error (smth other error): " << error.what() << "\n";
    }

    try
    {
        IsoscelesTriangle isoscelesTriangle;
        isoscelesTriangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Isosceles triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Isosceles triangle error (smth other error): " << error.what() << "\n";
    }

    try
    {
        EquilateralTriangle equilateralTriangle;
        equilateralTriangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Equilateral triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Equilateral triangle error (smth other error): " << error.what() << "\n";
    }

    try
    {
        Quadrangle quadrangle;
        quadrangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Quadrangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Quadrangle error (smth other error): " << error.what() << "\n";
    }

    try
    {
        Parallelogram parallelogram;
        parallelogram.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Parallelogram error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Parallelogram error (smth other error): " << error.what() << "\n";
    }

    try
    {
        Rectangle rectangle;
        rectangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Rectangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Rectangle error (smth other error): " << error.what() << "\n";
    }

    try
    {
        Rhombus rhombus;
        rhombus.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Rhombus error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Rhombus error (smth other error): " << error.what() << "\n";
    }

    try
    {
        Square square;
        square.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Rhombus error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Rhombus error (smth other error): " << error.what() << "\n";
    }
}
