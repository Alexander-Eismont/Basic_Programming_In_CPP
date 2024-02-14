#pragma once

#include "parallelogram.h"

class Rectangle : public Parallelogram
{
public:
    Rectangle();

    bool isAnglesEqual() const;
    bool isOppositeSidesEqual() const;
    bool isCountSidesValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
