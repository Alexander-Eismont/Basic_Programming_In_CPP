#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
private:
	double m_num1;
	double m_num2;

public:
	Calculator();

	double add();
	double subtract1_2();
	double subtract2_1();
	double multiply();
	double divide1_2();
	double divide2_1();

	bool setNum1(double num);
	bool setNum2(double num);
};

#endif