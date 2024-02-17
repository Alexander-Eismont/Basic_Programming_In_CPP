#include <cmath>
#include <iostream>
#include "math.h"
#include <cassert>

Math::Math(double num1, double num2, char symbol)
    : m_num1{ num1 }
    , m_num2{ num2 }
    , m_symbol{ symbol }
{}

double Math::addition() const
{
    return m_num1 + m_num2;
}

double Math::subtraction() const
{
    return m_num1 - m_num2;
}

double Math::multiplication() const
{
    return m_num1 * m_num2;
}

double Math::division() const
{
    return  m_num1 / m_num2;
}

double Math::exponentiation() const
{
    return pow(m_num1, m_num2);
}

void Math::calculateResult() const
{
    switch (m_symbol) {
    case '+':
        std::cout << m_num1 << " plus " << m_num2 << " = " << addition() << "\n";
        break;
    case '-':
        std::cout << m_num1 << " minus " << m_num2 << " = " << subtraction() << "\n";
        break;
    case '*':
        std::cout << m_num1 << " multiply " << m_num2 << " = " << multiplication() << "\n";
        break;
    case '/':
        std::cout << m_num1 << " divide " << m_num2 << " = " << addition() << "\n";
        break;
    case '^':
        std::cout << m_num1 << " to the " << m_num2 << " power = " << addition() << "\n";
        break;
    }
}
