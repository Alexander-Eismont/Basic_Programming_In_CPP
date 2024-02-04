#include "quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle()
    : Figure()
{
    m_figureName = "Quadrangle";
    m_sides = {10, 20, 30, 40};
    m_angles = {120, 30, 70, 140};
    m_sidesNames = {"a", "b", "c", "d"};
    m_anglesNames = {"A", "B", "C", "D"};
}

/*
Check for a quadrilateral.
The number of sides must be 4
The sum of interior angles is 360 degrees
Opposite sides are equal
*/
bool Quadrangle::isFigureValid() const
{
    int anglesSum{0};

    for (int i{0}; i < getSidesCount(); i++)
        anglesSum += getAngles()[i];

    const int sumAnglesQuadrangle = 360;
    const int countSidesQuadrangle = 4;

    bool isCountSides = (getSidesCount() == countSidesQuadrangle);
    bool isSumAngles = (anglesSum == sumAnglesQuadrangle);
    bool isOppositeSidesEqual = (getSides()[0] == getSides()[2])
                                && (getSides()[1] == getSides()[3]);

    return (isCountSides && isSumAngles && isOppositeSidesEqual);
}

void Quadrangle::printFigureInfo() const
{
    std::cout << "\n";
    Figure::printFigureInfo();

    std::cout << "\nSides:";
    for (int i{0}; i < getSidesCount(); i++)
        std::cout << getSidesNames()[i] << "=" << getSides()[i] << " ";

    std::cout << "\nAngles: ";
    for (int i{0}; i < getSidesCount(); i++)
        std::cout << getAnglesNames()[i] << "=" << getAngles()[i] << " ";

    std::cout << "\n";
}

Parallelogram::Parallelogram()
    : Quadrangle()
{
    m_figureName = "Parallelogram";
    m_sides = {1, 2, 1, 2};
    m_angles = {30, 150, 30, 150};
}

/*
Basic check for a quadrilateral - in the Quadrilateral class
Verify that the figure is a parallelogram.
1. Opposite angles are equal
2. The sum of angles adjacent to one side is 180°.
*/
bool Parallelogram::isFigureValid() const
{
    Quadrangle::isFigureValid();

    // Opposite angles are equal
    bool isOppositeAnglesEqual = (getAngles()[0] == getAngles()[2])
                                 && (getAngles()[1] == getAngles()[3]);

    const int sumAnglesOneSide = 180;

    // The sum of angles adjacent to one side is 180°
    int anglesSumAB = getAngles()[0] + getAngles()[1];
    int anglesSumCD = getAngles()[2] + getAngles()[3];

    bool isSumOneSide = (anglesSumAB == sumAnglesOneSide) && (anglesSumCD == sumAnglesOneSide);

    return (isOppositeAnglesEqual && isSumOneSide);
}

void Parallelogram::printFigureInfo() const
{
    Quadrangle::printFigureInfo();
}

Rectangle::Rectangle()
    : Parallelogram()
{
    m_figureName = "Rectangle";
    m_sides = {5, 6, 5, 6};
    m_angles = {90, 90, 90, 90};
}

/*
Basic check for a quadrilateral - in the Quadrilateral class
Verify that the figure is a rectangle - all angles are 90 degrees
*/
bool Rectangle::isFigureValid() const
{
    Quadrangle::isFigureValid();

    const int rectangleAngle = 90;

    bool isAnglesEqual = (getAngles()[0] == rectangleAngle
                          && getAngles()[1] == rectangleAngle
                          && getAngles()[2] == rectangleAngle
                          && getAngles()[3] == rectangleAngle);

    return isAnglesEqual;
}

void Rectangle::printFigureInfo() const
{
    Quadrangle::printFigureInfo();
}

Square::Square()
    : Rectangle()
{
    m_figureName = "Square";
    m_sides = {7, 7, 7, 7};
    m_angles = {90, 90, 90, 90};
}

/*
Basic check for a quadrilateral - in the Rectangle class
Adds a check that all sides are the same
*/
bool Square::isFigureValid() const
{
    Rectangle::isFigureValid();

    bool isSideEqual = (getSides()[0] == getSides()[1]
                        && getSides()[0] == getSides()[2]
                        && getSides()[0] == getSides()[3]
                        && getSides()[1] == getSides()[2]
                        && getSides()[2] == getSides()[3]);

    return isSideEqual;
}

void Square::printFigureInfo() const
{
    Quadrangle::printFigureInfo();
}

Rhombus::Rhombus()
    : Parallelogram()
{
    m_figureName = "Rhombus";
    m_sides = {8, 8, 8, 8};
    m_angles = {150, 30, 150, 30};
}

/*
Basic test for a quadrilateral - in the Parallelogram and Quadrangle classes
*/
bool Rhombus::isFigureValid() const
{
    return (Parallelogram::isFigureValid() && Quadrangle::isFigureValid());
}

void Rhombus::printFigureInfo() const
{
    Quadrangle::printFigureInfo();
}
