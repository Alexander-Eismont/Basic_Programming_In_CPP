#pragma once

#include "figure.h"

class Triangle : public Figure
{
public:
    Triangle(std::vector<int> sides, std::vector<int> angles);

    bool isCountSidesValid() const;
    bool isSidesLengthValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
