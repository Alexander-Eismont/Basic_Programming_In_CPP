#pragma once

#include "quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram();

    bool isOppositeAnglesEqual() const;
    bool isSumAnglesOneSideValid() const;
    bool isCountSidesValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
