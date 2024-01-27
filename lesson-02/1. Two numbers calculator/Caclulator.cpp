#include "Calculator.h"

Calculator::Calculator(double num1, double num2)
	: m_num1{ num1 }, m_num2{ num2 } {}

double Calculator::add() { return m_num1 + m_num2; }

double Calculator::subtract1_2() { return m_num1 - m_num2; }

double Calculator::subtract2_1() { return m_num2 - m_num1; }

double Calculator::multiply() { return m_num1 * m_num2; }

double Calculator::divide1_2() { return  m_num1 / m_num2; }

double Calculator::divide2_1() { return m_num2 / m_num1; }

bool Calculator::setNum1() { return (m_num1 != 0) ? true : false; }

bool Calculator::setNum2() { return (m_num2 != 0) ? true : false; }