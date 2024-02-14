#include "isoscelesTriangle.h"
#include "geometryException.h"

IsoscelesTriangle::IsoscelesTriangle(std::vector<int> sides,
                                     std::vector<int> angles)
    : Triangle(sides, angles)
{
    m_figureName = "Isosceles Triangle";

    if (!isAnglesEqual_1_3())
        throw GeometryException("First and third angles are not equal!");
    else if (!isSidesEqual_1_3())
        throw GeometryException("First and third sides are not equal!");
}

bool IsoscelesTriangle::isAnglesEqual_1_3() const
{
    return getAngles()[0] == getAngles()[2];
}

bool IsoscelesTriangle::isSidesEqual_1_3() const
{
    return getSides()[0] == getSides()[2];
}

void IsoscelesTriangle::printFigureInfo() const { Triangle::printFigureInfo(); }
