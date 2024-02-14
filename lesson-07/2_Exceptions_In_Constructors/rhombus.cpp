#include "rhombus.h"
#include "geometryException.h"

Rhombus::Rhombus(std::vector<int> sides, std::vector<int> angles)
    : Parallelogram(sides, angles)
{
    m_figureName = "Rhombus";

    if (!isOppositeAnglesEqual())
        throw GeometryException("Opposite angles aren't equal!");
    else if (!isAllSidesEqual())
        throw GeometryException("All sides are not equal!");
}

bool Rhombus::isOppositeAnglesEqual() const
{
    return (getAngles()[0] == getAngles()[2])
           && (getAngles()[1] == getAngles()[3]);
}

bool Rhombus::isAllSidesEqual() const
{
    return ((getSides()[0] == getSides()[1] && getSides()[2] == getSides()[3]
             && getSides()[0] == getSides()[3]));
}

void Rhombus::printFigureInfo() const { Parallelogram::printFigureInfo(); }
