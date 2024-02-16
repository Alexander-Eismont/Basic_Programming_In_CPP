#pragma once

#include "parallelogram.h"

class Rhombus : public Parallelogram
{
public:
    Rhombus(std::vector<int> sides, std::vector<int> angles);

    bool isAllSidesEqual() const;
    bool isOppositeAnglesEqual() const;

    void printFigureInfo() const override;
};
