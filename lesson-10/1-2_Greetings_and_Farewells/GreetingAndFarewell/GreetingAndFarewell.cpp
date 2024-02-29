#include <iostream>
#include "Greeter.h"
#include "windows.h"
#include "Leaver.h"

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

    std::string name = getName();

    Greeter greeter;
    std::cout << greeter.greet(name);

    Leaver leaver;
    std::cout << leaver.leave(name) << "\n";

    system("pause");

    return 0;
}