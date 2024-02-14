#pragma once

#include "triangle.h"

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle();

    bool isAllAnglesEqual() const;
    bool isAllSidesEqual() const;
    bool isCountSidesValid() const;
    bool isSidesLengthValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
