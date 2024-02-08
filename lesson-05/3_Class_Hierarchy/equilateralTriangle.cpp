#include "equilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle()
    : Triangle()
{
    m_figure_name = "Equilateral Triangle";
    m_sides = { 8, 8, 8 };
    m_angles = { 60, 60, 60 };
}
