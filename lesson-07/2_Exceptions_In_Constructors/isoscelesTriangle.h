#pragma once

#include "triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle();

    bool isAnglesEqual_1_3() const;
    bool isSidesEqual_1_3() const;
    bool isSidesLengthValid() const;
    bool isAnglesSumValid() const;
    bool isCountSidesValid() const;

    void printFigureInfo() const override;
};
