#include "rectangle.h"
#include "geometryException.h"

Rectangle::Rectangle()
    : Parallelogram()
{
    m_figureName = "Rectangle";
    m_sides = { 4, 5, 4, 5 };
    m_angles = {90, 90, 90, 90};

    if (!isAnglesEqual())
        throw GeometryException("Angles are not equal!");
    else if (!isOppositeSidesEqual())
        throw GeometryException("Opposite sides are not equal!");
    else if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
}

bool Rectangle::isAnglesEqual() const
{
    const int rectangleAngle{90};

    return (getAngles()[0] == rectangleAngle && getAngles()[1] == rectangleAngle
            && getAngles()[2] == rectangleAngle && getAngles()[3] == rectangleAngle);
}

bool Rectangle::isOppositeSidesEqual() const
{
    return (getSides()[0] == getSides()[2]) && (getSides()[1] == getSides()[3]);
}

bool Rectangle::isCountSidesValid() const
{
    const int countSidesTriangle{4};

    return getSides().size() == countSidesTriangle;
}

bool Rectangle::isAnglesSumValid() const
{
    const int sumAnglesTriangle{360};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void Rectangle::printFigureInfo() const { Parallelogram::printFigureInfo(); }
