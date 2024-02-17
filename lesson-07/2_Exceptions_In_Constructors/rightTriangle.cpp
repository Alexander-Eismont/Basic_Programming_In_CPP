#include "rightTriangle.h"
#include "geometryException.h"

RightTriangle::RightTriangle(std::vector<int> sides, std::vector<int> angles)
    : Triangle(sides, angles)
{
    m_figureName = "Right Triangle";

    if (!isThirdAngleRight())
        throw GeometryException("Third angle is not right!");
}

bool RightTriangle::isThirdAngleRight() const
{
    const int rightAngle{90};

    return getAngles()[2] == rightAngle;
}

void RightTriangle::printFigureInfo() const { Triangle::printFigureInfo(); }
