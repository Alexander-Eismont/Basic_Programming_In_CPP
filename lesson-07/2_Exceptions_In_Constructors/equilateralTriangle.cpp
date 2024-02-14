#include "equilateralTriangle.h"
#include "geometryException.h"

EquilateralTriangle::EquilateralTriangle()
    : Triangle()
{
    m_figureName = "Equilateral Triangle";
    m_sides = {8, 8, 3};
    m_angles = {60, 60, 60};

    if (!isAllAnglesEqual())
        throw GeometryException("All angles are not equal!");
    else if (!isAllSidesEqual())
        throw GeometryException("All sides are not equal!");
    else if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isSidesLengthValid())
        throw GeometryException("Incorrect sides lengths!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
}

bool EquilateralTriangle::isAllAnglesEqual() const
{
    return ((getAngles()[0] == getAngles()[1] && getAngles()[1] == getAngles()[2]
             && getAngles()[0] == getAngles()[2]));
}

bool EquilateralTriangle::isAllSidesEqual() const
{
    return ((getSides()[0] == getSides()[1] && getSides()[1] == getSides()[2]
             && getSides()[0] == getSides()[2]));
}

bool EquilateralTriangle::isCountSidesValid() const
{
    const int countSidesTriangle{3};

    return getSides().size() == countSidesTriangle;
}

bool EquilateralTriangle::isSidesLengthValid() const
{
    return ((getSides()[0] + getSides()[1] > getSides()[2])
            && (getSides()[1] + getSides()[2] > getSides()[0])
            && (getSides()[0] + getSides()[2] > getSides()[1]));
}

bool EquilateralTriangle::isAnglesSumValid() const
{
    const int sumAnglesTriangle{180};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void EquilateralTriangle::printFigureInfo() const { Triangle::printFigureInfo(); }
