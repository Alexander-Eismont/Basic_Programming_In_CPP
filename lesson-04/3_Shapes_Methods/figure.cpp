#include "figure.h"
#include <iostream>

Figure::Figure()
{
    m_figureName = "Figure";
}

std::string Figure::getFigureName() const
{
    return m_figureName;
}

std::vector<std::string> Figure::getSidesNames() const
{
    return m_sidesNames;
}

std::vector<std::string> Figure::getAnglesNames() const
{
    return m_anglesNames;
}

std::string Figure::getSideName(int index) const
{
    return m_sidesNames.at(index);
}

std::string Figure::getAngleName(int index) const
{
    return m_anglesNames.at(index);
}

std::vector<int> Figure::getSides() const
{
    return m_sides;
}

std::vector<int> Figure::getAngles() const
{
    return m_angles;
}

int Figure::getSidesCount() const
{
    return m_sides.size();
}

bool Figure::isFigureValid() const
{
    return getSidesCount() == 0;
}

void Figure::printFigureInfo() const
{
    std::cout << getFigureName() << ":\n";
    isFigureValid() ? std::cout << "Correct\n" : std::cout << "Incorrect\n";
    std::cout << "Number of sides: " << getSidesCount();
}
