#include "rectangle.h"
#include "geometryException.h"

Rectangle::Rectangle(std::vector<int> sides, std::vector<int> angles)
    : Parallelogram(sides, angles)
{
    m_figureName = "Rectangle";

    if (!isAnglesEqual())
        throw GeometryException("Angles are not equal!");
    else if (!isOppositeSidesEqual())
        throw GeometryException("Opposite sides are not equal!");
}

bool Rectangle::isAnglesEqual() const
{
    const int rectangleAngle{90};

    return (getAngles()[0] == rectangleAngle && getAngles()[1] == rectangleAngle
            && getAngles()[2] == rectangleAngle
            && getAngles()[3] == rectangleAngle);
}

bool Rectangle::isOppositeSidesEqual() const
{
    return (getSides()[0] == getSides()[2]) && (getSides()[1] == getSides()[3]);
}

void Rectangle::printFigureInfo() const { Parallelogram::printFigureInfo(); }
