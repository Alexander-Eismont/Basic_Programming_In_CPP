#include "triangle.h"

Triangle::Triangle()
    : Figure("Triangle", {0, 0, 0}, {0, 0, 0}, {"", "", ""}, {"", "", ""})
{
    m_sides_names = {"a", "b", "c"};
    m_angles_names = {"A", "B", "C"};
}

RightTriangle::RightTriangle()
    : Triangle()
{
    m_figure_name = "Right triangle";
    m_sides = {2, 3, 4};
    m_angles = {30, 60, 90};
}

IsoscelesTriangle::IsoscelesTriangle()
    : Triangle()
{
    m_figure_name = "Isosceles Triangle";
    m_sides = {4, 5, 4};
    m_angles = {70, 40, 70};
}

EquilateralTriangle::EquilateralTriangle()
    : Triangle()
{
    m_figure_name = "Equilateral Triangle";
    m_sides = {8, 8, 8};
    m_angles = {60, 60, 60};
}
