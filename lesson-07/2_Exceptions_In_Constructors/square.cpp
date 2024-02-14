#include "square.h"
#include "geometryException.h"

Square::Square()
    : Rectangle()
{
    m_figureName = "Square";
    m_sides = { 10, 10, 10, 10 };
    m_angles = { 90, 90, 90, 90 };

    if (!isAllSidesEqual())
        throw GeometryException("All sides are not equal!");
    else if (!isAnglesEqual())
        throw GeometryException("Angles are not equal!");
    else if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
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
            && getAngles()[2] == rectangleAngle && getAngles()[3] == rectangleAngle);
}

bool Square::isCountSidesValid() const
{
    const int countSidesTriangle{4};

    return getSides().size() == countSidesTriangle;
}

bool Square::isAnglesSumValid() const
{
    const int sumAnglesTriangle{360};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void Square::printFigureInfo() const { Rectangle::printFigureInfo(); }
