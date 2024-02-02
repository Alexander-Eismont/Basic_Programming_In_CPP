#include "shapes.h"

Figure::Figure(int sides_count, std::string name)
    : m_sides_count{sides_count}
    , m_name{name}
{}

int Figure::getSidesCount()
{
    return m_sides_count;
}

std::string Figure::getName()
{
    return m_name;
}

Triangle::Triangle()
    : Figure(3, "Triangle")
{}

Quadrangle::Quadrangle()
    : Figure(4, "Quadrangle")
{}
