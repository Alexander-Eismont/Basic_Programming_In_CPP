#pragma once

#include "triangle.h"

class RightTriangle : public Triangle
{
public:
    RightTriangle();

    bool isThirdAngleRight() const;
    bool isCountSidesValid() const;
    bool isSidesLengthValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
