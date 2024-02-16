#pragma once

#include "quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(std::vector<int> sides, std::vector<int> angles);

    bool isOppositeAnglesEqual() const;
    bool isSumAnglesOneSideValid() const;

    void printFigureInfo() const override;
};
