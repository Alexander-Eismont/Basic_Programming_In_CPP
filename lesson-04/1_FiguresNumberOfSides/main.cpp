#include <iostream>
#include "shapes.h"

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
