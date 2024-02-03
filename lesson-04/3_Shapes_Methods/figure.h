#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>

class Figure
{
protected:
    std::string m_figureName;
    std::vector<std::string> m_sidesNames;
    std::vector<std::string> m_anglesNames;
    std::vector<int> m_sides;
    std::vector<int> m_angles;

public:
    Figure();

    std::string getFigureName() const;
    int getSidesCount() const;

    std::vector<std::string> getSidesNames() const;
    std::vector<std::string> getAnglesNames() const;

    std::string getSideName(int index) const;
    std::string getAngleName(int index) const;

    std::vector<int> getSides() const;
    std::vector<int> getAngles() const;

    virtual bool isFigureValid() const;
    virtual void printFigureInfo() const;
};

#endif // FIGURE_H
