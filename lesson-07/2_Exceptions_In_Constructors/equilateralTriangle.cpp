#include "equilateralTriangle.h"
#include "geometryException.h"

EquilateralTriangle::EquilateralTriangle(std::vector<int> sides,
                                         std::vector<int> angles)
    : Triangle(sides, angles)
{
    m_figureName = "Equilateral Triangle";

    if (!isAllAnglesEqual())
        throw GeometryException("All angles are not equal!");
    else if (!isAllSidesEqual())
        throw GeometryException("All sides are not equal!");
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

void EquilateralTriangle::printFigureInfo() const
{
    Triangle::printFigureInfo();
}
