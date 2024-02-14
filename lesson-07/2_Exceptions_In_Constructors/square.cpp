#include "square.h"
#include "geometryException.h"

Square::Square(std::vector<int> sides, std::vector<int> angles)
    : Rectangle(sides, angles)
{
    m_figureName = "Square";

    if (!isAllSidesEqual())
        throw GeometryException("All sides are not equal!");
    else if (!isAnglesEqual())
        throw GeometryException("Angles are not equal!");
}

bool Square::isAllSidesEqual() const
{
    return ((getSides()[0] == getSides()[1] && getSides()[2] == getSides()[3]
             && getSides()[0] == getSides()[3]));
}

bool Square::isAnglesEqual() const
{
    const int rectangleAngle{90};

    return (getAngles()[0] == rectangleAngle && getAngles()[1] == rectangleAngle
            && getAngles()[2] == rectangleAngle
            && getAngles()[3] == rectangleAngle);
}

void Square::printFigureInfo() const { Rectangle::printFigureInfo(); }
