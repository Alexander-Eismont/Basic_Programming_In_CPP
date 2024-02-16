#pragma once

#include "triangle.h"

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(std::vector<int> sides, std::vector<int> angles);

    bool isAllAnglesEqual() const;
    bool isAllSidesEqual() const;

    void printFigureInfo() const override;
};
