#include "FromUser.h"
#include <iostream>

double FromUser::getDoubleFromUser()
{
	std::cin >> m_double_num;

	return m_double_num;
}

char FromUser::getSymbFromUser()
{
	std::cin >> m_symb;
	
	return m_symb;
}

bool FromUser::setContinue() { return (m_symb == 'y') ? true : false; }