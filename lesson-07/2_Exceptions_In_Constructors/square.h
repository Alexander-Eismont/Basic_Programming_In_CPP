#pragma once

#include "rectangle.h"

class Square : public Rectangle
{
public:
    Square(std::vector<int> sides, std::vector<int> angles);

    bool isAllSidesEqual() const;
    bool isAnglesEqual() const;

    void printFigureInfo() const override;
};
