#pragma once

#include "triangle.h"

class RightTriangle : public Triangle
{
public:
    RightTriangle(std::vector<int> sides, std::vector<int> angles);

    bool isThirdAngleRight() const;

    void printFigureInfo() const override;
};
