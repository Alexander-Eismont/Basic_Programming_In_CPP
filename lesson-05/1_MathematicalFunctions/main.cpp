#include "math.h"
#include "fromuser.h"
#include <iostream>

int main()
{
	FromUser fromUser;

	std::cout << "Input first num: ";
	double num1{ fromUser.getNumFromUser() };

	std::cout << "Input second num: ";
	double num2{ fromUser.getNumFromUser() };

	std::cout << "Input operation ('+' - addition, '-' - subtration, \'*' - multipliation, "
		"'/' - division, '^' - exponentiation): ";
	char sign{ fromUser.getSymbolFromUser() };

	if (sign == '/' && num2 == 0)
	{
		std::cout << "Cannot division by 0\n";
		return -1;
	}

	Math math(num1, num2, sign);

	math.calculateResult();

	return 0;
}