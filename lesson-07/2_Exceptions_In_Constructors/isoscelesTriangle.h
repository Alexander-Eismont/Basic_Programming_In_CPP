#pragma once

#include "triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(std::vector<int> sides, std::vector<int> angles);

    bool isAnglesEqual_1_3() const;
    bool isSidesEqual_1_3() const;

    void printFigureInfo() const override;
};
