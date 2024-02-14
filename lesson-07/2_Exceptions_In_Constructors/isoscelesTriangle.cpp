#include "isoscelesTriangle.h"
#include "geometryException.h"

IsoscelesTriangle::IsoscelesTriangle()
    : Triangle()
{
    m_figureName = "Isosceles Triangle";
    m_sides = {4, 5, 5};
    m_angles = {70, 40, 70};

    if (!isAnglesEqual_1_3())
        throw GeometryException("First and third angles are not equal!");
    else if (!isSidesEqual_1_3())
        throw GeometryException("First and third sides are not equal!");
    else if (!isSidesLengthValid())
        throw GeometryException("Incorrect sides lengths!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
    else if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
}

bool IsoscelesTriangle::isAnglesEqual_1_3() const { return getAngles()[0] == getAngles()[2]; }

bool IsoscelesTriangle::isSidesEqual_1_3() const { return getSides()[0] == getSides()[2]; }

bool IsoscelesTriangle::isSidesLengthValid() const
{
    return ((getSides()[0] + getSides()[1] > getSides()[2])
            && (getSides()[1] + getSides()[2] > getSides()[0])
            && (getSides()[0] + getSides()[2] > getSides()[1]));
}

bool IsoscelesTriangle::isAnglesSumValid() const
{
    const int sumAnglesTriangle{180};
    int anglesSum{0};

    for (auto &angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

bool IsoscelesTriangle::isCountSidesValid() const
{
    const int countSidesTriangle{3};

    return getSides().size() == countSidesTriangle;
}

void IsoscelesTriangle::printFigureInfo() const { Triangle::printFigureInfo(); }
