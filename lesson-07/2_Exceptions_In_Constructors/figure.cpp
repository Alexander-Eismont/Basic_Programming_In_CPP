#include "figure.h"
#include <iostream>

Figure::Figure() {}

std::string Figure::getFigureName() const { return m_figureName; }

std::vector<int> Figure::getSides() const { return m_sides; }

std::vector<int> Figure::getAngles() const { return m_angles; }

void Figure::printFigureInfo() const
{
    std::cout << getFigureName();
    std::cout << " (sides: ";
    for (int i{0}; i < getSides().size(); i++)
    {
        std::cout << getSides()[i];
        (i == getSides().size() - 1) ? std::cout << "; " : std::cout << ", ";
    }
    std::cout << "angles: ";
    for (int i{0}; i < getAngles().size(); i++)
    {
        std::cout << getAngles()[i];
        (i == getAngles().size() - 1) ? std::cout << "" : std::cout << ", ";
    }
    std::cout << ") created\n";
}
