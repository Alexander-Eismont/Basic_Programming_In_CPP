#include "parallelogram.h"
#include "geometryException.h"

Parallelogram::Parallelogram()
    : Quadrangle()
{
    m_figureName = "Parallelogram";
    m_sides = { 2, 3, 2, 3 };
    m_angles = {60, 12, 60, 120};

    if (!isOppositeAnglesEqual())
        throw GeometryException("Opposite angles aren't equal!");
    else if (!isSumAnglesOneSideValid())
        throw GeometryException("The sum of angles adjacent to one side is not 180°");
    else if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
}

bool Parallelogram::isOppositeAnglesEqual() const
{
    return (getAngles()[0] == getAngles()[2]) && (getAngles()[1] == getAngles()[3]);
}

bool Parallelogram::isSumAnglesOneSideValid() const
{
    const int sumAnglesOneSide{180};

    int anglesSum_1_2 = getAngles()[0] + getAngles()[1];
    int anglesSum_3_4 = getAngles()[2] + getAngles()[3];

    return (anglesSum_1_2 == sumAnglesOneSide) && (anglesSum_3_4 == sumAnglesOneSide);
}

bool Parallelogram::isCountSidesValid() const
{
    const int countSidesTriangle{4};

    return getSides().size() == countSidesTriangle;
}

bool Parallelogram::isAnglesSumValid() const
{
    const int sumAnglesTriangle{360};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void Parallelogram::printFigureInfo() const { Quadrangle::printFigureInfo(); }
