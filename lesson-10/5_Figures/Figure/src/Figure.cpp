#include "../include/Figure.h"
#include <iostream>

Figure::Figure(const std::string& figure_name,
    const std::vector<int>& sides,
    const std::vector<int>& angles,
    const std::vector<std::string>& sides_names,
    const std::vector<std::string>& angles_names)
    : m_figure_name{ figure_name }
    , m_sides{ sides }
    , m_angles{ angles }
    , m_sides_names{ sides_names }
    , m_angles_names{ angles_names }
{}

const std::vector<int>& Figure::getAngles() const
{
    return m_angles;
}

const std::vector<int>& Figure::getSides() const
{
    return m_sides;
}

const std::vector<std::string>& Figure::getSidesNames() const
{
    return m_sides_names;
}

const std::vector<std::string>& Figure::getAnglesNames() const
{
    return m_angles_names;
}

const std::string& Figure::getSideName(int index) const
{
    return m_sides_names.at(index);
}

const std::string& Figure::getAngleName(int index) const
{
    return m_angles_names.at(index);
}

std::string Figure::getFigureName() const
{
    return m_figure_name;
}

void Figure::printFigureInfo() const
{
    std::cout << getFigureName() << ":";

    std::cout << "\nSides: ";
    for (int i{ 0 }; i < m_sides.size(); i++)
        std::cout << getSideName(i) << "=" << getSides()[i] << " ";

    std::cout << "\nAngles: ";
    for (int i{ 0 }; i < m_angles.size(); i++)
        std::cout << getAngleName(i) << "=" << getAngles()[i] << " ";

    std::cout << "\n\n";
}