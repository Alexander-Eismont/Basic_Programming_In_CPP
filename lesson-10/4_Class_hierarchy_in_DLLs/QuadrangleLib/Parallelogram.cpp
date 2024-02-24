#include "Parallelogram.h"

Parallelogram::Parallelogram()
    : Quadrangle()
{
    m_figure_name = "Parallelogram";
    m_sides = { 2, 3, 2, 3 };
    m_angles = { 60, 120, 60, 120 };
}