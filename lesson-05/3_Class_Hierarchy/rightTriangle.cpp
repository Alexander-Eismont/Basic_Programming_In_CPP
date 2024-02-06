#include "rightTriangle.h"

RightTriangle::RightTriangle()
    : Triangle()
{
    m_figure_name = "Right triangle";
    m_sides = { 2, 3, 4 };
    m_angles = { 30, 60, 90 };
}