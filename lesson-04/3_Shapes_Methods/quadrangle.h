#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "figure.h"

class Quadrangle:public Figure
{
public:
    Quadrangle();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

class Rectangle : public Parallelogram
{
public:
    Rectangle();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

class Square : public Rectangle
{
public:
    Square();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

class Rhombus : public Parallelogram
{
public:
    Rhombus();

    bool isFigureValid() const override;
    void printFigureInfo() const override;
};

#endif // QUADRANGLE_H
