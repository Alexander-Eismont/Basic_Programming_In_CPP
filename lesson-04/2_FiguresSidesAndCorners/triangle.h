#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure
{
public:
    Triangle();
};

class RightTriangle : public Triangle
{
public:
    RightTriangle();
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle();
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle();
};

#endif // TRIANGLE_H
