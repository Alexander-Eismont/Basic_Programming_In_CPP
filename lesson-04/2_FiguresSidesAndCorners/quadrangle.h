#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle();
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram();
};

class Rectangle : public Parallelogram
{
public:
    Rectangle();
};

class Rhombus : public Parallelogram
{
public:
    Rhombus();
};

class Square : public Rectangle
{
public:
    Square();
};

#endif // QUADRANGLE_H
