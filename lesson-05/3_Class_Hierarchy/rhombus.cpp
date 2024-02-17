#include "rhombus.h"

Rhombus::Rhombus()
    : Parallelogram()
{
    m_figure_name = "Rhombus";
    m_sides = { 7, 7, 7, 7 };
    m_angles = { 40, 140, 40, 140 };
}
