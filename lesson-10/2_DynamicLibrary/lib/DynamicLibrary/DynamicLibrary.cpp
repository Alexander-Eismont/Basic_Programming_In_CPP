#include <iostream>
#include "Leaver.h"
#include "Windows.h"

std::string getName()
{
	std::cout << "Input your name: ";
	std::string name;
	std::cin >> name;

	return name;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Leaver leaver;

	std::cout << leaver.leave(getName()) << "\n";

	return 0;
}