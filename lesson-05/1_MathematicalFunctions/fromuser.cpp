#include "fromuser.h"
#include <iostream>

FromUser::FromUser() {}

double FromUser::getNumFromUser()
{
    std::cin >> m_num;

    return m_num;
}

char FromUser::getSymbolFromUser()
{
    std::cin >> m_symbol;

    return m_symbol;
}
