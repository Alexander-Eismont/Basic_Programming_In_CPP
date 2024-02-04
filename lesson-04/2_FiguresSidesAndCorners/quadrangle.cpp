#include "quadrangle.h"

Quadrangle::Quadrangle()
    : Figure("Quadrangle", {0, 0, 0, 0}, {0, 0, 0, 0}, {"", "", "", ""}, {"", "", "", ""})
{
    m_figure_name = "Quadrangle";
    m_sides_names = {"a", "b", "c", "d"};
    m_angles_names = {"A", "B", "C", "D"};
}

Parallelogram::Parallelogram()
    : Quadrangle()
{
    m_figure_name = "Parallelogram";
    m_sides = {2, 3, 2, 3};
    m_angles = {60, 120, 60, 120};
}

Rectangle::Rectangle()
    : Parallelogram()
{
    m_figure_name = "Rectangle";
    m_sides = {4, 5, 4, 5};
    m_angles = {90, 90, 90, 90};
}

Rhombus::Rhombus()
    : Parallelogram()
{
    m_figure_name = "Rhombus";
    m_sides = {7, 7, 7, 7};
    m_angles = {40, 140, 40, 140};
}

Square::Square()
    : Rectangle()
{
    m_figure_name = "Square";
    m_sides = {10, 10, 10, 10};
    m_angles = {90, 90, 90, 90};
}
