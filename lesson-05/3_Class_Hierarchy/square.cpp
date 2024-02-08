#include "square.h"

Square::Square()
    : Rectangle()
{
    m_figure_name = "Square";
    m_sides = { 10, 10, 10, 10 };
    m_angles = { 90, 90, 90, 90 };
}
