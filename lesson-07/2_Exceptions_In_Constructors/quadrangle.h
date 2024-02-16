#pragma once

#include "figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle(std::vector<int> sides, std::vector<int> angles);

    bool isCountSidesValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
