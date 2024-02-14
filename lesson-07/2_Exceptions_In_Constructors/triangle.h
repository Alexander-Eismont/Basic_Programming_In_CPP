#pragma once

#include "figure.h"

class Triangle : public Figure
{
public:
    Triangle();

    bool isCountSidesValid() const;
    bool isSidesLengthValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
