#ifndef SHAPES_H
#define SHAPES_H

#include <string>

class Figure
{
private:
    int m_sides_count;
    std::string m_name;

public:
    Figure(int sides_count = 0, std::string name = "Figure");

    int getSidesCount();

    std::string getName();
};

class Triangle : public Figure
{
public:
    Triangle(int sides_count = 3, std::string name = "Triangle");
};

class Quadrangle : public Figure
{
public:
    Quadrangle(int sides_count = 4, std::string name = "Quadrangle");
};

#endif // SHAPES_H
