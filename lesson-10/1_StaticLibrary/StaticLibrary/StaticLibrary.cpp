#include <iostream>
#include "Greeter.h"
#include "windows.h"

std::string getName()
{
    std::cout << "Input you name: ";
    std::string name;
    std::cin >> name;

    return name;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter greeter;

    std::cout << greeter.greet(getName()) << "\n";

    return 0;
}