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
        Triangle triangle({3, 6, 8}, {50, 60, 70});
        triangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Triangle error (smth other error): " << error.what()
                  << "\n";
    }

    try
    {
        RightTriangle rightTriangle({3, 4, 5}, {30, 0, 90});
        rightTriangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Right triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Right triangle error (smth other error): " << error.what()
                  << "\n";
    }

    try
    {
        IsoscelesTriangle isoscelesTriangle({5, 4, 5}, {70, 30, 80});
        isoscelesTriangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Isosceles triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Isosceles triangle error (smth other error): "
                  << error.what() << "\n";
    }

    try
    {
        EquilateralTriangle equilateralTriangle({3, 3, 4}, {60, 60, 60});
        equilateralTriangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Equilateral triangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Equilateral triangle error (smth other error): "
                  << error.what() << "\n";
    }

    try
    {
        Quadrangle quadrangle({1, 2, 3, 4}, {60, 40, 100, 160});
        quadrangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Quadrangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Quadrangle error (smth other error): " << error.what()
                  << "\n";
    }

    try
    {
        Parallelogram parallelogram({2, 3, 2, 3}, {60, 12, 60, 120});
        parallelogram.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Parallelogram error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Parallelogram error (smth other error): " << error.what()
                  << "\n";
    }

    try
    {
        Rectangle rectangle({4, 5, 4, 5}, {90, 90, 90, 90});
        rectangle.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Rectangle error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Rectangle error (smth other error): " << error.what()
                  << "\n";
    }

    try
    {
        Rhombus rhombus({7, 7, 7, 8}, {40, 140, 40, 140});
        rhombus.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Rhombus error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Rhombus error (smth other error): " << error.what()
                  << "\n";
    }

    try
    {
        Square square({10, 10, 10, 10}, {90, 90, 90, 90});
        square.printFigureInfo();
    }
    catch (const GeometryException& error)
    {
        std::cerr << "Square error: " << error.what() << "\n";
    }
    catch (std::exception& error)
    {
        std::cerr << "Square error (smth other error): " << error.what()
                  << "\n";
    }
}
