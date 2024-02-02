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
    Triangle();
};

class Quadrangle : public Figure
{
public:
    Quadrangle();
};

#endif // SHAPES_H
