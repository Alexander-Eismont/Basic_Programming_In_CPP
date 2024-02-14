#pragma once

#include "rectangle.h"

class Square : public Rectangle
{
public:
    Square();

    bool isAllSidesEqual() const;
    bool isAnglesEqual() const;
    bool isCountSidesValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
