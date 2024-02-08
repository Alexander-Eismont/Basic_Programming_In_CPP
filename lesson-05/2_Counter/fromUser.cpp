#include <iostream>
#include "fromUser.h"

FromUser::FromUser() {}

std::string FromUser::yesNo()
{
	std::string answer;
	std::cin >> answer;

	return answer;
}

char FromUser::getCommand()
{
	char command;
	std::cin >> command;

	return command;
}