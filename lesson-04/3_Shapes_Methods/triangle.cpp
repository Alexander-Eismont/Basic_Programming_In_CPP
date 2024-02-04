#include "triangle.h"
#include <cmath>
#include <iostream>

Triangle::Triangle()
    : Figure()
{
    m_figureName = "Triangle";
    m_sides = {3, 4, 5};
    m_angles = {50, 60, 70};
    m_sidesNames = {"a", "b", "c"};
    m_anglesNames = {"A", "B", "C"};
}

/*
Checking the triangle for correctness.
The number of sides must be 3.
The sum of the interior angles must be equal to 180 degrees.
The sum of two sides of a triangle is greater than the third
*/
bool Triangle::isFigureValid() const
{
    int anglesSum{0};

    for (int i{0}; i < getSidesCount(); i++)
        anglesSum += getAngles()[i];

    const int sumAnglesTriangle = 180;
    const int countSidesTriangle = 3;

    bool isCountSides = (getSidesCount() == countSidesTriangle);
    bool isSumAngles = (anglesSum == sumAnglesTriangle);
    bool isSideLenght = ((getSides()[0] + getSides()[1] > getSides()[2])
                         && (getSides()[1] + getSides()[2] > getSides()[0])
                         && (getSides()[0] + getSides()[2] > getSides()[1]));

    return (isCountSides && isSumAngles && isSideLenght);
}

void Triangle::printFigureInfo() const
{
    std::cout << "\n";
    Figure::printFigureInfo();

    std::cout << "\nSides: ";
    for (int i{0}; i < getSidesCount(); i++)
        std::cout << getSideName(i) << "=" << getSides()[i] << " ";

    std::cout << "\nAngles: ";
    for (int i{0}; i < getSidesCount(); i++)
        std::cout << getAngleName(i) << "=" << getAngles()[i] << " ";

    std::cout << "\n";
}

RightTriangle::RightTriangle()
    : Triangle()
{
    m_figureName = "Right Triangle";
    m_sides = {3, 4, 5};
    m_angles = {30, 60, 90};
}

/*
The main check for the correctness of a triangle occurs in the main Triangle class.
Here we additionally check that the triangle is right-angled
*/
bool RightTriangle::isFigureValid() const
{
    Triangle::isFigureValid();

    const int rightAngle = 90;

    bool isAngleRight = (getAngles()[2] == rightAngle);
    bool isPythagoreanTheorem = (pow(getSides()[0], 2) + pow(getSides()[1], 2)
                                 == pow(getSides()[2], 2));

    return (isAngleRight && isPythagoreanTheorem);
}

void RightTriangle::printFigureInfo() const
{
    Triangle::printFigureInfo();
}

IsoscelesTriangle::IsoscelesTriangle()
    : Triangle()
{
    m_figureName = "Isosceles Triangle";
    m_sides = {4, 5, 4};
    m_angles = {70, 40, 70};
}

/*
The main check for the correctness of a triangle occurs in the main Triangle class.
Here we additionally check that the triangle is isosceles
*/
bool IsoscelesTriangle::isFigureValid() const
{
    Triangle::isFigureValid();

    bool isSidesACEqual = (getSides()[0] == getSides()[2]);
    bool isAnglesACEqual = (getAngles()[0] == getAngles()[2]);

    return (isSidesACEqual && isAnglesACEqual);
}

void IsoscelesTriangle::printFigureInfo() const
{
    Triangle::printFigureInfo();
}

EquilateralTriangle::EquilateralTriangle()
    : Triangle()
{
    m_figureName = "Equilateral Triangle";
    m_sides = {10, 10, 10};
    m_angles = {60, 60, 60};
}

/*
The main check for the correctness of a triangle occurs in the main Triangle class.
Here we additionally check that the triangle is equilateral
*/
bool EquilateralTriangle::isFigureValid() const
{
    Triangle::isFigureValid();

    bool isAllSidesEqual = (getSides()[0] == getSides()[1]
                            && getSides()[1] == getSides()[2]
                            && getSides()[0] == getSides()[2]);
    bool isAllAnglesEqual = (getAngles()[0] == getAngles()[1]
                             && getAngles()[1] == getAngles()[2]
                             && getAngles()[0] == getAngles()[2]);

    return (isAllSidesEqual && isAllAnglesEqual);
}

void EquilateralTriangle::printFigureInfo() const
{
    Triangle::printFigureInfo();
}
