#include "rightTriangle.h"
#include "geometryException.h"

RightTriangle::RightTriangle()
    : Triangle()
{
    m_figureName = "Right triangle";
    m_sides = {3, 4, 5};
    m_angles = {30, 60, 90};

    if (!isThirdAngleRight())
        throw GeometryException("Third angle is not right!");
    else if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isSidesLengthValid())
        throw GeometryException("Incorrect sides lengths!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
}

bool RightTriangle::isThirdAngleRight() const
{
    const int rightAngle{90};

    return getAngles()[2] == rightAngle;
}

bool RightTriangle::isCountSidesValid() const
{
    const int countSidesTriangle{3};

    return getSides().size() == countSidesTriangle;
}

bool RightTriangle::isSidesLengthValid() const
{
    return ((getSides()[0] + getSides()[1] > getSides()[2])
            && (getSides()[1] + getSides()[2] > getSides()[0])
            && (getSides()[0] + getSides()[2] > getSides()[1]));
}

bool RightTriangle::isAnglesSumValid() const
{
    const int sumAnglesTriangle{180};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void RightTriangle::printFigureInfo() const { Triangle::printFigureInfo(); }
