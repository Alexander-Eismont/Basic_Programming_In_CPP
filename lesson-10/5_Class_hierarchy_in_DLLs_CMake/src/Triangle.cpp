#include "../include/Triangle.h"

Triangle::Triangle()
    : Figure("Triangle", { 0, 0, 0 }, { 0, 0, 0 }, { "", "", "" }, { "", "", "" })
{
    m_sides_names = { "a", "b", "c" };
    m_angles_names = { "A", "B", "C" };
}