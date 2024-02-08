#include "quadrangle.h"

Quadrangle::Quadrangle()
    : Figure("Quadrangle", { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { "", "", "", "" }, { "", "", "", "" })
{
    m_figure_name = "Quadrangle";
    m_sides_names = { "a", "b", "c", "d" };
    m_angles_names = { "A", "B", "C", "D" };
}
