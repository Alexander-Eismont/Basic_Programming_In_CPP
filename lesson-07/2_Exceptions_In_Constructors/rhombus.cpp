#include "rhombus.h"
#include "geometryException.h"

Rhombus::Rhombus()
    : Parallelogram()
{
    m_figureName = "Rhombus";
    m_sides = { 7, 7, 7, 7 };
    m_angles = {40, 140, 40, 140};

    if (!isOppositeAnglesEqual())
        throw GeometryException("Opposite angles aren't equal!");
    else if (!isAllSidesEqual())
        throw GeometryException("All sides are not equal!");
    else if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
}

bool Rhombus::isOppositeAnglesEqual() const
{
    return (getAngles()[0] == getAngles()[2]) && (getAngles()[1] == getAngles()[3]);
}

bool Rhombus::isAllSidesEqual() const
{
    return ((getSides()[0] == getSides()[1] && getSides()[2] == getSides()[3]
             && getSides()[0] == getSides()[3]));
}

bool Rhombus::isCountSidesValid() const
{
    const int countSidesTriangle{4};

    return getSides().size() == countSidesTriangle;
}

bool Rhombus::isAnglesSumValid() const
{
    const int sumAnglesTriangle{360};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void Rhombus::printFigureInfo() const { Parallelogram::printFigureInfo(); }
