#include "quadrangle.h"
#include "geometryException.h"

Quadrangle::Quadrangle()
    : Figure()
{
    m_figureName = "Quadrangle";
    m_sides = {2, 3, 3, 1};
    m_angles = {60, 40, 100, 160};

    if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
}

bool Quadrangle::isCountSidesValid() const
{
    const int countSidesTriangle{4};

    return getSides().size() == countSidesTriangle;
}

bool Quadrangle::isAnglesSumValid() const
{
    const int sumAnglesTriangle{360};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void Quadrangle::printFigureInfo() const { Figure::printFigureInfo(); }
