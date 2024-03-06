#include "Rectangle.h"

Rectangle::Rectangle()
    : Parallelogram()
{
    m_figure_name = "Rectangle";
    m_sides = { 4, 5, 4, 5 };
    m_angles = { 90, 90, 90, 90 };
}