#include <iostream>
#include "Calculator.h"
#include "FromUser.h"

void print();

int main()
{
	print();

	return 0;
}

void print()
{
	do
	{
		FromUser fromUser;

		std::cout << "Do you want to continue? (y or n): ";
		char letter{ fromUser.getSymbFromUser() };

		if (fromUser.setContinue())
		{
			std::cout << "Input num1: ";
			double num1 { fromUser.getDoubleFromUser() };
			std::cout << "Input num2: ";
			double num2 { fromUser.getDoubleFromUser() };

			Calculator calc;
			calc.setNum1(num1);
			calc.setNum2(num2);

			std::cout << "num1 + num2 = " << calc.add() << "\n";
			std::cout << "num1 - num2 = " << calc.subtract1_2() << "\n";
			std::cout << "num2 - num1 = " << calc.subtract2_1() << "\n";
			std::cout << "num1 * num2 = " << calc.multiply() << "\n";

			std::string div_zero_message{ "Can't divide by zero!" };

			if (calc.setNum2(num1))
				std::cout << "num1 / num2 = " << calc.divide1_2() << "\n";
			else
				std::cout << "num1 / num2 = " << div_zero_message << "\n";

			if (calc.setNum1(num2))
				std::cout << "num2 / num1 = " << calc.divide2_1() << "\n";
			else
				std::cout << "num2 / num1 = " << div_zero_message << "\n";
		}
		else
			break;

	} while (true);
}