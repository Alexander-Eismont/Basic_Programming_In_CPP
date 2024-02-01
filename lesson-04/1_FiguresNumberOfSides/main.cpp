#include <iostream>
#include "shapes.h"
// class Figure
// {
// private:
//     int m_sides_count;
//     std::string m_name;

// public:
//     Figure(int sides_count = 0, std::string name = "Figure")
//         : m_sides_count{sides_count}
//         , m_name{name}
//     {}

//     int getSidesCount() { return m_sides_count; }

//     std::string getName() { return m_name; }
// };

// class Triangle : public Figure
// {
// public:
//     Triangle(int sides_count = 3, std::string name = "Triangle")
//         : Figure(sides_count, name)
//     {}
// };

// class Quadrangle : public Figure
// {
// public:
//     Quadrangle(int sides_count = 4, std::string name = "Quadrangle")
//         : Figure(sides_count, name)
//     {}
// };

int main()
{
    std::cout << "Number of sides:\n";

    Figure figure;

    std::cout << figure.getName() << ": ";
    std::cout << figure.getSidesCount() << "\n";

    Triangle triangle;

    std::cout << triangle.getName() << ": ";
    std::cout << triangle.getSidesCount() << "\n";

    Quadrangle quadrangle;

    std::cout << quadrangle.getName() << ": ";
    std::cout << quadrangle.getSidesCount() << "\n";

    return 0;
}
