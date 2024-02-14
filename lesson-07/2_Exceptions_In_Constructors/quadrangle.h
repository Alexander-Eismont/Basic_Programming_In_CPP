#pragma once

#include "figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle();

    bool isCountSidesValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
