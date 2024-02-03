#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle:public Figure
{
public:
    Triangle();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

class RightTriangle : public Triangle
{
public:
    RightTriangle();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

#endif // TRIANGLE_H
