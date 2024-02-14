#pragma once

#include "parallelogram.h"

class Rectangle : public Parallelogram
{
public:
    Rectangle(std::vector<int> sides, std::vector<int> angles);

    bool isAnglesEqual() const;
    bool isOppositeSidesEqual() const;

    void printFigureInfo() const override;
};
