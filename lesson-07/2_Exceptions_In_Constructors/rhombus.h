#pragma once

#include "parallelogram.h"

class Rhombus : public Parallelogram
{
public:
    Rhombus();

    bool isAllSidesEqual() const;
    bool isOppositeAnglesEqual() const;
    bool isCountSidesValid() const;
    bool isAnglesSumValid() const;

    void printFigureInfo() const override;
};
