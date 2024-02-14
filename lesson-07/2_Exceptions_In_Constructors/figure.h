#pragma once

#include <string>
#include <vector>

class Figure
{
protected:
    std::string m_figureName;
    std::vector<int> m_sides;
    std::vector<int> m_angles;

public:
    Figure();

    std::string getFigureName() const;
    std::vector<int> getSides() const;
    std::vector<int> getAngles() const;

    virtual void printFigureInfo() const;
};
