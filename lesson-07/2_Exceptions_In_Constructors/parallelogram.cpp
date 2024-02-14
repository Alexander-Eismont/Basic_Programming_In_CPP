#include "parallelogram.h"
#include "geometryException.h"

Parallelogram::Parallelogram(std::vector<int> sides, std::vector<int> angles)
    : Quadrangle(sides, angles)
{
    m_figureName = "Parallelogram";

    if (!isOppositeAnglesEqual())
        throw GeometryException("Opposite angles aren't equal!");
    else if (!isSumAnglesOneSideValid())
        throw GeometryException(
            "The sum of angles adjacent to one side is not 180°");
}

bool Parallelogram::isOppositeAnglesEqual() const
{
    return (getAngles()[0] == getAngles()[2])
           && (getAngles()[1] == getAngles()[3]);
}

bool Parallelogram::isSumAnglesOneSideValid() const
{
    const int sumAnglesOneSide{180};

    int anglesSum_1_2 = getAngles()[0] + getAngles()[1];
    int anglesSum_3_4 = getAngles()[2] + getAngles()[3];

    return (anglesSum_1_2 == sumAnglesOneSide)
           && (anglesSum_3_4 == sumAnglesOneSide);
}

void Parallelogram::printFigureInfo() const { Quadrangle::printFigureInfo(); }
