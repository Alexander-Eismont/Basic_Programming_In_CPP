#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>

class Figure
{
protected:
    std::string m_figure_name;
    std::vector<int> m_angles;
    std::vector<int> m_sides;
    std::vector<std::string> m_sides_names;
    std::vector<std::string> m_angles_names;

public:
    Figure(const std::string& figure_name,
        const std::vector<int>& sides,
        const std::vector<int>& angles,
        const std::vector<std::string>& sides_names,
        const std::vector<std::string>& angles_names);

    const std::vector<int>& getAngles() const;
    const std::vector<int>& getSides() const;
    const std::vector<std::string>& getSidesNames() const;
    const std::vector<std::string>& getAnglesNames() const;

    const std::string& getSideName(int index) const;
    const std::string& getAngleName(int index) const;

    std::string getFigureName() const;
    void printFigureInfo() const;
};

#endif // FIGURE_H